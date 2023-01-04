/*
Exemplo0310 - v0.0. - 04 / 04 / 2022
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
       IO_id ( "Exemplo0310 - Method01 - v0.0" );
    
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

/**
 Method02 - Repeticao com teste no inicio.
 */

void method02 ( )
{
    // definir dado
       int x = 0;
       int y = 0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method02 - v0.0" );
    
    // ler do teclado o valor inicial
       x = IO_readint ( "Entrar com uma quantidade: " );

    // repetir ( x ) vezes
       y = x;             // copiar o valor lido (e' melhor)
       while ( y > 0 )
       {
           // mostrar valor atual
              IO_println ( IO_toString_d ( y ) );

           // passar ao proximo valor
              y  = y - 1;
       } // end while
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 Method03 - Repeticao com teste no inicio.
 */

void method03 ( )
{
    // definir dado
       int x = 0;
       int y = 0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method03 - v0.0" );
    
    // ler do teclado o valor inicial
       x = IO_readint ( "Entrar com uma quantidade: " );

    // repetir ( x ) vezes
       y = 1;             // valor lido sera preservado
       while ( y <= x )
       {
           // mostrar valor atual
              IO_printf ( "%d\n", y );

           // passar ao proximo valor
              y  = y + 1;
       } // end while
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 Method04 - Repeticao com teste no inicio e variacao.
 */

void method04 ( )
{
    // definir dado
       int x = 0;
       int y = 0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method04 - v0.0" );
    
    // ler do teclado o valor inicial
       x = IO_readint ( "Entrar com uma quantidade: " );

    // repetir ( x ) vezes
    //       inicio  teste  variacao
       for ( y = 1; y <= x ; y = y + 1 )
       {
           // mostrar valor atual
              IO_printf ( "%d\n", y );
        } // end for
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 Method05 - Repeticao com teste no inicio e variacao.
 */

void method05 ( )
{
    // definir dado
       int x = 0;
       int y = 0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method05 - v0.0" );
    
    // ler do teclado o valor inicial
       x = IO_readint ( "Entrar com uma quantidade: " );

    // repetir ( x ) vezes
    //       inicio  teste  variacao
       for ( y = x; y >= 1; y = y -1 )
       {
           // mostrar valor atual
              IO_printf ( "%d\n", y );
        } // end for
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - Repeticao sobre cadeia de caracteres.
 */

void method06 ( )
{
    // definir dado
       int x = 0;
       int y = 0;

       chars palavra = IO_new_chars ( STR_SIZE );
       int tamanho = 0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method06 - v0.0" );
    
    // ler do teclado o valor inicial
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // repetir para cada caractere
       tamanho = strlen ( palavra ) - 1;
    //OBS.: a cadeia de caracteres inicia suas posicoes em zero.

    //       inicio       teste   variacao
       for ( y = tamanho; y >= 0; y = y -1 )
       {
           // mostrar valor atual
              IO_printf ( "%d: [%c]\n", y, palavra [y] );
        } // end for
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )


/**
 Method07 - Repeticao sobre cadeia de caracteres.
 */

void method07 ( )
{
    // definir dado
       int x = 0;
       int y = 0;
       char palavra [STR_SIZE];
       int tamanho = 0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method07 - v0.0" );
    
    // ler do teclado o valor inicial
       IO_printf ( "Entrar com uma palavra: " );
       scanf ( "%s", palavra );

    // repetir para cada letra
       tamanho = strlen ( palavra );
    //OBS.: a cadeia de caracteres inicia suas posicoes em zero.

    //       inicio     teste    variacao
       for ( y = 0; y < tamanho; y = y + 1 )
       {
           // mostrar valor atual
              IO_printf ( "%d: [%c]\n", y, palavra [y] );
        } // end for
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 - Repeticao com intervalos.
 */

void method08 ( )
{
    // definir dado
       int superior = 0;
       int inferior = 0;
       int x        = 0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method08 - v0.0" );
    
    // ler do teclado o valor inicial
       inferior = IO_readint ( "Limite inferior do intervalo: " );
       superior = IO_readint ( "Limite superior do intervalo: " );

    //       inicio        teste          variacao
       for ( x = inferior; x <= superior; x = x + 1 )
       {
           // mostrar valor atual
              IO_printf ( "%d\n", x );
        } // end for
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - Repeticao com intervalos.
 */

void method09 ( )
{
    // definir dado
       double superior = 0.0;
       double inferior = 0.0;
       double passo    = 0.0;
       double x        = 0.0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method09 - v0.0" );
    
    // ler do teclado o valor inicial
       inferior = IO_readdouble ( "Limite inferior do intervalo: ");
       superior = IO_readdouble ( "Limite superior do intervalo: ");
       passo    = IO_readdouble ( "Variacao no intervalo (passo): ");

    //       inicio        teste          variacao
       for ( x = superior; x >= inferior; x = x - passo )
       {
           // mostrar valor atual
              IO_printf ( "%lf\n", x );
        } // end for
    
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - Repeticao com confirmacao.
 */

void method10 ( )
{
    // definir dado
       double superior = 0.0;
       double inferior = 0.0;
       double passo    = 0.0;
       double x        = 0.0;
  
    // identificar
       IO_id ( "Exemplo0310 - Method10 - v0.0" );
    
    // ler do teclado o valor inicial
       inferior = IO_readdouble ( "Limite inferior do intervalo: ");

    // repetir ate' haver confirmacao de validade
       do
       {
           superior = IO_readdouble ( "Limite superior do intervalo: ");
       } while ( inferior >= superior );

    // repetir ate' haver confirmacao de validade
       do
       {
           passo = IO_readdouble ( "Variacao no intervalo (passo): ");
       } while ( passo <= 0.0 );
 
    //       inicio        teste          variacao 
       for ( x = inferior; x <= superior; x = x + passo )
       {
           // mostrar valor atual
              IO_printf ( "%lf\n", x );
        } // end for
    
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
               IO_id ( "Exemplo0310 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - repeticao com teste no inicio            (decrescente)" );
               IO_println ( "2 - repeticao com teste no inicio            (alternativo)" );
               IO_println ( "3 - repeticao com teste no inicio            ( crescente )" );
               IO_println ( "4 - repeticao com teste no inicio e variacao ( crescente )" );
               IO_println ( "5 - repeticao com teste no inicio e variacao (decrescente)" );
               IO_println ( "6 - repeticao sobre cadeia de caracteres     (decrescente)" );
               IO_println ( "7 - repeticao sobre cadeia de caracteres     ( crescente )" );
               IO_println ( "8 - repeticao com intervalos                 ( crescente )" );
               IO_println ( "9 - repeticao com intervalos                 (decrescente)" );
               IO_println ( "10 - repeticao com confirmacao                            " );
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



a.) [ 0.1 : 0.5 ] e passo = 0.1
b.) [ 0.5 : 0.1 ] e passo = 0.1
c.) [ 0.1 : 0.5 ] e passo = -0.1

a.) 0.1 0.2 0.3 0.4 0.5
b.) não é possivel, pois passo superior tem de ser > inferior
c.) não é possivel, pois passo tem de ser > 0



 ----------------------------- historico

Versao         Data        Modificacao
1.0           04/04       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       identificacao de programa "1 - repeticao com teste no inicio (decrescente)"
0.2            01.(OK)       identificacao de programa "2 - repeticao com teste no inicio (alternativo)"
0.3            01.(OK)       identificacao de programa "3 - repeticao com teste no inicio ( crescente )"
0.4            01.(OK)       identificacao de programa "4 - repeticao com teste no inicio e variacao ( crescente )"
0.5            01.(OK)       identificacao de programa "5 - repeticao com teste no inicio e variacao (decrescente)"
0.6            01.(OK)       identificacao de programa "6 - repeticao sobre cadeia de caracteres     (decrescente)"
0.7            01.(OK)       identificacao de programa "7 - repeticao sobre cadeia de caracteres     ( crescente )"
0.8            01.(OK)       identificacao de programa "8 - repeticao com intervalos                 ( crescente )"
0.9            01.(OK)       identificacao de programa "9 - repeticao com intervalos                 (decrescente)"
1.0            01.(OK)       identificacao de programa "10 - repeticao com confirmacao                            "

*/
  
