/*
  mymatrix.hpp - v 0.0. - 11 / 06 / 2022
  Author : Gabriel Vargas Bento de Souza
*/

// --------------------------------------------------------- definicoes globais

#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_

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
   class Matrix
   {
        private:     // area reservada
           T   optional;
           int rows    ;
           int columns ;
           T** data    ;

// --------------------------------------------------------- definicoes arranjo

        public:      // area aberta

           Matrix ( )
           {
               // definir valores iniciais
                  this -> rows    = 0;
                  this -> columns = 0;
               
               // sem reservar area
                  data            = nullptr;
           } // end constructor ( )
           
           Matrix ( int rows, int columns, T initial )
           {
               // definir dado local
                  bool OK  = true;

               // definir valores iniciais
                  this -> optional = initial;
                  this -> rows     = rows   ;
                  this -> columns  = columns;

               // reservar area
                  data       = new T* [rows];
                  if ( data != nullptr )
                  {
                      for ( int x = 0; x < rows; x = x+1)
                      {
                          data [x] = new T [columns];
                          OK = OK && ( data[x] != nullptr );
                      } // end for
                  
                      if (!OK)
                      {
                          data = nullptr;
                      } // end if
                  } // end if
           } // end constructor ( )

           ~Matrix ( )
           {
               if ( data != nullptr )
               {
                   for ( int x = 0; x < rows; x = x+1 )
                   {
                       delete ( data[x] );
                   } // end for
                   delete ( data );
                   data = nullptr ;
               } // end if
           } // end destructor ( )

// -------------------------------------------------------- definicoes operator

           Matrix& operator= ( const Matrix <T> other )
           {
               if ( other.rows == 0 || other.columns == 0 )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if

               else
               {
                   this->rows    = other.rows     ;
                   this->columns = other.columns  ;
                   this->data    = new T* [ rows ];

                   for ( int x = 0; x < rows; x=x+1 )
                   {
                       this->data [ x ] = new T [ columns ];
                   } // end for

                   for ( int x = 0; x < this->rows; x=x+1 )
                   {
                       for ( int y = 0; y < this->columns; y=y+1 )
                       {
                           data [ x ][ y ] = other.data [ x ][ y ];
                       } // end for
                   } // end for
               } // end else

               return ( *this );

           } // end operator= ( )

           Matrix& operator- ( const Matrix <T> other )
           {
               static Matrix <T> result ( 1, 1, 0 );

               if ( other.rows    == 0 || rows    != other.rows   ||
                    other.columns == 0 || columns != other.columns )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if

               else
               {
                   result.rows    = rows;
                   result.columns = other.columns;
                   result.data    = new T* [ result.rows ];

                   for ( int x = 0; x < result.rows; x=x+1 )
                   {
                       result.data [x] = new T [ result.columns ];
                   } // end for

                   for (  int x = 0; x < result.rows; x=x+1 )
                   {
                       for ( int y = 0; y < result.columns; y=y+1 )
                       {
                           result.data [ x ][ y ] = this->data [ x ][ y ] - other.data [ x ][ y ];
                       } // end for
                   } // end for
               } // end else

               return ( result );

           } // end operator- ( )

           Matrix& operator+ ( const Matrix <T> other )
           {
               static Matrix <T> result ( 1, 1, 0 );

               if ( other.rows    == 0 || rows    != other.rows   ||
                    other.columns == 0 || columns != other.columns )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if

               else
               {
                   result.rows    = rows;
                   result.columns = other.columns;
                   result.data    = new T* [ result.rows ];

                   for ( int x = 0; x < result.rows; x=x+1 )
                   {
                       result.data [x] = new T [ result.columns ];
                   } // end for

                   for (  int x = 0; x < result.rows; x=x+1 )
                   {
                       for ( int y = 0; y < result.columns; y=y+1 )
                       {
                           result.data [ x ][ y ] = this->data [ x ][ y ] + other.data [ x ][ y ];
                       } // end for
                   } // end for
               } // end else

               return ( result );

           } // end operator- ( )

           Matrix& operator* ( const Matrix <T> other )
           {
               static Matrix <T> result ( 1, 1, 0 );

               int x   = 0;
               int y   = 0;
               int z   = 0;
               int sum = 0;

               if (       rows<= 0  ||       columns == 0 ||
                    other.rows <= 0 || other.columns == 0 ||
                          columns   != other.rows          )
               {
                   cout << endl << "ERROR: Invalid data." << endl;
                   result.data [ 0 ][ 0 ] = 0;
               } // end if

               else
               {
                   result.rows    = rows;
                   result.columns = other.columns;
                   result.data    = new T* [ result.rows ];

                   for ( int x = 0; x < result.rows; x=x+1 )
                   {
                       result.data [x] = new T [ result.columns ];
                   } // end for

                   for (  int x = 0; x < result.rows; x=x+1 )
                   {
                       for ( int y = 0; y < result.columns; y=y+1 )
                       {
                           sum = 0;
                           for ( z = 0; z < columns; z = z+1 )
                           {
                               sum = sum + data [ x ][ z ] * other.data [ z ][ y ];
                           } // end for
                           result.data [ x ][ y ] = sum;
                       } // end for
                   } // end for
               } // end else

               return ( result );

           } // end operator* ( )

           bool operator!= ( const Matrix <T> other )
           {
               bool result = false;
               int  x      = 0;
               int  y      = 0;

            if ( other.rows    == 0 || rows    != other.rows   ||
                 other.columns == 0 || columns != other.columns )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if

            else
            {
                x = 0;
                while ( x < rows && !result )
                {
                    y = 0;
                    while ( y < columns && !result )
                    {
                        result = ( data[x][y] != other.data[x][y] );
                        y = y+1;
                    } // end while
                    x = x+1;
                } // end while
            } // end else

            return ( result );
           } // end operator!= ( )

           bool operator== ( const Matrix <T> other )
           {
               bool result = true;
               int  x      = 0;
               int  y      = 0;

            if ( other.rows    == 0 || rows    != other.rows   ||
                 other.columns == 0 || columns != other.columns )
            {
                cout << "\nERROR: Missing data.\n" << endl;
                result = false;
            } // end if

            else
            {
                x = 0;
                while ( x < rows && result )
                {
                    y = 0;
                    while ( y < columns && result )
                    {
                        result = ( data[x][y] == other.data[x][y] );
                        y = y+1;
                    } // end while
                    x = x+1;
                } // end while
            } // end else

            return ( result );
           } // end operator== ( )

// ----------------------------------------------------------- definicoes uteis

        void set ( int row, int column, T value )
        {
            if  ( row    < 0 || row    >= rows   ||
                  column < 0 || column >= columns )
            {
                cout << "\nERROR: Invalid position.\n";
            } // end if

            else
            {
                data [row][column] = value;
            } // end else
        } // end set ( )

        T    get ( int row, int column )
        {
            T value = optional;

            if  ( row    < 0 || row    >= rows   ||
                  column < 0 || column >= columns )
            {
                cout << "\nERROR: Invalid position.\n";
            } // end if

            else
            {
                value = data [row][column];
            } // end else

            return ( value );
        } // end get ( )

        const int getRows ( )
        {
            return ( rows );
        } // end getRows ( )

        const int getColumns ( )
        {
            return ( columns );
        } // end getColumns

        void print ( )
        {
            cout << endl;
            for ( int x = 0; x < rows; x = x+1 )
            {
                for ( int y = 0; y < columns; y = y+1 )
                {
                    cout << data[x][y] << "\t";
                } // end for
                cout << endl;
            } // end for
            cout << endl;
        } // end print ( )

        void read ( )
        {
            cout << endl;
            for ( int x = 0; x < rows; x = x+1 )
            {
                for ( int y = 0; y < columns; y = y+1 )
                {
                    cout << setw( 2 ) << x << " , "
                         << setw( 2 ) << y << " : ";
                    cin  >> data[x][y];
                } // end for
            } // end for
            cout << endl;            
        } // end read ( )

        void fprint ( string fileName )
        {
            ofstream afile;

            afile.open ( fileName );
            afile << rows    << endl;
            afile << columns << endl;

            for ( int x = 0; x < rows; x = x+1 )
            {
                for ( int y = 0; y < columns; y = y+1 )
                {
                    afile << data[x][y] << endl;
                } // end for
            } // end for
            afile.close ( );
        } // end fprint ( )

        void fread ( string fileName )
        {
            ifstream afile;
            int m = 0;
            int n = 0;

            afile.open ( fileName );
            afile >> m;
            afile >> n;
            
            // testar se dimensoes sao validas
            if ( m <= 0 || n <= 0 )
            {
                cout << "\nERROR: Invalid dimensions for matrix.\n" << endl;
            } // end if

            else
            {
                // guardar quantidade de dados
                   rows    = m;
                   columns = n;

                // reseervar area
                   data    = new T* [rows];

                   for ( int x = 0; x < rows; x =x+1 )
                   {
                       data[x] = new T [columns];
                   } // end for

                // ler dados
                   for ( int x = 0; x < rows; x = x+1 )
                   {
                       for ( int y = 0; y < columns; y = y+1 )
                       {
                           afile >> data[x][y];
                       } // end for
                   } // end for
            } // end else
            afile.close ( );
        } // end fread ( )

// --------------------------------------------------------- definicoes funcoes

        bool isZeros ( )
        {
            bool result = false;
            int  x      = 0;
            int  y      = 0;

            if ( rows > 0 && columns > 0 )
            {
                result = true;

                while ( x < rows && result )
                {
                    y = 0;
                    while ( y < columns && result )
                    {
                        result = result && ( data[x][y] == 0 );
                        y = y+1;
                    } // end while
                    x = x+1;
                } // end while
            } // end if

            return ( result );
        } // end isZeros ( )

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

        Matrix& escalar ( int k )
        {
            if ( rows <= 0 && columns <=0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if
            else
            {
                // obter dados
                   for ( int x = 0; x < rows; x = x+1 )
                   {
                       for ( int y = 0; y < columns; y = y+1 )
                       {
                           data [ x ][ y ] = (data [ x ][ y ]) * k;
                       } // end for
                   } // end for
            } // end else
            return ( *this );

        } // end escalar ( )

        bool identidade ( )
        {
            bool result = false;
            int  x      = 0;
            int  y      = 0;

            if ( rows > 0 && columns > 0 )
            {
                result = true;

                while ( x < rows && result )
                {
                    y = 0;
                    while ( y < columns && result )
                    {
                        // testar se diagonal principal e' 1
                           if ( x == y )
                           {
                               result = result && ( data[x][y] == 1 );
                           } // end if
                        
                        // testar se outros elementos sao iguais a 0
                           else
                           {
                               result = result && ( data[x][y] == 0 );
                           } // end else
                        y = y+1;
                    } // end while
                    x = x+1;
                } // end while
            } // end if

            return ( result );
        } // end identidade ( )

        Matrix& somarLinhas ( int column1, int column2, int k )
        {
            if ( rows <= 0 && columns <=0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if
            else
            {
                if ( column1 < 0 || column1 >= columns||
                     column2 < 0 || column2 >= columns )
                {
                    cout << "\nERROR: Invalid position.\n";
                } // end if

                else
                {
                    // obter dados
                       for ( int x = 0; x < rows; x = x+1 )
                       {
                           data [ x ][ column1 ] =  data [ x ][ column1 ] + 
                                                   (data [ x ][ column2 ]) * k;
                       } // end for
                } // end else
            } // end else
            return ( *this );

        } // end somarLinhas ( )

        Matrix& subtrairLinhas ( int column1, int column2, int k )
        {
            if ( rows <= 0 && columns <=0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            } // end if
            else
            {
                if ( column1 < 0 || column1 >= columns||
                     column2 < 0 || column2 >= columns )
                {
                    cout << "\nERROR: Invalid position.\n";
                } // end if

                else
                {
                    // obter dados
                       for ( int x = 0; x < rows; x = x+1 )
                       {
                           data [ x ][ column1 ] =  data [ x ][ column1 ] - 
                                                   (data [ x ][ column2 ]) * k;
                       } // end for
                } // end else
            } // end else
            return ( *this );

        } // end subtrairLinhas ( )

        int procurarLinhas ( int procurado )
        {
            int linha = 0;
            bool ok   = false;

            // testar se dimensoes validas
            if ( rows > 0 && columns > 0 )
            {
                // testar se encontrado
                   int x = 0;
                   int y = 0;

                   while ( !ok && x < rows )
                   {
                       y = 0;
                       while ( !ok && y < columns )
                       {
                           // testar se valor esta' na matriz
                              if ( data[x][y] == procurado )
                              {
                                  linha = x;
                                  ok    = true;
                              } // end if
                            y = y+1;
                       } // end while
                       x = x+1;
                   } // end while
            } // end if

            // testar se valor encontrado
               if ( ok )
               {
                   // retorna apenas a primeira linha em que ele aparece
                      return ( linha );
               } // end if

               else
               {
                   cout << "ERROR: Valor nao encontrado ";
                   return ( -1 );
               }
        } // end procurarLinhas ( )

        int procurarColunas ( int procurado )
        {
            int coluna = 0;
            bool ok    = false;

            // testar se dimensoes validas
            if ( rows > 0 && columns > 0 )
            {
                // testar se encontrado
                   int x = 0;
                   int y = 0;

                   while ( !ok && x < columns )
                   {
                       y = 0;
                       while ( !ok && y < rows )
                       {
                           // testar se valor esta' na matriz
                              if ( data[y][x] == procurado )
                              {
                                  coluna = x;
                                  ok     = true;
                              } // end if
                            y = y+1;
                       } // end while
                       x = x+1;
                   } // end while
            } // end if

            // testar se valor encontrado
               if ( ok )
               {
                   // retorna apenas a primeira linha em que ele aparece
                      return ( coluna );
               } // end if

               else
               {
                   cout << "ERROR: Valor nao encontrado ";
                   return ( -1 );
               }
        } // end procurarLinhas ( )

        Matrix& transpor ( )
        {
               static Matrix <T> result ( 1, 1, 0 );

               if ( rows    <= 0 ||  columns <= 0 )
               {
                   cout << "\nERROR: Missing data.\n" << endl;
               } // end if

               else
               {
                   result.rows    = columns;
                   result.columns = rows;
                   result.data    = new T* [ result.rows ];

                   for ( int x = 0; x < result.rows; x=x+1 )
                   {
                       result.data [x] = new T [ result.columns ];
                   } // end for

                   for ( int x = 0; x < result.rows; x=x+1 )
                   {
                       for ( int y = 0; y < result.columns; y=y+1 )
                       {
                           result.data [ x ][ y ] = data [ y ][ x ];
                       } // end for
                   } // end for
               } // end else
            return ( result );
        } // end transpor ( )

        bool linhaCrescente ( )
        {
            bool result = false;
            int  x      = 0;
            int  y      = 0;
            int cont    = 0;

            if ( rows > 0 && columns > 0 )
            {
                result = true;

                while ( x < rows && result )
                {
                    y = 0;
                    while ( y < columns && result )
                    {
                        // testar se os valores da linha satisfazem 'a condicao
                           cont = cont + 1;
                           result = result && ( data[x][y] == cont );
                           y = y+1;
                    } // end while
                    x = x+1;
                } // end while
            } // end if

            return ( result );
        } // end linhaCrescente ( )

        bool colunaCrescente ( )
        {
            bool result = false;
            int  x      = 0;
            int  y      = 0;
            int cont    = 0;

            if ( rows > 0 && columns > 0 )
            {
                result = true;

                while ( x < columns && result )
                {
                    y = 0;
                    while ( y < rows && result )
                    {
                        // testar se os valores da linha satisfazem 'a condicao
                           cont = cont + 1;
                           result = result && ( data[y][x] == cont );
                           y = y+1;
                    } // end while
                    x = x+1;
                } // end while
            } // end if

            return ( result );
        } // end colunaCrescente ( )


   }; // end class

#endif

