/*
Exemplo0907 - v0.0. - 22 / 05 / 2022
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
      IO_id ( "Exemplo0907 - Method01 - v0.0" );
    
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
      IO_id ( "Exemplo0907 - Method02 - v0.0" );

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
      IO_id ( "Exemplo0907 - Method03 - v0.0" );

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
      IO_id ( "Exemplo0907 - Method04 - v0.0" );

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
      IO_id ( "Exemplo0907 - Method05 - v0.0" );

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
      IO_id ( "Exemplo0907 - Method06 - v0.0" );

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
      IO_id ( "Exemplo0907 - Method07 - v0.0" );

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
 Method08 - 
 */

void method08 ( )
{  
   // identificar
      IO_id ( "Exemplo0907 - Method08 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      IO_id ( "Exemplo0907 - Method09 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      IO_id ( "Exemplo0907 - Method10 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

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
               IO_id ( "Exemplo0907 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar valores inteiros de uma matriz    " );
               IO_println ( "2 - ler matriz com valores inteiros           " );
               IO_println ( "3 - gravar matriz inteira em arquivo          " );
               IO_println ( "4 - ler matriz de arquivo com valores inteiros" );
               IO_println ( "5 - copiar matriz com valores inteiros        " );
               IO_println ( "6 - testar a ferramenta de matriz transposta  " );
               IO_println ( "7 - verificar se matriz e' identidade         " );
               // IO_println ( "8 - " );
               // IO_println ( "9 - " );
               // IO_println ( "10 - " );
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

Apos matrizes inicializadas:

Matrix 1
  0       0
  0       0
isIdentity (matrix1) = 0    // nao e' identidade

Matrix 2
  1       2       3
  4       5       6

ERRO: Valor invalido.
isIdentity (matrix2) = 0     // nao e' quadrada

Matrix 3
  1       0
  0       1
isIdentity (matrix3) = 1     // e' identidade

*/
  
