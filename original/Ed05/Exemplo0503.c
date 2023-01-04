/*
Exemplo0503 - v0.0. - 18 / 04 / 2022
Author: Gabriel Vargas Bento de Souza
*/

// dependencias
#include "io.h"
#include "gabrielvargas.h"

/**
 Method00 - Nao faz nada.
 */

void method00 ( )
{
    // nao faz nada
} // end method00 ( )

/**
 Method01a - Mostrar certa quantidade de valores.
 @param x - quantidade de valores a serem mostrados
 */

void method01a ( int x )
{
    // definir dado
       int y = 1;        // controle
  
    // repetir enquanto controle menor que a quantidade desejada
       while ( y <= x )
       {
           // mostrar valor
              IO_printf ( "%s%d\n", "Valor = ", y );

           // passar ao proximo
              y = y + 1;
       } // end while

} // end method01a ( )

/**
 Method01 - Mostrar certa quantidade de valores.
 OBS.:      Preparacao e disparo de outro metodo.
 */

void method01 ( )
{
    // identificar
       IO_id ( "Exemplo0503 - Method01 - v0.0" );

    // executar o metodo auxiliar
       method01a ( 5 );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( )

/**
 Method02a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
 */

void method02a ( int x )
{
    // definir dado
       int y = 1;        // controle 
       int z = 2;
  
    // repetir enquanto controle menor que a quantidade desejada
       while ( y <= x )
       {
           // mostrar valor
              IO_printf ( "%d: %d\n", y, z );

           // passar ao proximo par
              z = z + 2;

           // passar ao proximo valor do controle
              y = y + 1;
       } // end while

} // end method02a ( )

/**
 Method02 - Mostrar certa quantidade de valores pares.
 */

void method02 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method02 - v0.0" );

    // executar o metodo auxiliar
       method02a ( 5 );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 Method03a - Mostrar certa quantidade de valores pares (alternativo).
 @param x - quantidade de valores a serem mostrados
 */

void method03a ( int x )
{
    // definir dado
       int y = 1;        // controle 
       int z = 0;
  
    // repetir enquanto controle menor que a quantidade desejada
       while ( y <= x )
       {
           // vincular o valor a ser mostrado ao controle
              z = 2 * y;

           // mostrar valor
              IO_printf ( "%d: %d\n", y, z );

           // passar ao proximo valor do controle
              y = y + 1;
       } // end while

} // end method03a ( )

/**
 Method03 - Mostrar certa quantidade de valores pares (alternativo).
 */

void method03 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method03 - v0.0" );

    // executar o metodo auxiliar
       method03a ( 5 );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 Method04 - 
 */

void method04 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method04 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 Method05 - 
 */

void method05 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method05 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - 
 */

void method06 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method06 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 Method07 - 
 */

void method07 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method07 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 - 
 */

void method08 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method08 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method09 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
    // identificar
       IO_id ( "Exemplo0503 - Method10 - v0.0" );
       
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
               IO_id ( "Exemplo0503 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar certa quantidade de valores                    " );
               IO_println ( "2 - mostrar certa quantidade de valores pares              " );
               IO_println ( "3 - mostrar certa quantidade de valores pares (alternativo)" );
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

a.) 5

1: 2
2: 4
3: 6
4: 8
5: 10

b.) 3

1: 2
2: 4
3: 6

c.) 0

nao mostra nada

d.) -5

nao mostra nada

 ----------------------------- historico

Versao         Data        Modificacao
0.3            18/04       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       identificacao de programa: mostrar certa quantidade de valores
0.2            01.(OK)       identificacao de programa: mostrar certa quantidade de valores pares
0.3            01.(OK)       identificacao de programa: mostrar certa quantidade de valores pares (alternativo)

*/
  
