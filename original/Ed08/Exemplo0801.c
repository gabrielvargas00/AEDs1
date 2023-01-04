/*
Exemplo0801 - v0.0. - 16 / 05 / 2022
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
 printIntArray - Mostrar arranjo com valores inteiros.
 @param n      - quantidade de valores
 @param array  - grupo de valores inteiros
*/

void printIntArray ( int n, int array [ ] )
{
   // definir dado local
      int x = 0;
   
   // mostrar valores no arranjo
      for ( x=0; x<n; x=x+1 )
      {
         // mostrar valor
            IO_printf ( "%2d: %d\n", x, array [ x ] );
      } // end for

} // end printIntArray ( )

/**
Method01 - Mostrar valores inteiros de um arranjo
*/
void method01 ( )
{
   // definir dado
      int array [ ] = {1, 2, 3, 4, 5};

   // identificar
      IO_id ( "Exemplo0801 - Method01 - v0.0" );
    
   // executar metodo auxiliar
      printIntArray ( 5, array );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
 Method02 - 
 */

void method02 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method02 - v0.0" );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 Method03 - 
 */

void method03 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method03 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 Method04 - 
 */

void method04 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method04 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 Method05 - 
 */

void method05 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method05 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - 
 */

void method06 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method06 - v0.0" );
       
    // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 Method07 - 
 */

void method07 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method07 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 - 
 */

void method08 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method08 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method09 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      IO_id ( "Exemplo0801 - Method10 - v0.0" );
       
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
               IO_id ( "Exemplo0801 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar valores inteiros de um arranjo " );
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
 ----------------------------- previsao de testes

arranjo = {1, 2, 3, 4, 5}:

 0: 1
 1: 2
 2: 3
 3: 4
 4: 5

 ----------------------------- historico

Versao         Data        Modificacao
0.1            16/05       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       mostrar valores inteiros de um arranjo

*/
  
