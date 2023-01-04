/*
Exemplo1009 - v0.0. - 28 / 05 / 2022
Author: Gabriel Vargas Bento de Souza
*/

// dependencias
   #include "io.h"

// ----------------------------------------------- definicoes globais
// ----------------------------------------------- arranjos  inteiros

/**
  Definicao de tipo arranjo com inteiros
  baseado em estrutura
*/

typedef
   struct s_int_Array
   {
      int  length;
      ints data  ;
      int  ix    ;
   } // end struct
   int_Array;

/**
  Definicao de referencia para arranjo com inteiros
  baseado em estrutura
*/

typedef int_Array* ref_int_Array;

/**
  new_int_Array - Reservar espaco para arranjo com inteiros
  @return       - referencia para arranjo com inteiros
  @param n      - quantidade de datos
*/

ref_int_Array new_int_Array ( int n )
{
   // reserva de espaco
      ref_int_Array tmpArray = (ref_int_Array) malloc (sizeof(int_Array));

   // estabelecer valores padroes
      if ( tmpArray == NULL )
      {
         IO_printf ( "\nERRO: Falta espaco.\n" );
      } // end if

      else
      {
         tmpArray -> length = 0;
         tmpArray -> data   = NULL;
         tmpArray -> ix     = -1;

         if ( n>0 )
         {
            // guardar a quantidade de dados
               tmpArray -> length = n;

            // reservar espaco para os dados
               tmpArray->data = (ints) malloc (n * sizeof(int));

            // definir indicador do primeiro elemento
               tmpArray -> ix     = 0;
         } // end if
      } // end else
   
   // retornar referencia para espaco reservado
      return ( tmpArray );

} // end new_int_Array ( )

/**
  free_int_Array  - Dispensar espaco para arranjo com inteiros
  @param tmpArray - referencia para grupo de valores inteiros
*/

void free_int_Array ( ref_int_Array tmpArray )
{
   // testar se ha' dados, antes de reciclar o espaco
      if ( tmpArray != NULL )
      {
         if ( tmpArray->data != NULL )
         {
            free ( tmpArray->data );
         } // end if

         free ( tmpArray );
      } // end if

} // end free_int_Array ( )

// ----------------------------------------------- matrizes  inteiros

/**
  Definicao de tipo arranjo bidimensional com inteiros baseado em estrutura
*/

typedef
   struct s_int_Matrix
   {
       int   rows   ;
       int   columns;
       ints* data   ;
       int   ix, iy ;
   } // end struct
   int_Matrix;

/**
  Definicao de referencia para arranjo bidimensional com inteiros 
  baseado em estrutura
*/

typedef int_Matrix* ref_int_Matrix;

/**
  new_int_Matrix - Reservar espaco para arranjo bidimensional com inteiros
  @return        - referencia para arranjo com inteiros
  @param rows    - quantidade de dados
  @param columns - quantidade de dados
*/

ref_int_Matrix new_int_Matrix ( int rows, int columns )
{
    // reserva de espaco
       ref_int_Matrix tmpMatrix = (ref_int_Matrix) malloc (sizeof(int_Matrix));

    // estabelecer valores padroes
       if ( tmpMatrix != NULL )
       {
           tmpMatrix->rows    = 0;
           tmpMatrix->columns = 0;
           tmpMatrix->data    = NULL;

           // reservar espaco
              if ( rows>0 && columns>0 )
              {
                  // guardar a quantidade de dados
                     tmpMatrix->rows    = rows;
                     tmpMatrix->columns = columns;

                  // reservar espaco para os dados
                     tmpMatrix->data    = malloc (rows * sizeof(ints));

                     if ( tmpMatrix->data )
                     {
                         for ( tmpMatrix -> ix = 0;
                               tmpMatrix -> ix < tmpMatrix->rows;
                               tmpMatrix -> ix = tmpMatrix->ix+1 )
                         {
                             tmpMatrix->data [ tmpMatrix->ix ] = 
                             (ints) malloc (columns * sizeof(int));
                         } // end for
                     } // end if
              } // end if

            tmpMatrix -> ix = 0;
            tmpMatrix -> iy = 0;
       } // end if
       
    // retornar referencia para o espaco reservado
       return ( tmpMatrix );

} // end new_int_Matrix ( )

/**
  free_int_Matrix  - Dispensar espaco para arranjo com inteiros
  @param tmpMatrix - referencia para grupo de valores inteiros
*/

void free_int_Matrix ( ref_int_Matrix matrix )
{
    // testar se ha' dados
       if ( matrix != NULL )
       {
           if ( matrix->data != NULL )
           {
               for ( matrix -> ix = 0;
                     matrix -> ix < matrix->rows;
                     matrix -> ix = matrix->ix+1 )
                {
                    free ( matrix->data [ matrix->ix ] );
                } // end for

                free ( matrix->data );
           } // end if
        
        free ( matrix );
       } // end if

} // end free_int_Matrix ( )

// ---------------------------------------------------------- metodos

/**
 Method00 - Nao faz nada.
 */

void method00 ( )
{
    // nao faz nada
} // end method00 ( )

/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param array  - grupo de valores inteiros
*/

void printIntArray ( int_Array array )
{
   // mostrar valores no arranjo
      if ( array.data )
      {
         for ( array. ix = 0; 
               array. ix < array. length; 
               array. ix = array. ix+1   )
         {
            // mostrar valor
               printf ( "%2d: %d\n", array.ix, array.data [ array.ix ] );
         } // end for
      } // end if

} // end printIntArray ( )

/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
   // definir dado
      int_Array array;
   
   // montar arranjo em estrutura
      array. length = 5;
      array. data   = (ints) malloc (array.length * sizeof(int));
   
   // testar a existência de dados
      if ( array.data )
      {
         array. data [ 0 ] = 1;
         array. data [ 1 ] = 2;
         array. data [ 2 ] = 3;
         array. data [ 3 ] = 4;
         array. data [ 4 ] = 5;
      } // end if

   // identificar
      IO_id ( "Exemplo1009 - Method01 - v0.0" );
    
   // executar metodo auxiliar
      printIntArray ( array );

   // reciclar espaco
      if ( array.data )
      {
         free ( array.data );
      } // end if
      
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
  IO_readintArray - Ler arranjo com valores inteiros.
  @return           arranjo com valores lidos
*/

int_Array IO_readintArray ( )
{
    // definir dados locais
       chars            text = IO_new_chars ( STR_SIZE );
       static int_Array array;

    // ler a quantidade de dados
    do
    {
        array.length = IO_readint ( "\nlength = " );
    } while ( array.length <= 0 );

    // reservar espaco para armazenar
       array.data = IO_new_ints ( array.length );

    // testar se ha' espaco
       if ( array.data == NULL )
       {
           array.length = 0;       // nao ha' espaco
       } // end if
       else
       {
           // ler e guardar valores em arranjo
              for ( array.ix=0; array.ix<array.length; array.ix=array.ix+1 )
              {
                  // ler valor
                     strcpy ( text, STR_EMPTY );
                     array.data [ array.ix ]
                     = IO_readint ( IO_concat (
                                    IO_concat ( text, 
                                                IO_toString_d ( array.ix ) ),
                                                " : " ) );
               } // end for
       } // end if

    // retornar arranjo
       return ( array );

} // end IO_readintArray ( )

/**
 Method02 - Ler e mostrar certa quantidade de valores.
 */

void method02 ( )
{
   // definir dados
      int_Array array;

   // identificar
      IO_id ( "Exemplo1009 - Method02 - v0.0" );
   
   // ler dados
      array = IO_readintArray ( );
   
   // testar a existencia de dados
      if ( array.data )
      {
          // mostrar dados
             IO_printf     ( "\n"  );
             printIntArray ( array );

          // reciclar o espaco
             free ( array. data );
      } // end if
      
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
  fprintIntArray  - Gravar arranjo com valores inteiros.
  @param fileName - nome do arquivo
  @param array    - grupo de valores inteiros
*/

void fprintIntArray ( chars fileName, int_Array array )
{
    // definir dados locais
       FILE* arquivo = fopen ( fileName, "wt" );
    
    // gravar quantidade de dados
       fprintf ( arquivo, "%d\n", array.length );
    
    // gravar valores no arquivo, se existirem
       if ( array.data )
       {
           for ( array.ix = 0; 
                 array.ix < array.length; 
                 array.ix = array.ix+1  )
           {
               // gravar valor
                  fprintf ( arquivo, "%d\n", array.data [ array.ix ] );
           } // end for
       } // end if

    // fechar arquivo
       fclose ( arquivo );

} // end fprintIntArray ( )

/**
 Method03 - Ler e gravar certa quantidade de valores.
 */

void method03 ( )
{  
   // definir dados
      int_Array array;

   // identificar
      IO_id ( "Exemplo1009 - Method03 - v0.0" );
   
   // ler dados
      array = IO_readintArray ( );

   // testar existencia de dados
      if ( array.data )
      {
          // mostrar e gravar dados
             IO_printf      ( "\n" );
             printIntArray  (               array );
             fprintIntArray ( "ARRAY1.TXT", array );

          // reciclar o espaco
             free ( array.data );
      } // end if

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
  freadArraySize  - Ler tamanho do arranjo com valores inteiros.
  @return           quantidade de valores lidos
  @param fileName - nome do arquivo
*/

int freadArraySize ( chars fileName )
{
    // definir dados locais
       int   n       = 0;
       FILE* arquivo = fopen ( fileName, "rt" );

    // testar a existencia
       if ( arquivo )
       {
           // ler a quantidade de dados
              fscanf ( arquivo, "%d", &n );
              if ( n <= 0 )
              {
                  IO_printf ( "\nERRO: Valor invalido.\n" );
                  n = 0;
              } // end if

           // fechar arquivo
              fclose ( arquivo );

       } // end if

    // retornar dados lidos
       return ( n );

} // end freadArraySize ( )

/**
  fIO_readintArray - Ler arranjo com valores inteiros.
  @return            arranjo com os valores lidos
  @param fileName  - nome do arquivo
  @param array     - grupo de valores inteiros
*/

int_Array fIO_readintArray ( chars fileName )
{
    // definir dados locais
       int              x       = 0;
       int              y       = 0;
       FILE*            arquivo = fopen ( fileName, "rt" );
       static int_Array array;

    // testar a existencia
       if ( arquivo )
       {
           // ler a quantidade de dados
              fscanf ( arquivo, "%d", &array.length );

           // testar se ha' dados
              if ( array.length <= 0 )
              {
                  IO_printf ( "\nERRO: Valor invalido.\n" );
                  array.length = 0;         // nao ha' dados
              } // end if

              else
              {
                  // reservar espaco
                     array.data = IO_new_ints ( array.length );

                  // testar a existência
                     if ( array.data )
                     {
                         // ler e guardar valores em arranjo
                            array.ix = 0;
                            while ( ! feof ( arquivo ) &&
                                      array.ix < array.length )
                            {
                                // ler valor
                                   fscanf ( arquivo, "%d",
                                            &(array.data [ array.ix ]) );
                                    
                                // passar ao proximo
                                   array.ix = array.ix + 1;

                            } // end while
                     } // end if
              } // end else
       } // end if

    // retornar dados lidos
       return ( array );

} // end fIO_readintArray ( )

/**
 Method04 - Ler arquivo e guardar quantidade de valores.
 */

void method04 ( )
{  
   // definir dadoos
      int_Array array;

   // identificar
      IO_id ( "Exemplo1009 - Method04 - v0.0" );

   // ler dados 
      array = fIO_readintArray ( "ARRAY1.TXT" );

   // testar a existencia de dados
      if ( array.data )
      {
          // mostrar dados
             IO_printf     ( "\n"  );
             printIntArray ( array );

          // reciclar o espaco
             free ( array.data );
      } // end if
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  copyIntArray    - Copiar arranjo com valores inteiros.
  @return           referencia para copia do arranjo
  @param fileName - nome do arquivo
  @param array    - grupo de valores inteiros
*/

ref_int_Array copyIntArray ( int_Array array )
{
    // definir dados locais
       int           x = 0;
       int           y = 0;
       ref_int_Array copy ;

    // testar tamanho
       if ( array.length <= 0 )
       {
           IO_printf ( "\nERRO: Valor invalido.\n" );
           array.length = 0;
       } // end if
       else
       {
           // reservar area
              copy             = new_int_Array ( array.length );
        
           // testar se ha' descritor
              if ( copy )
              {
                  copy->length = array.length;
                  copy->data   = IO_new_ints ( copy->length );

                  // testar se ha' espaco e dados
                     if ( copy->data == NULL || 
                          array.data == NULL )
                      {
                          printf ( "\nERRO: Falta espaco ou dados." );
                      } // end if
                      else
                      {
                          // ler e copiar valores
                             for ( array.ix = 0; 
                                   array.ix < array.length; 
                                   array.ix = array.ix+1 )
                             {
                                 // copiar valor
                                    copy->data [ array.ix ] =
                                    array.data [ array.ix ];
                             } // end for
                       } // end else
               } // end if
       } // end else

    // retornar dados lidos
       return ( copy );

} // end copyIntArray ( )

/**
 Method05 - Ler e copiar certa quantidade de valores.
 */

void method05 ( )
{  
   // definir dados
      int_Array     array;   // arranjo sem tamanho definido
      ref_int_Array other;   // referencia para arranjo sem tamanho definido

   // identificar
      IO_id ( "Exemplo1009 - Method05 - v0.0" );

   // ler dados
      array = fIO_readintArray ( "ARRAY1.TXT" );

   // copiar dados
      other = copyIntArray ( array );

   // testar a existencia de dados
      if ( array.data )
      {
          // mostrar dados
             IO_printf     ( "\nOriginal\n" );
             printIntArray (     array      );

          // mostrar dados
             IO_printf     (   "\nCopia\n"  );
             printIntArray (     *other     ); // dereferenciar a copia

          // reciclar os espacos
             free ( array. data );
             free ( other->data );
             free ( other       );

       } // end if

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  printIntMatrix - Mostrar matrix com valores inteiros.
  @param array  - grupo de valores inteiros
*/

void printIntMatrix ( ref_int_Matrix matrix )
{
    // testar a existencia
       if ( matrix != NULL && matrix->data != NULL )
       {
           // mostrar valores na matriz
              for ( matrix -> ix = 0; 
                    matrix -> ix < matrix -> rows; 
                    matrix -> ix = matrix -> ix+1 )
              {
                  for ( matrix -> iy = 0;
                        matrix -> iy < matrix -> columns; 
                        matrix -> iy = matrix -> iy+1   )
                  {
                      // mostrar valor
                         printf ( "%3d\t", matrix->data
                                  [ matrix->ix ][ matrix->iy ] );
                   } // end for
                   printf ( "\n" );
              } // end for
       } // end if

} // end printIntArray ( )

/**
 Method06 - Mostrar certa quantidade de valores da matriz.
 */

void method06 ( )
{  
   // definir dado
      ref_int_Matrix matrix = new_int_Matrix ( 3, 3 );

      if ( matrix != NULL && matrix->data != NULL )
      {
          matrix->data [0][0] = 1; matrix->data [0][1] = 2; matrix->data [0][2] = 3;
          matrix->data [1][0] = 3; matrix->data [1][1] = 4; matrix->data [1][2] = 5;
          matrix->data [2][0] = 6; matrix->data [2][1] = 7; matrix->data [2][2] = 8;
      } // end if

   // identificar
      IO_id ( "Exemplo1009 - Method06 - v0.0" );
   
    // executar etodo auxiliar
       printIntMatrix ( matrix );
    
    // reciclar espaco
       free_int_Matrix ( matrix );

    // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  IO_readintMatrix - Ler arranjo bidimensional com valores inteiros.
  @return            referencia para o grupo de valores inteiros
*/

ref_int_Matrix IO_readintMatrix ( )
{
    // definir dados locais
       int   rows    = 0;
       int   columns = 0;
       chars text    = IO_new_chars ( STR_SIZE );

    // ler a quantidade de dados
       do
       { rows   = IO_readint ( "\nrows    = " ); }
       while ( rows <= 0 );
       
       do
       { columns = IO_readint ( "\ncolumns = " ); }
       while ( columns <= 0 );

    // reservar espaco para armazenar valores
       ref_int_Matrix matrix = new_int_Matrix ( rows, columns );

    // testar se ha' espaco
       if ( matrix != NULL )
       {
           if ( matrix->data == NULL )
           {
               // nao ha' espaco
                  matrix -> rows    = 0;
                  matrix -> columns = 0;
                  matrix -> ix      = 0;
                  matrix -> iy      = 0;
           } // end if

           else
           {
               // ler e guardar valores na matriz
                  for ( matrix -> ix = 0;
                        matrix -> ix < matrix -> rows;
                        matrix -> ix = matrix -> ix+1 )
                  {
                      for ( matrix -> iy = 0;
                            matrix -> iy < matrix -> columns;
                            matrix -> iy = matrix -> iy+1 )
                      {
                          // ler e guardar valor
                             strcpy ( text, STR_EMPTY );
                             matrix -> data [ matrix->ix ][ matrix->iy ]
                             = IO_readint ( IO_concat (
                                          IO_concat ( IO_concat ( text, 
                                          IO_toString_d ( matrix->ix ) ), ", " ),
                                          IO_concat ( IO_concat ( text, 
                                          IO_toString_d ( matrix->iy ) ), " : " ) ) );
                       } // end for
                       printf ( "\n" );
                   } // end for
           } // end else
       } // end if
    
    // retornar dados lidos
       return ( matrix );
        
} // end IO_readintMatrix ( )

/**
 Method07 - Ler e mostrar certa quantidade de valores de matriz.
 */

void method07 ( )
{  
   // definir dados
      ref_int_Matrix matrix = NULL;

   // identificar
      IO_id ( "Exemplo1009 - Method07 - v0.0" );

   // ler dados
      matrix = IO_readintMatrix ( );

   // mostrar dados
      IO_printf      (  "\n"  );
      printIntMatrix ( matrix );

   // reciclar espaco
      free_int_Matrix ( matrix );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  fprintIntMatrix - Gravar arranjo bidimensional com valores inteiros.
  @param fileName - nome do arquivo
  @param matrix  - grupo de valores inteiros
*/

void fprintIntMatrix ( chars fileName, ref_int_Matrix matrix )
{
    // definir dados locais
       FILE* arquivo = fopen ( fileName, "wt" );

    // testar se ha' dados
       if ( matrix == NULL )
       {
           printf ( "\nERRO: Nao ha' dados." );
       }  // end if

       else
       {
           // gravar quantidade de dados
              fprintf ( arquivo, "%d\n", matrix -> rows    );
              fprintf ( arquivo, "%d\n", matrix -> columns );

              if ( matrix->data != NULL )
              {
                  // gravar valores no arquivo
                    for ( matrix -> ix = 0;
                          matrix -> ix < matrix -> rows;
                          matrix -> ix = matrix -> ix+1 )
                    {
                        for ( matrix -> iy = 0;
                              matrix -> iy < matrix -> columns;
                              matrix -> iy = matrix -> iy+1 )
                      {
                          // gravar valor
                             fprintf ( arquivo, "%d\n",
                             matrix->data [ matrix->ix ][ matrix->iy ] );
                      } // end for
                    } // end for
               } // end if
    
           // fechar arquivo
              fclose ( arquivo );

       } // end else

} // end fprintIntMatrix ( )

/**
 Method08 - Ler e gravar certa quantidade de valores de matriz.
 */

void method08 ( )
{  
   // definir dados
      ref_int_Matrix matrix = NULL;

   // identificar
      IO_id ( "Exemplo1009 - Method08 - v0.0" );
   
   // ler dados
      matrix = IO_readintMatrix ( );

   // gravar dados
      fprintIntMatrix  ( "MATRIX1.TXT", matrix );

    // reciclar o espaco
       free_int_Matrix ( matrix );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
  freadintMatrix  - Ler arranjo bidimensional com valores inteiros.
  @return           referencia para o grupo de valores inteiros
  @param fileName - nome do arquivo
*/

ref_int_Matrix freadintMatrix ( chars fileName )
{
    // definir dados locais
       ref_int_Matrix matrix  = NULL;
       int            rows    = 0;
       int            columns = 0;
       FILE*          arquivo = fopen ( fileName, "rt" );

    // ler a quantidade de dados
       fscanf ( arquivo, "%d", &rows    );
       fscanf ( arquivo, "%d", &columns );

       if ( rows <= 0 || columns <= 0 )
       {
           IO_printf ( "\nERRO: Valor invalido.\n" );
       } // en if

       else
       { 
            // reservar espaco para armazenar
               matrix = new_int_Matrix ( rows, columns );

            // testar se ha' espaco
               if ( matrix != NULL && matrix->data == NULL )
               {
                   // nao ha' espaco
                      matrix->rows    = 0;
                      matrix->columns = 0;
                      matrix->ix      = 0;
                      matrix->iy      = 0;
               } // end if

               else
               {
                   // testar a existência
                      if ( matrix != NULL )
                      {
                          // ler e guardar valores na matriz
                             matrix->ix = 0;
                             while ( ! feof ( arquivo ) && 
                                       matrix->ix < matrix->rows )
                             {
                                 matrix->iy = 0;
                                 while ( ! feof ( arquivo ) && 
                                           matrix->iy < matrix->columns )
                                 {
                                     // guardar valor
                                        fscanf ( arquivo, "%d",
                                        &(matrix->data [ matrix->ix ]
                                                       [ matrix->iy ]) );

                                     // passar ao proximo
                                        matrix->iy = matrix->iy+1;
                                 } // end while

                          // passar ao proximo
                             matrix->ix = matrix->ix+1;
                      } // end if
                   
                   matrix->ix = 0;
                   matrix->iy = 0;
               } // end else
        } // end else
       } // end

    // retornar matriz lida
       return ( matrix );

} // end freadintMatrix ( )

/**
 Method09 - Ler arquivo e guardar quantidade de valores de matriz.
 */

void method09 ( )
{  
   // identificar
      IO_id ( "Exemplo1009 - Method09 - v0.0" );

   // ler dados
      ref_int_Matrix matrix = freadintMatrix ( "MATRIX1.TXT" );

   // msotrar dados
      IO_printf      (  "\n"  );
      printIntMatrix ( matrix );

   // recilcar espaco
      free_int_Matrix ( matrix );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      IO_id ( "Exemplo1009 - Method10 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
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
               IO_id ( "Exemplo1009 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar certa quantidade de valores de arranjo        " );
               IO_println ( "2 - ler e mostrar certa quantidade de valores de arranjo  " );
               IO_println ( "3 - ler e gravar certa quantidade de valores de arranjo   " );
               IO_println ( "4 - ler arquivo e guardar quantidade de valores de arranjo" );
               IO_println ( "5 - ler e copiar certa quantidade de valores de arranjo   " );
               IO_println ( "6 - mostrar certa quantidade de valores de matriz         " );
               IO_println ( "7 - ler e mostrar certa quantidade de valores de matriz   " );
               IO_println ( "8 - ler e gravar certa quantidade de valores de matriz    " );
               IO_println ( "9 - ler arquivo e guardar quantidade de valores de matriz " );
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

Ler tamanho e elementos em arquivo ARRAY1.TXT
3
3
1
2
3
4
5
6
7
8
9

Mostrar matriz lida:
  1       2       3
  4       5       6
  7       8       9
  
*/
  
