/*
Exemplo0605 - v0.0. - 25 / 04 / 2022
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
  Method01a - Mostrar certa quantidade de valores recursivamente.
  @param x - quantidade de valores a serem mostrados
 */

void method01a ( int x )
{
    // repetir enquanto valor maior que zero
       if ( x > 0 )
       {
           // mostrar valor
              IO_printf ( "%s%d\n", "Valor = ", x );
           // passar ao proximo
              method01a ( x - 1 );       // motor da recursividade
       } // end if
} // end method01a ( )

/**
Method01 - Mostrar certa quantidade de valores I.
*/
void method01 ( )
{
    // identificar
       IO_id ( "EXEMPLO0605 - Method01 - v0.0" );

    // executar o metodo auxiliar
       method01a ( 5 );                  // motor da recursividade

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );
} // end method01 ( ) 

/**
  Method02a - Mostrar certa quantidade de valores recursivamente.
  @param x - quantidade de valores a serem mostrados
 */

void method02a ( int x )
{
    // repetir enquanto valor maior que zero
       if ( x > 0 )
       {
           // passar ao proximo
              method02a ( x - 1 );       // motor da recursividade
           // mostrar valor
              IO_printf ( "%s%d\n", "Valor = ", x );
       } // end if
} // end method02a ( )

/**
 Method02 - Mostrar certa quantidade de valores II.
 */

void method02 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method02 - v0.0" );

    // executar o metodo auxiliar
       method02a ( 5 );                  // motor da recursividade

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
  Method03a - Mostrar certa quantidade de valores recursivamente.
  @param x - quantidade de valores a serem mostrados
 */

void method03a ( int x )
{
    // repetir enquanto valor maior que zero
       if ( x > 1 )
       {
           // passar ao proximo
              method03a ( x - 1 );       // motor da recursividade
           // mostrar valor
              IO_printf ( "%s%d\n", "Valor = ", x );
       } // end if

       else
       {                                 // base da recursividade
           // mostrar o ultimo valor
              IO_printf ( "%s\n", "Valor = 1" );
       } // end else
} // end method03a ( )

/**
 Method03 - Mostrar certa quantidade de valores positivos
 */

void method03 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method03 - v0.0" );

    // executar o metodo auxiliar
       method03a ( 5 );                  // motor da recursividade
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
  Method04a - Mostrar certa quantidade de valores recursivamente.
  @param x - quantidade de valores a serem mostrados
 */

void method04a ( int x )
{
    // repetir enquanto valor maior que zero
       if ( x > 1 )
       {
           // passar ao proximo
              method04a ( x - 1 );       // motor da recursividade
           // mostrar valor
              IO_printf ( "%s%d\n", "Valor = ", 2 * ( x-1 ) );
       } // end if

       else
       {                                 // base da recursividade
           // mostrar o ultimo
              IO_printf ( "%s\n", "Valor = 1" );
       } // end else
} // end method04a ( )

/**
 Method04 - Mostrar certa quantidade de multiplos de dois
 */

void method04 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method04 - v0.0" );

    // executar o metodo auxiliar
       method04a ( 5 );                  // motor da recursividade

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  Method05a - Mostrar certa quantidade de valores recursivamente.
  @param x - quantidade de valores a serem mostrados
 */

void method05a ( int x )
{
    // repetir enquanto valor maior que zero
       if ( x > 1 )
       {
           // passar ao proximo
              method05a ( x - 1 );       // motor da recursividade
           // mostrar valor
              IO_printf ( "%d: %d/%d\n", x, ( 2 * (x-1) ), (2 * (x-1) + 1 ) );
       } // end if

       else
       {                                 // base da recursividade
           // mostrar o ultimo
              IO_printf ( "%d: %d\n", x, 1 );
       } // end else
} // end method05a ( )

/**
 Method05 - Mostrar valores de parcelas do somatorio: 1 + 2/3 + 4/5 + 6/7 + ...
 */

void method05 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method05 - v0.0" );

    // executar o metodo auxiliar
       method05a ( 5 );                  // motor da recursividade
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - 
 */

void method06 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method06 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 Method07 - 
 */

void method07 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method07 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 - 
 */

void method08 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method08 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method09 - v0.0" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
    // identificar
       IO_id ( "Exemplo0605 - Method10 - v0.0" );
       
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
               IO_id ( "Exemplo0605 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar certa quantidade de valores I                              " );
               IO_println ( "2 - mostrar certa quantidade de valores II                              " );
               IO_println ( "3 - mostrar certa quantidade de valores positivos                       " );
               IO_println ( "4 - mostrar certa quantidade de multiplos de dois                       " );
               IO_println ( "5 - mostrar valores de parcelas do somatorio: 1 + 2/3 + 4/5 + 6/7 + ... " );
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
1: 1
2: 2/3
3: 4/5
4: 6/7
5: 8/9

b.) 3
1: 1
2: 2/3
3: 4/5

c.) 0
0: 1*

d.) -5
-5: 1*

* embora resultado incorreto, ele e' esperado, pois esta' escrito que, caso o x nao entre com um valor positivo,
  devera' mostrar na tela "x: 1", partindo do pressuposto de que o primeiro valor seria o 1.
 ----------------------------- historico

Versao         Data        Modificacao
0.5            25/04       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       mostrar certa quantidade de valores I
0.2            01.(OK)       mostrar certa quantidade de valores II
0.3            01.(OK)       mostrar certa quantidade de valores positivos
0.4            01.(OK)       mostrar certa quantidade de multiplos de dois
0.5            01.(OK)       mostrar valores de parcelas do somatorio: 1 + 2/3 + 4/5 + 6/7 + ...

*/
  
