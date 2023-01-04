/*
Exemplo0902 - v0.0. - 22 / 05 / 2022
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
      IO_id ( "Exemplo0902 - Method01 - v0.0" );
    
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
      IO_id ( "Exemplo0902 - Method02 - v0.0" );

   // ler dados
      readIntMatrix ( n, n, matrix );

   // mostrar dados
      IO_printf ( "\n" );
      printIntMatrix ( n, n, matrix );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 Method03 - 
 */

void method03 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method03 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 Method04 - 
 */

void method04 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method04 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 Method05 - 
 */

void method05 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method05 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - 
 */

void method06 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method06 - v0.0" );
       
    // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 Method07 - 
 */

void method07 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method07 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 - 
 */

void method08 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method08 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method09 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      IO_id ( "Exemplo0902 - Method10 - v0.0" );
       
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
               IO_id ( "Exemplo0902 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar valores inteiros de uma matriz " );
               IO_println ( "2 - ler matriz com valores inteiros        " );
               // IO_println ( "3 - " );
               // IO_println ( "4 - " );
               // IO_println ( "5 - " );
               // IO_println ( "6 - " );
               // IO_println ( "7 - " );
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

ler matriz:
0, 0 : 1
0, 1 : 2
1, 0 : 3
1, 1 : 4

mostrara':
1   2
3   4

*/
  
