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
                      media = ( (double) somarValores ( length ) ) / ( 1.0 * length );
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

        Array& ordenarDecrescente ( const Array <T> other )
        {
            static Array <T> result ( other );
            
            int x = 0;
            int y = 0;

            if ( length <= 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if
            else
            {
                // obter novo
                   for ( int k = 0; k < length-1; k = k+1 )
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
                   } // end for
            } // end else
            return ( result );

        } // end ordenarDecrescente ( )

   };

#endif