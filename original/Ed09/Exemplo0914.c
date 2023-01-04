/*
Exemplo0914 - v0.0. - 22 / 05 / 2022
Author: Gabriel Vargas Bento de Souza
*/

// dependencias
   #include "io.h"

/**
 Method00 - Nao faz nada.
 */

void method00 ( )
{
    // nao faz nada
} // end method00 ( )

/**
 printIntMatrix - Mostrar arranjo bidimensional com valores inteiros.
 @param rows    - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix  - grupo de valores inteiros
*/

void printIntMatrix ( int rows, int columns, int matrix[ ][columns] )
{
   // definir dado local
      int x = 0;
      int y = 0;

   // mostrar valores na matriz
      for ( x=0; x<rows; x=x+1 )
      {
         for ( y=0; y<columns; y=y+1 )
         {
            // mostrar valor
            IO_printf ( "%3d\t", matrix [ x ][ y ] );
         } // end for
         IO_printf ( "\n" );

      } // end for

} // end printIntMatrix ( )

/**
Method01 - Mostrar valores inteiros de uma matriz
*/
void method01 ( )
{
   // definir dado
      int matrix [ ][3] = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                          };

   // identificar
      IO_id ( "Exemplo0914 - Method01 - v0.0" );
    
   // executar metodo auxiliar
      printIntMatrix ( 3, 3, matrix );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
 readIntMatrix  - Ler arranjo bidimensional com valores inteiros.
 @param rows    - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix  - grupo de valores inteiros
*/

void readIntMatrix ( int rows, int columns, int matrix[ ][columns] )
{
    // definir dados locais
       int   x    = 0;
       int   y    = 0;
       int   z    = 0;
       chars text = IO_new_chars ( STR_SIZE );

    // ler e guardar valores em arranjo
       for ( x=0; x<rows; x=x+1 )
       {
           for ( y=0; y<columns; y=y+1 )
           {
               // ler valor
                  strcpy ( text, STR_EMPTY );
                  z = IO_readint ( IO_concat (
                                   IO_concat ( IO_concat ( text, IO_toString_d ( x ) ), ", " ),
                                   IO_concat ( IO_concat ( text, IO_toString_d ( y ) ), " : " ) ) );

               // guardar valor
                  matrix [ x ][ y ] = z;
           } // end for
       } // end for

} // end readIntMatrix ( )

/**
 Method02 - ler matriz com valores inteiros
 */

void method02 ( )
{
   // definir dados
      int n = 2;
      int matrix [ n ] [ n ];

   // identificar
      IO_id ( "Exemplo0914 - Method02 - v0.0" );

   // ler dados
      readIntMatrix ( n, n, matrix );

   // mostrar dados
      IO_printf ( "\n" );
      printIntMatrix ( n, n, matrix );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 fprintIntMatrix - Gravar arranjo bidimensional com valores inteiros.
 @param fileName - nome do arquivo
 @param rows     - quantidade de linhas
 @param columns  - quantidade de colunas
 @param matrix   - grupo de valores inteiros
*/

void fprintIntMatrix ( chars fileName, int rows, int columns, 
                                       int matrix[ ][columns] )
{
    // definir dados locais
       FILE* arquivo = fopen ( fileName, "wt" );
       int x = 0;
       int y = 0;

    // gravar quantidade de dados
       IO_fprintf ( arquivo, "%d\n", rows );
       IO_fprintf ( arquivo, "%d\n", columns );

    // gravar valores no arquivo
       for ( x=0; x<rows; x=x+1 )
       {
           for ( y=0; y<columns; y=y+1 )
           {
               // gravar valor
                  IO_fprintf ( arquivo, "%d\n", matrix [ x ][ y ] );
           } // end for
       } // end for

    // fechar arquivo
       fclose ( arquivo );

} // end fprintIntMatrix ( )

/**
 Method03 - gravar matriz intiera em arquivo
 */

void method03 ( )
{  
   // definir dados
      int rows   = 0;
      int columns = 0;

   // identificar
      IO_id ( "Exemplo0914 - Method03 - v0.0" );

   // ler dados
      rows = IO_readint ( "\nrows = " );
      columns = IO_readint ( "\ncolumns = " );
      IO_printf ( "\n" );
      if ( rows <= 0 || columns <= 0 )
      {
          IO_println ( "\nERRO: Valor invalido." );
      } // end if
      else
      {
          // reservar espaco
             int matrix [ rows ][ columns ];
          // ler dados
             readIntMatrix ( rows, columns, matrix );
          // mostrar dados
             IO_printf ( "\n" );
             printIntMatrix ( rows, columns, matrix );
          // gravar dados
             IO_printf      ( "\n" );
             fprintIntMatrix( "MATRIX1.TXT", rows, columns, matrix );
      } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 freadMatrixRows - Ler tamanho (linhas) da matriz com valores inteiros.
 @return quantidade de linhas da matriz
 @param fileName - nome do arquivo
*/

int freadMatrixRows ( chars fileName )
{
    // definir dados locais
       int n         = 0;
       FILE* arquivo = fopen ( fileName, "rt" );
       ints array    = NULL;

    // ler a quantidade de dados
       IO_fscanf ( arquivo, "%d", &n );
       if ( n <= 0 )
       {
           IO_println ( "ERRO: Valor invalido." );
           n = 0;
       } // end if
    // retornar dado lido
       return ( n );

} // end freadMatrixRows ( )

/**
 freadMatrixColumns - Ler tamanho (colunas) da matriz com valores inteiros.
 @return quantidade de colunas da matriz
 @param fileName - nome do arquivo
*/

int freadMatrixColumns ( chars fileName )
{
    // definir dados locais
       int   n       = 0;
       FILE* arquivo = fopen ( fileName, "rt" );

    // ler a quantidade de dados
       IO_fscanf ( arquivo, "%d", &n );
       IO_fscanf ( arquivo, "%d", &n );
       if ( n <= 0 )
       {
           IO_println ( "ERRO: Valor invalido." );
           n = 0;
       } // end if
    
    // retornar dado lido
       return ( n );

} // end freadMatrixColumns ( )

/**
 freadIntMatrix - Ler arranjo bidimensional com valores inteiros.
 @param fileName - nome do arquivo
 @param rows - quantidade de valores
 @param columns - quantidade de valores
 @param matrix - grupo de valores inteiros
*/

void freadIntMatrix ( chars fileName, int rows, int columns, int matrix[ ][columns] )
{
    // definir dados locais
       int   x       = 0;
       int   y       = 0;
       int   z       = 0;
       FILE* arquivo = fopen ( fileName, "rt" );

    // ler a quantidade de dados
       IO_fscanf ( arquivo, "%d", &x );
       IO_fscanf ( arquivo, "%d", &y );
       if ( rows    <= 0 || rows    > x ||
            columns <= 0 || columns > y )
        {
            IO_println ( "ERRO: Valor invalido." );
        } // end if
        else
        {
            // ler e guardar valores em arranjo
               x = 0;
               while ( ! feof ( arquivo ) && x < rows )
               {
                   y = 0;
                   while ( ! feof ( arquivo ) && y < columns )
                   {
                       // ler valor
                          IO_fscanf ( arquivo, "%d", &z );
                       // guardar valor
                          matrix [ x ][ y ] = z;
                       // passar ao proximo
                          y = y+1;
                   } // end while
                   // passar ao proximo
                      x = x+1;
               } // end while
        } // end else

    // fechar arquivo
       fclose ( arquivo );

} // end freadIntMatrix ( )

/**
 Method04 - ler matriz de arquivo com valores inteiros
 */

void method04 ( )
{
   // definir dados
      int rows    = 0;
      int columns = 0;

   // identificar
      IO_id ( "Exemplo0914 - Method04 - v0.0" );

   // ler dados
      rows    = freadMatrixRows    ( "MATRIX1.TXT" );
      columns = freadMatrixColumns ( "MATRIX1.TXT" );
      if ( rows <= 0 || columns <= 0 )
      {
          IO_println ( "\nERRO: Valor invalido." );
      } // end if
      else
      {
          // definir armazenador
             int matrix [ rows ][ columns ];
          // ler dados
             freadIntMatrix ( "MATRIX1.TXT", rows, columns, matrix );
          // mostrar dados
             IO_printf ( "\n" );
             printIntMatrix ( rows, columns, matrix );
       } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 copyIntMatrix  - Copiar matriz com valores inteiros.
 @param rows    - quantidade de valores
 @param columns - quantidade de valores
 @param matrix  - grupo de valores inteiros
*/

void copyIntMatrix ( int rows, int  columns,
                     int matrix2[ ][columns], 
                     int matrix1[ ][columns] )
{
    // definir dados locais
       int x = 0;
       int y = 0;

    // testar valores
       if ( rows <= 0 || columns <= 0 )
       {
           IO_println ( "ERRO: Valor invalido." );
       } // end if
       else
       { 
           // copiar valores em matriz
              for ( x = 0; x < rows; x = x + 1 )
              {
                  for ( y = 0; y < columns; y = y + 1 )
                  {
                      // copiar valor
                         matrix2 [ x ][ y ] = matrix1 [ x ][ y ];
                  } // end for
               } // end for
       } // end else

} // end copyIntMatrix ( )

/**
 Method05 - copiar matriz com valores inteiros
 */

void method05 ( )
{  
   // definir dados
      int rows    = 0;
      int columns = 0;

   // identificar
      IO_id ( "Exemplo0914 - Method05 - v0.0" );

   // ler dados
      rows    = freadMatrixRows    ( "MATRIX1.TXT" );
      columns = freadMatrixColumns ( "MATRIX1.TXT" );
   
   // testar
      if ( rows <= 0 || columns <= 0 )
      {
          IO_println ( "\nERRO: Valor invalido." );
      } // end if
      else
      {
          // definir armazenadores
             int matrix [ rows ][ columns ];
             int other  [ rows ][ columns ];

          // ler dados
             freadIntMatrix ( "MATRIX1.TXT", rows, columns, matrix );
          // copiar dados
             copyIntMatrix ( rows, columns, other, matrix );
          // mostrar dados
             IO_printf      ( "\nOriginal\n" );
             printIntMatrix ( rows, columns, matrix );
          // mostrar dados
             IO_printf      ( "\nCopia\n" );
             printIntMatrix ( rows, columns, other );
       } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 transposeIntMatrix - Transpor valores inteiros em matriz.
 @param rows        - quantidade de valores
 @param columns     - quantidade de valores
 @param matrix2     - grupo de valores inteiros (transposto)
 @param matrix1     - grupo de valores inteiros
*/
void transposeIntMatrix ( int rows,   int columns,
                          int matrix2 [ ][ rows ], 
                          int matrix1 [ ][columns] )
{
    // definir dados locais
       int x = 0;
       int y = 0;

    // percorrer a matriz
       for ( x = 0; x<rows; x=x+1 )
       {
           for ( y = 0; y<columns; y=y+1 )
           {
               matrix2[ y ][ x ] = matrix1 [ x ][ y ];
           } // end for
       } // end for
} // end transposeIntMatrix ( )

/**
 Method06 - testar a ferramenta de matriz transposta
 */

void method06 ( )
{  
    // definir dados
       int matrix1 [ ][2] = { {1, 0} ,
                              {0, 1} };

       int matrix2 [ ][2] = { {0, 0} ,
                              {0, 0} };

       int matrix3 [ ][3] = { {1, 2, 3} ,
                              {4, 5, 6} };

       int matrix4 [ ][3] = { {1, 2, 3} ,
                              {4, 5, 6} ,
                              {7, 8, 9} };
   // identificar
      IO_id ( "Exemplo0914 - Method06 - v0.0" );

   // testar dados
      IO_println         ( "\nMatrix 1 " );
      printIntMatrix     ( 2, 2, matrix1 );
      transposeIntMatrix ( 2, 2, matrix2, matrix1 );

      IO_println         ( "\nMatrix 2" );
      printIntMatrix     ( 2, 2, matrix2 );

      IO_println         ( "\nMatrix 3" );
      printIntMatrix     ( 2, 3, matrix3 );
      transposeIntMatrix ( 2, 3, matrix4, matrix3 );

      IO_println         ( "\nMatrix 4" );
      printIntMatrix     ( 3, 2, matrix4 );

    // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 isIdentity     - Testar se matriz identidade.
 @return        - true, se todos os dados forem iguais a zero;
                  false, caso contrario
 @param rows    - quantidade de valores
 @param columns - quantidade de valores
 @param matrix  - grupo de valores inteiros
*/

bool isIdentity ( int rows, int columns, 
                  int matrix[ ][columns] )
{
    // definir dados locais
       bool result = false;
       int  x      = 0;
       int  y      = 0;

    // testar condicao de existencia
       if ( rows <= 0 || columns <= 0 ||
            rows != columns )
        {
            IO_printf ( "\nERRO: Valor invalido.\n" );
        } // end if
        else
        {
            // testar valores na matriz
               x      = 0;
               result = true;
               while ( x<rows && result )
               {
                   y = 0;
                   while ( y<columns && result )
                   {
                       // testar valor
                          if ( x == y )
                          {
                              result = result && ( matrix [ x ][ y ] == 1 );
                          } // end if
                          else
                          {
                              result = result && ( matrix [ x ][ y ] == 0 );
                          } // end else
                       // passar ao proximo
                          y = y + 1;
                   } // end while
                   // passar ao proximo
                      x = x + 1;
               } // end while
        } // end else
    
    // retornar resposta
       return ( result );

} // end isIdentity ( )

/**
 Method07 - verificar se matriz e' identidade
 */

void method07 ( )
{  
    // definir dados
       int matrix1 [ ][2] = { {0, 0} ,
                              {0, 0} };

       int matrix2 [ ][3] = { {1, 2, 3} ,
                              {4, 5, 6} };

       int matrix3 [ ][2] = { {1, 0} ,
                              {0, 1} };

   // identificar
      IO_id ( "Exemplo0914 - Method07 - v0.0" );

   // testar dados
      IO_println     ( "\nMatrix 1" );
      printIntMatrix ( 2, 2, matrix1 );
      IO_printf      ( "isIdentity (matrix1) = %d", isIdentity (2, 2, matrix1) );

      IO_println     ( "\n\nMatrix 2" );
      printIntMatrix ( 2, 3, matrix2 );
      IO_printf      ( "isIdentity (matrix2) = %d", isIdentity (2, 3, matrix2) );

      IO_println     ( "\n\nMatrix 3" );
      printIntMatrix ( 2, 2, matrix3 );
      IO_printf      ( "isIdentity (matrix3) = %d", isIdentity (2, 2, matrix3) );

   // encerrar
      IO_pause ( "\nApertar ENTER para continuar" );

} // end method07 ( )

/**
 isEqual        - Testar se matrizes iguais.
 @return        - true, se todos os dados forem iguais;
                  false, caso contrario
 @param rows    - quantidade de valores
 @param columns - quantidade de valores 
 @param matrix1 - grupo de valores inteiros (1)
 @param matrix2 - grupo de valores inteiros (2)
*/

bool isEqual ( int rows, int  columns,
               int matrix1[ ][columns], 
               int matrix2[ ][columns] )
{
    // definir dados locais
       bool result = true;
       int  x      = 0;
       int  y      = 0;
       
    // mostrar valores na matriz
       x = 0;
       while ( x<rows && result )
       {
           y = 0;
           while ( y<columns && result )
           {
               // testar valor
                  result = result &&
                  ( matrix1 [ x ][ y ] == matrix2 [ x ][ y ] );
               // passar ao proximo
                  y = y + 1;
           } // end while
           // passar ao proximo
              x = x + 1;
       } // end while 
   // retornar resposta
      return ( result );

} // end isEqual ( )

/**
 Method08 - verificar se matrizes sao iguais
 */

void method08 ( )
{  
    // definir dados
       int matrix1 [ ][2] = { {0, 0} ,
                              {0, 0} };

       int matrix2 [ ][2] = { {1, 2} ,
                              {3, 4} };

       int matrix3 [ ][2] = { {1, 0} ,
                              {0, 1} };

   // identificar
      IO_id ( "Exemplo0914 - Method08 - v0.0" );

   // testar dados
      IO_println     ( "\nMatrix 1"  );
      printIntMatrix ( 2, 2, matrix1 );

      IO_println     ( "\n\nMatrix 2" );
      printIntMatrix ( 2, 2, matrix2  );

      IO_printf      ( "isEqual (matrix1, matrix2) = %d",
                        isEqual (2, 2, matrix1, matrix2) );

      copyIntMatrix  ( 2, 2, matrix1, matrix3 );
      copyIntMatrix  ( 2, 2, matrix2, matrix3 );

      IO_println     ( "\n\nMatrix 1" );
      printIntMatrix ( 2, 2, matrix1  );

      IO_println     ( "\n\nMatrix 3" );
      printIntMatrix ( 2, 2, matrix2  );

      IO_printf      ( "isEqual (matrix1, matrix2) = %d",
                        isEqual (2, 2, matrix1, matrix2) );

   // encerrar
      IO_pause ( "\nApertar ENTER para continuar" );

} // end method08 ( )

/**
 addIntMatrix   - Somar matrizes com inteiros.
 @param rows    - quantidade de valores
 @param columns - quantidade de valores
 @param matrix3 - grupo de valores inteiros resultante
 @param matrix1 - grupo de valores inteiros (1)
 @param k       - constante para multiplicar o segundo termo
 @param matrix2 - grupo de valores inteiros (2)
*/

void addIntMatrix ( int rows, int columns,
                    int matrix3[ ][columns],
                    int matrix1[ ][columns], 
                    int k, 
                    int matrix2[ ][columns] )
{
    // definir dados locais
       int x = 0;
       int y = 0;
    
    // mostrar valores na matriz
       for ( x=0; x<rows; x=x+1 )
       {
           for ( y = 0; y < columns; y = y + 1 )
           {
               // somar valores
                  matrix3 [ x ][ y ] = matrix1 [ x ][ y ] + k * matrix2 [ x ][ y ];
           } // end for
       } // end for

} // end addIntMatrix ( )

/**
 Method09 - somar duas matrizes
 */

void method09 ( )
{  
    // definir dados
       int matrix1 [ ][2] = { {1, 2} ,
                              {3, 4} };

       int matrix2 [ ][2] = { {1, 0} ,
                              {0, 1} };

       int matrix3 [ ][2] = { {0, 0} ,
                              {0, 0} };

   // identificar
      IO_id ( "Exemplo0914 - Method09 - v0.0" );

   // testar dados
      IO_println     ( "\nMatrix 1"  );
      printIntMatrix ( 2, 2, matrix1 );

      IO_println     ( "\n\nMatrix 2" );
      printIntMatrix ( 2, 2, matrix2  );
   
    // somar matrizes
       addIntMatrix ( 2, 2, matrix3, matrix1, (-2), matrix2 );

      IO_println     ( "\n\nMatrix 3" );
      printIntMatrix ( 2, 2, matrix3  );

   // encerrar
      IO_pause ( "\nApertar ENTER para continuar" );

} // end method09 ( )

/**
 mulIntMatrix    - Multiplicar matrizes com inteiros.
 @param rows3    - quantidade de linhas da matriz (3)
 @param columns3 - quantidade de colunas da matriz (3)
 @param matrix3  - grupo de valores inteiros resultante
 @param rows1    - quantidade de linhas da matriz (1)
 @param columns1 - quantidade de colunas da matriz (1)
 @param matrix1  - grupo de valores inteiros (1)
 @param rows2    - quantidade de linhas da matriz (2)
 @param columns2 - quantidade de colunas da matriz (2)
 @param matrix2  - grupo de valores inteiros (2)
*/

void mulIntMatrix ( int rows3, int columns3,
                    int matrix3[ ][columns3],
                    int rows1, int columns1,
                    int matrix1[ ][columns1],
                    int rows2, int columns2,
                    int matrix2[ ][columns2] )
{
    // definir dados locais
       int x    = 0;
       int y    = 0;
       int z    = 0;
       int soma = 0;

       if ( rows1 <= 0 || columns1 <= 0 ||
            rows2 <= 0 || columns2 <= 0 ||
            rows3 <= 0 || columns3 <= 0 ||
            columns1 != rows2 ||
            rows1    != rows3 ||
            columns2 != columns3 )
        {
           IO_printf ( "\nERRO: Valor invalido.\n" );
        } // end if

        else
        {
            // percorrer valores na matriz resultante
               for ( x=0; x<rows3; x=x+1 )
               {
                   for ( y = 0; y < columns3; y = y + 1 )
                   {
                       // somar valores
                          soma = 0;
                          for ( z = 0; z < columns1; z = z + 1 )
                          {
                              soma = soma + matrix1 [ x ][ z ] * matrix2 [ z ][ y ];
                          } // end for
                       // guardar a soma
                          matrix3 [ x ][ y ] = soma;
                   } // end for
               } // end for
        } // end if

} // end mulIntMatrix ( )

/**
 Method10 - mutiplicar duas matrizes inteiras
 */

void method10 ( )
{  
    // definir dados
       int matrix1 [ ][2] = { {1, 2} ,
                              {3, 4} };

       int matrix2 [ ][2] = { {1, 0} ,
                              {0, 1} };

       int matrix3 [ ][2] = { {0, 0} ,
                              {0, 0} };

   // identificar
      IO_id ( "Exemplo0914 - Method10 - v0.0" );

   // testar produto
      IO_println     (  "\nMatrix1"  );
      printIntMatrix ( 2, 2, matrix1 );
      IO_println     (  "\nMatrix2"  );
      printIntMatrix ( 2, 2, matrix2 );

   // multiplicar matrizes
      mulIntMatrix   ( 2, 2, matrix3, 2, 2, matrix1, 2, 2, matrix2 );
      IO_println     ( "\nMatrix3 = Matrix1 * Matrix2" );
      printIntMatrix ( 2, 2, matrix3 );

   // outro teste
      IO_println     (  "\nMatrix2"  );
      printIntMatrix ( 2, 2, matrix2 );
      IO_println     (  "\nMatrix1"  );
      printIntMatrix ( 2, 2, matrix1 );

   // multiplicar matrizes
      mulIntMatrix   ( 2, 2, matrix3, 2, 2, matrix2, 2, 2, matrix1 );
      IO_println     ( "\nMatrix3 = Matrix2 * Matrix1" );
      printIntMatrix ( 2, 2, matrix3 );

   // encerrar
      IO_pause ( "\nApertar ENTER para continuar" );

} // end method10 ( )

/**
 readPositiveDoubleMatrix - ler tamanho de matriz e, nela,
                            guardar valores reais positivos
 @param rows              - quantidade de linhas
 @param columns           - quantidade de colunas
 @param matrix            - grupo de valores inteiros
 */

void readPositiveDoubleMatrix ( int rows, int columns, double matrix[ ][columns] )
{
    // definir dados locais
       int    x    = 0;
       int    y    = 0;
       double z    = 0;
       chars  text = IO_new_chars ( STR_SIZE );

    // ler e guardar valores em matriz
       for ( x=0; x<rows; x=x+1 )
       {
           for ( y=0; y<columns; y=y+1 )
           {
               // ler valor
                  strcpy ( text, STR_EMPTY );
                  z = IO_readdouble ( IO_concat (
                                      IO_concat ( IO_concat ( text, IO_toString_d ( x ) ), ", " ),
                                      IO_concat ( IO_concat ( text, IO_toString_d ( y ) ), " : " ) ) );
               // verificar se positivo
                  while ( z <= 0 )
                  {
                    // ler valor
                        strcpy ( text, STR_EMPTY );
                        IO_printf ( "\nERRO: Valor invalido. Entre com quantidade positiva" );
                        z = IO_readdouble ( IO_concat (
                                            IO_concat ( IO_concat ( text, IO_toString_d ( x ) ), ", " ),
                                            IO_concat ( IO_concat ( text, IO_toString_d ( y ) ), " : " ) ) );
                  } // end while

               // guardar valor
                  matrix [ x ][ y ] = z;
           } // end for
       } // end for

} // end readPositiveDoubleMatrix ( )

/**
 printDoubleMatrix - Mostrar arranjo bidimensional com valores reais.
 @param rows       - quantidade de linhas
 @param columns    - quantidade de colunas
 @param matrix     - grupo de valores inteiros
*/

void printDoubleMatrix ( int rows, int columns, double matrix[ ][columns] )
{
   // definir dado local
      int x = 0;
      int y = 0;

   // mostrar valores na matriz
      for ( x=0; x<rows; x=x+1 )
      {
         for ( y=0; y<columns; y=y+1 )
         {
            // mostrar valor
            IO_printf ( "%3.3lf\t", matrix [ x ][ y ] );
         } // end for
         IO_printf ( "\n" );

      } // end for

} // end printDoubleMatrix ( )

/**
 Method11 - ler matriz e guardar valores reais positivos
 */

void method11 ( )
{   
    // definir dados
       int x = 0;
       int y = 0;
       double matrix [ 10 ] [ 10 ];

   // identificar
      IO_id ( "Exemplo0914 - Method11 - v0.0" );

    // ler dimensoes da matriz
       x = IO_readint ( "\nEntre com a quantidade de linhas : " );
       y = IO_readint ( "\nEntre com a quantidade de colunas: " );

    // verificar se tamanho valido
       while ( x <= 0 || y <= 0 )
       {
           IO_println ( "ERRO: Dimensoes invalidas!" );
           x = IO_readint ( "\nEntre com a quantidade de linhas : " );
           y = IO_readint ( "\nEntre com a quantidade de colunas: " );
       } // end while

   // ler matriz
      readPositiveDoubleMatrix ( x, y, matrix );

   // mostrar dados
      IO_printf ( "\n" );
      printDoubleMatrix ( x, y, matrix );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 fprintDoubleMatrix - Gravar arranjo bidimensional com valores inteiros.
 @param fileName    - nome do arquivo
 @param rows        - quantidade de linhas
 @param columns     - quantidade de colunas
 @param matrix      - grupo de valores inteiros
*/

void fprintDoubleMatrix ( chars fileName, int   rows,  int columns, 
                                       double matrix[ ][columns] )
{
    // definir dados locais
       FILE* arquivo = fopen ( fileName, "wt" );
       int x = 0;
       int y = 0;

    // gravar quantidade de dados
       IO_fprintf ( arquivo, "%d\n", rows );
       IO_fprintf ( arquivo, "%d\n", columns );

    // gravar valores no arquivo
       for ( x=0; x<rows; x=x+1 )
       {
           for ( y=0; y<columns; y=y+1 )
           {
               // gravar valor
                  IO_fprintf ( arquivo, "%lf\n", matrix [ x ][ y ] );
           } // end for
       } // end for

    // fechar arquivo
       fclose ( arquivo );

} // end fprintDoubleMatrix ( )

/**
 Method12 - gravar matriz real em arquivo
 */

void method12 ( )
{
    // definir dados
       int x = 0;
       int y = 0;
       double matrix [ 10 ] [ 10 ];

   // identificar
      IO_id ( "Exemplo0914 - Method11 - v0.0" );

    // ler dimensoes da matriz
       x = IO_readint ( "\nEntre com a quantidade de linhas : " );
       y = IO_readint ( "\nEntre com a quantidade de colunas: " );

    // verificar se tamanho valido
       while ( x <= 0 || y <= 0 )
       {
           IO_println     ( "ERRO: Dimensoes invalidas!" );
           x = IO_readint ( "\nEntre com a quantidade de linhas : " );
           y = IO_readint ( "\nEntre com a quantidade de colunas: " );
       } // end while

    // ler dados
       readPositiveDoubleMatrix ( x, y, matrix );

    // mostrar dados
       IO_printf ( "\n" );
       printDoubleMatrix ( x, y, matrix );

    // gravar dados
       IO_printf         ( "\n" );
       fprintDoubleMatrix( "MATRIX_01.TXT", x, y, matrix );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
 printDiagonalDoubleMatrix - Mostrar diagonal principal da matriz.
 @param rows               - quantidade de linhas
 @param columns            - quantidade de colunas
 @param matrix             - grupo de valores inteiros
*/

void printDiagonalDoubleMatrix ( int rows, int columns, double matrix[ ][columns] )
{
   // definir dado local
      int x = 0;
      int k = 0;

   // testar se matriz e' quadrada
      if ( rows == columns )
      {
        IO_printf ( "\nElementos diagonal principal:\n" );
        // mostrar valores na matriz
            for ( x=0; x<rows; x=x+1 )
            {
                // mostrar valor
                   IO_printf ( "%3.3lf", matrix [ x ][ x ] );
                   IO_printf ( "\n" );
            } // end for
      } // end if
      else
      {
          IO_printf ( "\nERRO: Matriz nao e' quadrada\n" );
      }
} // end printDiagonalDoubleMatrix ( )

/**
 Method13 - mostrar diagonal principal da matriz
 */

void method13 ( )
{
    // definir dados
       int x = 0;
       int y = 0;
       double matrix [ 10 ] [ 10 ];

   // identificar
      IO_id ( "Exemplo0914 - Method13 - v0.0" );

    // ler dimensoes da matriz
       x = IO_readint ( "\nEntre com a quantidade de linhas : " );
       y = IO_readint ( "\nEntre com a quantidade de colunas: " );

    // verificar se tamanho valido
       while ( x <= 0 || y <= 0 )
       {
           IO_println ( "ERRO: Dimensoes invalidas!" );
           x = IO_readint ( "\nEntre com a quantidade de linhas : " );
           y = IO_readint ( "\nEntre com a quantidade de colunas: " );
       } // end while

   // ler matriz
      readPositiveDoubleMatrix ( x, y, matrix );

   // mostrar dados
      IO_printf ( "\nMatriz lida:\n" );
      printDoubleMatrix ( x, y, matrix );
      printDiagonalDoubleMatrix ( x, y, matrix );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 printSDiagonalDoubleMatrix - Mostrar diagonal secundaria da matriz.
 @param rows                - quantidade de linhas
 @param columns             - quantidade de colunas
 @param matrix              - grupo de valores inteiros
*/

void printSDiagonalDoubleMatrix ( int rows, int columns, double matrix[ ][columns] )
{
   // definir dado local
      int x = 0;
      int k = 0;

   // testar se matriz e' quadrada
      if ( rows == columns )
      {
        IO_printf ( "\nElementos diagonal secundaria:\n" );
        // mostrar valores na matriz
            for ( x=1; x<=rows; x=x+1 )
            {
                // mostrar valor
                   IO_printf ( "%3.3lf", matrix [ x-1 ][ columns-x ] );
                   IO_printf ( "\n" );
            } // end for
      } // end if
      else
      {
          IO_printf ( "\nERRO: Matriz nao e' quadrada\n" );
      }
} // end printSDiagonalDoubleMatrix ( )

/**
 Method14 - mostrar diagonal secundaria da matriz
 */

void method14 ( )
{
    // definir dados
       int x = 0;
       int y = 0;
       double matrix [ 10 ] [ 10 ];

   // identificar
      IO_id ( "Exemplo0914 - Method14 - v0.0" );

    // ler dimensoes da matriz
       x = IO_readint ( "\nEntre com a quantidade de linhas : " );
       y = IO_readint ( "\nEntre com a quantidade de colunas: " );

    // verificar se tamanho valido
       while ( x <= 0 || y <= 0 )
       {
           IO_println ( "ERRO: Dimensoes invalidas!" );
           x = IO_readint ( "\nEntre com a quantidade de linhas : " );
           y = IO_readint ( "\nEntre com a quantidade de colunas: " );
       } // end while

   // ler matriz
      readPositiveDoubleMatrix ( x, y, matrix );

   // mostrar dados
      IO_printf ( "\nMatriz lida:\n" );
      printDoubleMatrix ( x, y, matrix );
      printSDiagonalDoubleMatrix ( x, y, matrix );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 Method15 -
 */

void method15 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - Method15 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 Method16 -
 */

void method16 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - Method16 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 Method17 -
 */

void method17 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - Method17 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
 Method18 -
 */

void method18 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - Method18 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

/**
 Method19 -
 */

void method19 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - Method19 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method19 ( )

/**
 Method20 -
 */

void method20 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - Method20 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method20 ( )

/**
 MethodE1 -
 */

void methodE1 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - MethodE1 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE1 ( )

/**
 MethodE2 -
 */

void methodE2 ( )
{
    // identificar
       IO_id ( "Exemplo0914 - MethodE2 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE2 ( )
/*
 Funcao principal.
 @return codigo de encerramento
*/

int main ( )
{
    // definir dado
       int x = 0;
    
    // repetir ate desejar parar
       do
       {
            // identificar
               IO_id ( "Exemplo0914 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar valores inteiros de uma matriz       " );
               IO_println ( "2 - ler matriz com valores inteiros              " );
               IO_println ( "3 - gravar matriz inteira em arquivo             " );
               IO_println ( "4 - ler matriz de arquivo com valores inteiros   " );
               IO_println ( "5 - copiar matriz com valores inteiros           " );
               IO_println ( "6 - testar a ferramenta de matriz transposta     " );
               IO_println ( "7 - verificar se matriz e' identidade            " );
               IO_println ( "8 - verificar se matrizes sao iguais             " );
               IO_println ( "9 - somar duas matrizes inteiras                 " );
               IO_println ( "10 - mutiplicar duas matrizes inteiras           " );
               IO_println ( "11 - ler matriz e guardar valores reais positivos" );
               IO_println ( "12 - gravar matriz real em arquivo               " );
               IO_println ( "13 - mostrar diagonal principal da matriz        " );
               IO_println ( "14 - mostrar diagonal secundaria da matriz       " );
               // IO_println ( "15 - " );
               // IO_println ( "16 - " );
               // IO_println ( "17 - " );
               // IO_println ( "18 - " );
               // IO_println ( "19 - " );
               // IO_println ( "20 - " );
               // IO_println ( "21 - " );
               // IO_println ( "22 - " );
               IO_println ( " " );

               x =  IO_readint ( "Entrar com uma opcao: " );
            
            // testar valor
               switch ( x )
               {
               case 0:
                   method00 ( );
                   break;

                case 1:
                   method01 ( );
                   break;

                case 2:
                   method02 ( );
                   break;

                case 3:
                   method03 ( );
                   break;

                case 4:
                   method04 ( );
                   break;

                case 5:
                   method05 ( );
                   break;

                case 6:
                   method06 ( );
                   break;

                case 7:
                   method07 ( );
                   break;

                case 8:
                   method08 ( );
                   break;

                case 9:
                   method09 ( );
                   break;

                case 10:
                   method10 ( );
                   break;

                case 11:
                   method11 ( );
                   break;

                case 12:
                   method12 ( );
                   break;

                case 13:
                   method13 ( );
                   break;

                case 14:
                   method14 ( );
                   break;

                case 15:
                   method15 ( );
                   break;

                case 16:
                   method16 ( );
                   break;

                case 17:
                   method17 ( );
                   break;

                case 18:
                   method18 ( );
                   break;

                case 19:
                   method19 ( );
                   break;

                case 20:
                   method20 ( );
                   break;

                case 21:
                   methodE1 ( );
                   break;

                case 22:
                   methodE2 ( );
                   break; 

               default:
                   IO_pause ( "ERRO: Valor invalido!" );
                   break;
               } // end switch

       } while ( x != 0 );
    
    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );
       
} // end main ( )

/*
 ----------------------------- documentacao complementar
 ----------------------------- notas / observacoes / comentarios
 ----------------------------- previsao de testes e testes

Para dimensoes invalidas, solicitara' novos valores
Para matriz nao quadrada, informara' erro

Entre com a quantidade de linhas : 3

Entre com a quantidade de colunas: 3
0, 0 : 1.1
0, 1 : 2.2
0, 2 : 3.3
1, 0 : 4.4
1, 1 : 5.5
1, 2 : 6.6
2, 0 : 7.7
2, 1 : 8.8
2, 2 : 9.9

Matriz lida:
1.100   2.200   3.300
4.400   5.500   6.600
7.700   8.800   9.900

Elementos diagonal secundaria:
3.300
5.500
7.700

*/
  
