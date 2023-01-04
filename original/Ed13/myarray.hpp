/*
  myarray.hpp - v 0.0. - 01 / 06 / 2022
  Author: Gabriel Vargas Bento de Souza
*/

// --------------------------------------------------------- definicoes globais

#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

// dependencias

#include <iostream>
using std::cin ;     // para entrada
using std::cout;     // para saida
using std::endl;     // para mudar de linha

#include <iomanip>
using std::setw;     // para definir espacamento

#include <string>
using std::string;   // para cadeia de caracteres

#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler    arquivo

#include <math.h>    // para definicoes matematicas

template < typename T >
   class Array
   {
        private:     // area reservada
           T optional;
           int length;
           T *data   ;

        public:      // area aberta
// --------------------------------------------------------- definicoes arranjo

           Array ( int n, T initial )
           {
               // definir valores iniciais
                  optional = initial;
                  length   = 0;
                  data     = nullptr;

               // reservar area
                  if ( n > 0 )
                  {
                      length = n;
                      data   = new T [length];
                  } // end if
           } // end constructor ( )

           Array ( )
           {
               // definir valores iniciais
                  length = 0;
               
               // reservar area
                  data   = nullptr;
           } // end constructor ( )

           Array ( int length, int other [] )
           {
               if ( length <= 0 )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if
               else
               {
                   // criar copia
                      this -> length = length;
                   
                   // reservar area
                      data  = new T [this->length];

                   // ler dados
                      for ( int x = 0; x < this->length; x = x+1 )
                      {
                          data [ x ] = other [ x ];
                      } // end for
               } // end else
           } // end constructor ( )

           Array ( const Array& other )
           {
               if ( other.length <= 0 )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if
               else
               {
                   // criar copia
                      length = other.length;
                   
                   // reservar area
                      data   = new T [other.length];

                   // ler dados
                      for ( int x = 0; x < length; x = x+1 )
                      {
                          data [ x ] = other.data [ x ];
                      } // end for
               } // end else
           } // end constructor ( )

// -------------------------------------------------------- definicoes operator

           Array& operator= ( const Array <T> other )
           {
               if ( length <= 0 )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if
               else
               {
                   // criar copia
                      this -> length = other.length;
                   
                   // reservar area
                      this -> data   = new T [other.length];

                   // ler dados
                      for ( int x = 0; x < this->length; x = x+1 )
                      {
                          data [ x ] = other.data [ x ];
                      } // end for
               } // end else
               return ( *this );

           } // end operator= ( )

           Array& operator+ ( const Array <T> other )
           {
               static Array <T> result ( other );

               if ( length <= 0 )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if
               else
               {
                   // somar dados
                      for ( int x = 0; x < this->length; x = x+1 )
                      {
                          result.data [ x ] = 
                          result.data [ x ] + 
                          this-> data [ x ] ;
                      } // end for
               } // end else
               return ( result );
           } // end operator+ ( )

           Array& operator- ( const Array <T> other )
           {
               static Array <T> result ( other );

               if ( length <= 0 )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if
               else
               {
                   // somar dados
                      for ( int x = 0; x < this->length; x = x+1 )
                      {
                          result.data [ x ] = 
                          this-> data [ x ] - 
                          result.data [ x ] ;
                      } // end for
               } // end else
               return ( result );
           } // end operator- ( )

           T& operator[] ( const int position )
           {
               static T value = optional;

               if ( position < 0 || length <= position )
               {
                   cout << "\nERROR: Invalid position.\n" << endl;
               } // end if
               else
               {
                   value = data [ position ];
               } // end else
               return ( value );
           } // end operator[] ( )

           bool operator== ( const Array <T> other )
           {
               bool result = false;
               int  x      = 0;

               if ( other.length == 0 ||
                          length != other.length )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if
               else
               {
                   // setar dados
                      x      = 0;
                      result = true;

                   // comparar dados
                      while ( x < this->length && result )
                      {
                          result = result && ( data [ x ] == other.data [ x ] );
                          x      = x+1;
                      } // end while
               } // end else
               return ( result );
           } // end operator== ( )

           bool operator!= ( const Array <T> other )
           {
               bool result = false;
               int  x      = 0;

               if ( other.length == 0 ||
                          length != other.length )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if
               else
               {
                   // comparar dados
                      while ( x < this->length && !result )
                      {
                          result =  data [ x ] != other.data [ x ];
                          x      = x+1;
                      } // end while
               } // end else
               return ( result );
           } // end operator== ( )

// ----------------------------------------------------------- definicoes uteis

        void free ( )
        {
            if ( data != nullptr )
            {
                delete ( data );
                data  = nullptr;
            } // end if
        } // end free ( )

        void set ( int position, T value )
        {
            if ( 0 <= position && position < length )
            {
                data [ position ] = value;
            } // end if
        } // end set ( )

        T    get ( int position )
        {
            T value = optional;

            if ( 0 <= position && position < length )
            {
                value = data [ position ];
            } // end if

            return ( value );
        } // end get ( )

        void print ( )
        {
            cout << endl;
            for ( int x = 0; x < length; x = x+1 )
            {
                cout << setw ( 3 ) << x << " : "
                     << setw ( 9 ) << data [ x ]
                     << endl;
            } // end for
            cout << endl;
        } // end print ( )

        void read ( )
        {
            cout << endl;
            for ( int x = 0; x < length; x =x+1 )
            {
                cout << setw ( 3 ) << x << " : ";
                cin >> data[x];
            } // end for
            cout << endl;
        } // end read ( )

        void fprint ( string fileName )
        {
            ofstream afile;     // output file

            afile.open ( fileName );
            afile << length << endl;
            for ( int x = 0; x < length; x = x+1 )
            {
                afile << data[x] << endl;
            } // end for
            afile.close ( );
        } // end fprint ( )

        void fread ( string fileName )
        {
            ifstream afile;     // input  file

            int n = 0;

            afile.open ( fileName );
            afile >> n;
            if ( n<=0 )
            {
                cout << "\nERROR: Invalid length.\n" << endl;
            } // end if
            else
            {
                // guardar a quantidade de dados
                   length = n;
                
                // reservar area
                   data   = new T [n];

                // ler dados
                   for ( int x = 0; x < length; x = x+1 )
                   {
                       afile >> data[x];
                   } // end for
            } // end else
            afile.close ( );
        } // end fread ( )


        const int getLength ( )
        {
            return ( length );
        } // end getLength ( )

// --------------------------------------------------------- definicoes funcoes

        int gerarInt ( int inferior, int superior )
        {
            // definir dados
               int x = 0;
            
            // verificar limite
               if ( superior+1 != 0 )
               {
                   // gerar numeros aleatorios
                      x = rand ( ) % (superior+1);

                   // testar limite inferior
                      while ( x < inferior )
                      {
                          x = 0;
                          x = rand ( ) % (superior+1);
                      } // end while
               } // end if

            // retornar valor
               return ( x );

        } // end gerarInt ( )

        int acharMaior ( )
        {
            // definir dados
               int x     = 0;
               int y     = 0;
               int z     = 0;
               int maior = 0;
            
            // verificar limite
               if ( length > 1 )
               {
                   // obter valor inicial
                      maior = get ( 0 );

                   // separar valores
                      for ( int i = 0; i < (getLength ( )-1); i = i+1 )
                      {
                          // definir
                             x = get (  i  );
                             y = get ( i+1 );

                          // encontar maior
                             if ( x > y )
                             {
                                 z = x;
                             } // end if
                             
                             else
                             {
                                 z = y;
                             } // end else

                          // copiar maior
                             if ( z > maior ) { maior = z; }
                      } //end for
               } // end if

               else
               {
                   if   ( length == 1 ) { maior = get ( 0 );    }
                   else {cout << "\nERROR: Invalid length.\n" << endl;}
               } // end else

            // retornar valor
               return ( maior );

        } // end acharMaior ( )

        int acharMenor ( )
        {
            // definir dados
               int x     = 0;
               int y     = 0;
               int z     = 0;
               int menor = 0;
            
            // verificar limite
               if ( length > 1 )
               {
                   // obter valor inicial
                      menor = get ( 0 );

                   // separar valores
                      for ( int i = 0; i < (getLength ( )-1); i = i+1 )
                      {
                          // definir
                             x = get (  i  );
                             y = get ( i+1 );

                          // encontar menor
                             if ( x < y )
                             {
                                 z = x;
                             } // end if
                             
                             else
                             {
                                 z = y;
                             } // end else

                          // copiar maior
                             if ( z < menor ) { menor = z; }
                      } //end for
               } // end if

               else
               {
                   if   ( length == 1 ) { menor = get ( 0 );    }
                   else {cout << "\nERROR: Invalid length.\n" << endl;}
               } // end else

            // retornar valor
               return ( menor );

        } // end acharMenor ( )

        int somarValores ( int x )   // recursivamente
        {
            // definir dados
               int soma = 0;
            
            // verificar limite
               if ( x > 0 )
               {
                   // separar valores
                      if ( x > 1 )
                      {
                          // somar
                             soma = get ( x-1 ) + somarValores ( x-1 );
                      } // end if
                      else
                      {
                          // definir soma inicial
                             soma = get ( 0 );
                      } // end else
               } // end if

               else
               {
                   cout << "\nERROR: Invalid length.\n" << endl;
               } // end else

            // retornar valor
               return ( soma );

        } // end somarValores ( )

        double mediaValores ( )
        {
            // definir dados
               double media = 0.0;
            
            // verificar limite
               if ( length > 0 )
               {
                   // somar
                      media = ( ( 1.0 * somarValores ( length ) ) / ( 1.0 * length ) );
               } // end if

               else
               {
                   cout << "\nERROR: Invalid length.\n" << endl;
               } // end else

            // retornar valor
               return ( media );

        } // end mediaValores ( )

        bool zeros ( )
        {
            // definir dados
               bool result = true;
               int  i      = 0;
            
            // verificar tamanho
               if ( length > 0 )
               {
                   // passar pelo arranjo
                      while ( i < length && result )
                      {
                          // verificar
                             result = result && ( get ( i ) == 0 );
                             i = i+1;
                      } // end while
               } // end if

               else
               {
                   cout << "\nERROR: Invalid length.\n" << endl;
                   result = false;
               } // end else

            // retornar valor
               return ( result );

        } // end zeros ( )

        bool decrescente ( )
        {
            // definir dados
               bool result = true;
               int  i      = 0;
            
            // verificar tamanho
               if ( length > 1 )
               {
                   // passar pelo arranjo
                      i = 1;
                      while ( i < length && result )
                      {
                          // verificar
                             result = result && ( get ( i ) <= get ( i-1 ) );
                             i = i+1;
                      } // end while
               } // end if

               else
               {
                   if ( length == 1 ) { result = true; }
                   else
                   {
                       cout << "\nERROR: Invalid length.\n" << endl;
                       result = false;
                   } // end else
               } // end else

            // retornar valor
               return ( result );

        } // end decrescente ( )

        bool acharValor ( int x, int inferior, int superior )
        {
            // definir dados
               bool result = false;
               int  i      = 0;
            
            // verificar tamanho
               if ( length   >  0        &&
                    length   >  inferior && inferior >= 0      &&
                    length-1 >= superior && superior > inferior )
               {
                   // passar pelo arranjo
                      i = inferior ;
                      while ( i < length-1 && !result && i <= superior )
                      {
                          // verificar
                             result = ( get ( i ) == x );
                             i = i+1;
                      } // end while
               } // end if

            // retornar valor
               return ( result );

        } // end acharValor ( )

        Array& escalar ( const Array <T> other, int k )
        {
            static Array <T> result ( other );

            if ( length <= 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if
            else
            {
                // obter dados
                   for ( int x = 0; x < length; x = x+1 )
                   {
                       result.data [ x ] = other.data [ x ] * k;
                   } // end for
            } // end else
            return ( result );

        } // end escalar ( )

        /**
         ordenarDecrescente - Funcao para ordenar um arranjo, trocando 
         elementos vizinhos. Repetir enquanto arranjo esta' desordenado
         @param  other      - Arranjo de entrada
         @return Array&     - Arranjo ordenado
         */
        Array& ordenarDecrescente ( const Array <T> other )
        {
            static Array <T> result ( other );
            
            int x = 0;
            int y = 0;
            int k = 0;

            if ( length <= 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if
            else
            {
                // testar fim do arranjo e se ja esta ordenado
                   while ( !(result.decrescente( ) ) && (k < length-1) )
                   {
                       for ( int i = 0; i < length-1; i = i+1 )
                       {
                           x = result.data [  i  ];
                           y = result.data [ i+1 ];
                           if ( x < y )
                           {
                               // trocar
                                  result.data [ i ] = y;
                                  result.data [i+1] = x;
                           } // end if
                       } // end for
                       k = k+1;
                       // result.print ( );
                       // getchar ( );
                   } // end while
            } // end else
            // printf ( "\ncontador = %d\n", k );
            return ( result );

        } // end ordenarDecrescente ( )

        /**
         inverter       - Funcao para inverter um arranjo
         @param  other  - Arranjo de entrada
         @return Array& - Arranjo invertido
         */
        Array& inverter ( const Array <T> other )
        {
            static Array <T> result ( other );
            
            int x = 0;
            int y = 0;
            int k = 0;

            if ( length <= 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if
            else
            {
                // testar se tamanho e' maior que 1
                   if ( length > 1 ) 
                    {
                        // trocar extremos
                           for ( int i = 0; i < length/2; i = i+1 )
                           {
                               // obter valores
                                  k = length-1-i;
                                  x = result.data [ i ];
                                  y = result.data [ k ];
                               // trocar
                                  result.data [ i ] = y;
                                  result.data [ k ] = x;
                           } // end for
                    } // end if

            } // end else
            return ( result );

        } // end ordenarDecrescente ( )

        /**
         menor           - Funcao para encontrar menor numero,
                           a partir de valor inicial
         * @param other  - arranjo de entrada
         * @param k      - valor inicial de busca
         * @return menor - menor valor, a partir do pedido;
                           zero, caso nao haja
         */
        int menor ( const Array <T> other, int k )
        {
            // definir dados
               int x     = 0;
               int y     = 0;
               int z     = 0;
               int menor = 0;
            
            // verificar limite
               if ( length > 1 )
               {
                   // obter valor inicial
                      z = get ( 0 );
                      if ( z > k )
                      {
                          menor = z;
                      }

                   // separar valores
                      for ( int i = 0; i < (getLength ( )-1); i = i+1 )
                      {
                          // definir
                             x = get (  i  );
                             y = get ( i+1 );

                          // encontar menor
                             if ( x < y )
                             {
                                 z = x;
                             } // end if
                             
                             else
                             {
                                 z = y;
                             } // end else

                          // copiar maior
                             if ( z < menor &&
                                  z > k      ) 
                             { menor = z; }
                      } //end for
               } // end if

               else
               {
                   cout << "\nERROR: Invalid length.\n" << endl;
               } // end else

            // retornar valor
               return ( menor );

        } // end menor ( )

        /**
         filtrar         - Funcao para comparar elementos de dois arranjos
         * @param other1 - arranjo de entrada 1
         * @param other1 - arranjo de entrada 2
         * @return valor - quantidade de termos 
         */
        int filtrar ( const Array <T> other1, const Array <T> other2 )
        {
            // definir dados
               int  x     = 0;
               int  y     = 0;
               int  a     = 0;
               int  b     = 0;
               int  j     = 0;
               bool OK    = false;
               int unicos = 0;
            
            // verificar existencia
               if ( other1.data && other2.data )
               {
                   // obter arranjo para armazenar
                      static Array <int> result ( other1.length, 0 );

                   // obter tamanhos
                      x = other1.length;
                      y = other2.length;
                      // printf ( "tamanho 1 = %d\n", x );
                      // printf ( "tamanho 2 = %d\n", y );

                   // separar valores
                      for ( int i = 0; i < x; i = i+1 )
                      {
                          // obter valor do primeiro arranjo
                             a = other1.data[i];
                             // printf ( "a = other1.data[i] = %d\n", a );
                          
                          // comparar com segundo arranjo
                             int k = 0;
                             while ( !OK && k < y )
                             {
                                 // obter valor do segundo arranjo
                                    b = other2.data[k];
                                    // printf ( "b = other2.data[k] = %d\n", b );

                                 // comparar
                                    if ( a == b )
                                    {
                                        // add ao arranjo
                                           result.data[j] = a;

                                        // mostar valor
                                           printf ( "%d\n", a );

                                        // ajustar variaveis
                                           j  = j+1 ;
                                           OK = true;
                                    } // end if
                                    k = k+1;
                             } // end while
                             OK = false;
                       } //end for                      

                   // obter quantidade de dados unicos
                      unicos = unicos + ( other1.length- j );
                      unicos = unicos + ( other2.length - j );
               } // end if

               else
               {
                   cout << "\nERROR: Invalid array.\n" << endl;
               } // end else

            // retornar valor
               return ( unicos );

        } // end filtrar ( )        

        /**
         freadBinario - Funcao para ler caracteres de arquivo e isolar 0 e 1
         * @param fileName - Nome arquivo de origem 
         * @return Array&  - retorna arranjo dos valores encontrados;
                             caso nao tenha no arquivo, retorna arranjo com 0
         */
        Array& freadBinario ( string fileName )
        {
            // dados iniciais
               int  i = 0;
               int  k = 0;
               char texto [80];
            
            // definir arranjo 
               static Array <int> tmp ( 80, 0 );
               
            // abrir arquivo
               ifstream afile;
               afile.open ( fileName );
            
            // arriscar leitura
               while ( afile )
               {
                   // copiar linha
                      afile >> texto;
                      
                   // testar se caracteres sao 0 ou 1
                      i = 0;
                      while ( texto[i] != '\0' && i < 80 )
                      {
                          if ( texto[i] == '0' ||
                               texto[i] == '1'  )
                          {
                              // salvar arranjo
                                 tmp.data[k] = ((int)texto[i]) - 48;
                                 // cout << "\nbinario.data[k] = " << tmp.data[k] << endl;
                                 k = k+1;
                          } // end if
                          i = i+1;
                      } // end while
               } // end while
            
            // copiar arranjo
               static Array <int> binario ( k, 0 );
               binario.set( 0, 0 );
            
               if ( k > 0 ) // evitar criar arranjo vazio
                            // data[0] = 0;
               {
                   for ( i = 0; i < k+1; i = i+1 )
                   {
                       binario.data[i] = tmp.data[i];
                   } // end for
               } // end if

            // fehcar arquivo
               afile.close ( );

            // retornar arranjo
               return ( binario );

        } // end freadBinario ( )

        /**
         paraDecimal     - Funcao para passar arranjo binario para decimal
         * @return valor - valor em decimal
         */
        int paraDecimal ( )
        {
            // definir dados
               double x     = 0.0;
               double y     = 0.0;
               int    valor = 0;
            
            // calcular valor
               if ( length > 0 )
               {
                   for ( int i = getLength( ); i > 0; i = i-1 )
                   {
                       x = x + (1.0 * get(i-1)) * pow( 2.0 , y );
                       y = y+1.0;
                   } // end for
               } // end if

            // atribuir resultado
                valor = (int)x;

            // retornar valor
               return ( valor );

        } // end paraDecimal ( )

        /**
         supermercado   - Procedimento para receber arquivo com informacoes sobre
                           supermercados e separa'-las em arquivos diferentes
         * @param dados  - arquivo com as informacoes
         * @param nome   - arquivo para gravar nome do supermercado
         * @param codigo - arquivo para gravar codigo do supermercado
         * @param preco  - arquivo para gravar preco do produto
         */
        void supermercado ( string dados ,
                            string nome  ,
                            string codigo,
                            string preco  )
        {
            // definir dados
               int    n = 0;
               char   tmp_nome [80];
               int    tmp_codigo = 0;
               double tmp_preco = 0.0;
            
            // abrir arquivos
               ifstream arq_dados ;
               ofstream arq_nome  ;
               ofstream arq_codigo;
               ofstream arq_preco ;

               arq_dados.open  ( dados  );
               arq_nome.open   ( nome   );
               arq_codigo.open ( codigo );
               arq_preco.open  ( preco  );

            // ler dados
               arq_dados >> n; // testar se valor valido
               // cout << "\nNumero de dados = " << n << endl;

               arq_nome   << n << endl;
               arq_codigo << n << endl;
               arq_preco  << n << endl;

               cout << "\nListagem supermercados participantes:\n" << endl;

               for ( int i = 0; i < n; i = i+1 )
               {
                   arq_dados >> tmp_nome;
                   cout      << tmp_nome;
                   arq_nome  << tmp_nome << endl;

                   arq_dados >> tmp_codigo;
                   cout << " ( " << tmp_codigo << " ) ";
                   arq_codigo << tmp_codigo << endl;

                   arq_dados >> tmp_preco;
                   cout << " = RS " << tmp_preco << endl;
                   arq_preco << tmp_preco << endl;
               }
            
            // fechar arquivos
               arq_dados.close  ( );
               arq_nome.close   ( );
               arq_codigo.close ( );
               arq_preco.close  ( );

        } // end supermercado ( )

        /**
         abaixoMedia     - Procedimento para comparar valor com outros 
                           em arquivo e dizer quais estao abaixo da media.
                           Em seguida, mostrar os supermercados desses precos
         * @param media  - media a ser comparada
         * @param nome   - arquivo para gravar nome do supermercado
         * @param codigo - arquivo para gravar codigo do supermercado
         * @param preco  - arquivo para gravar preco do produto
         */
        void abaixoMedia ( double media ,
                            string nome  ,
                            string codigo,
                            string preco  )
        {
            // definir dados
               int    n = 0;
               int    k = 0;
               int    posicao  [80];
               char   tmp_nome [80];
               int    tmp_codigo = 0;
               double tmp_preco = 0.0;

               Array <string> mercado( 10, "\0" );
            
            // abrir arquivos
               ifstream arq_nome  ;
               ifstream arq_codigo;
               ifstream arq_preco ;

               arq_nome.open   ( nome   );
               arq_codigo.open ( codigo );
               arq_preco.open  ( preco  );

            // ler dados
               arq_preco >> n;
               for ( int i = 0; i < n; i = i+1 )
               {
                   // comparar media
                      arq_preco >> tmp_preco;

                      if ( tmp_preco < media )
                      {
                          posicao[k] = i;
                          k = k+1;
                      } // end if
               } // end for
            
            // mostrar 
               arq_nome   >> n;
               arq_codigo >> n;
               k = 0;
               for ( int i = 0; i < n; i = i+1 )
               {
                   // comparar posicao
                      arq_nome   >> tmp_nome;
                      arq_codigo >> tmp_codigo;
                      if ( posicao[k] == i )
                      {
                          cout << tmp_nome << " ( " << tmp_codigo << " ) " << endl;
                          k = k+1;
                      } // end if
               } // end for
            
            // fechar arquivos
               arq_nome.close   ( );
               arq_codigo.close ( );
               arq_preco.close  ( );

        } // end abaixoMedia ( )

   };

#endif