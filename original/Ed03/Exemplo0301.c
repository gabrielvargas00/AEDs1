/*
Exemplo0301 - v0.0. - 04 / 04 / 2022
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
 Method01 - Repeticao com teste no inicio.
 */

void method01 ( )
{
    // definir dado
       int x = 0;
  
    // identificar
       IO_id ( "Exemplo0301 - Method01 - v0.0" );
    
    // ler do teclado o valor inicial
       x = IO_readint ( "Entrar com uma quantidade: " );

    // repetir ( x ) vezes
       while ( x > 0 )
       {
           // mostrar valor atual
              IO_println ( IO_toString_d ( x ) );

           // passar ao proximo valor
              x  = x - 1;
       } // end while
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( )

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
               IO_id ( "Exemplo0301 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - repeticao com teste no inicio" );
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
               
               default:
                   IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (",
                              IO_concat ( IO_toString_d ( x ), ")" ) ) );
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

 a) 0
 b) 1
 c) 2
 d) 3
 e) 4
 f) -1

a) Vai encerrar o programa

b) Vai abrir o method01 e pedir para entrar com um valor. Em seguida, este sera' contado regressivamente ate 1

c, d, e, f) Valor diferente das opcoes [0,1] (x)

 ----------------------------- historico

Versao         Data        Modificacao
0.1            04/04       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       identificacao de programa

*/
  
