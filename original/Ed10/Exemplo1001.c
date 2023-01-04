/*
Exemplo1001 - v0.0. - 27 / 05 / 2022
Author: Gabriel Vargas Bento de Souza
*/

// dependencias
   #include "io.h"

// ----------------------------------------------- definicoes globais

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
Method01 - Mostrar certa quantidade de valores da matriz.
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
      IO_id ( "Exemplo1001 - Method01 - v0.0" );
    
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
 Method02 - 
 */

void method02 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method02 - v0.0" );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 Method03 - 
 */

void method03 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method03 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 Method04 - 
 */

void method04 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method04 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 Method05 - 
 */

void method05 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method05 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - 
 */

void method06 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method06 - v0.0" );
       
    // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 Method07 - 
 */

void method07 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method07 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 - 
 */

void method08 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method08 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method09 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      IO_id ( "Exemplo1001 - Method10 - v0.0" );
       
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
               IO_id ( "Exemplo1001 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar certa quantidade de valores " );
               // IO_println ( "2 - " );
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

Mostrar valores de um arranjo pre-definido:

 0: 1
 1: 2
 2: 3
 3: 4
 4: 5

*/
  
