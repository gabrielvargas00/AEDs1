/*
Exemplo0419 - v0.0. - 12 / 04 / 2022
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
 Method01 - Repeticao para ler certa quantidade de valores.
 */

void method01 ( )
{
    // definir dado
       int quantidade = 0;
       int valor      = 0;
       int controle   = 0;

    // identificar
       IO_id ( "Exemplo0419 - Method01 - v0.0" );

    // ler do teclado o valor inicial
       quantidade = IO_readint ( "Entrar com uma quantidade: " );

    // repetir para a quantidade de vezes informada
      controle = 1;
      while ( controle <= quantidade )
      {
         // ler valor do teclado
            valor = IO_readint ( IO_concat (
                    IO_concat ( "", IO_toString_d ( controle ) ),
                    ": " ) );
         // passar ao proximo valor
            controle = controle + 1;
      } // end while

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( )

/**
 Method02 - Ler valores e contar positivos.
 */

void method02 ( )
{
    // definir dado
       int quantidade = 0;
       int valor      = 0;
       int controle   = 0;
       int contador   = 0;

    // identificar
       IO_id ( "Exemplo0419 - Method02 - v0.0" );

    // ler do teclado
       quantidade = IO_readint ( "Entrar com uma quantidade: " );

    // repetir para a quantidade de vezes informada
       controle = 1;
       while ( controle <= quantidade )
       {
          // ler valor do teclado
             valor = IO_readint ( IO_concat (
                                  IO_concat ( "", IO_toString_d ( controle ) ),
                                  ": " ) );

          // testar e contar se valor for positivo
             if ( positive ( valor ) )
             {
                contador = contador + 1;
             } // end if

          // passar ao proximo valor
             controle = controle + 1;

       } // end while

    // mostrar quantidade de valores positivos
       IO_printf ( "%s%d\n", "\nPositivos = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 Funcao para determinar se valor inteiro pertence a intervalo aberto
 @return true, se pertencer; false, caso contrario
 @param x - valor a ser testado
 */

bool belongsTo ( int x, int inferior, int superior )
{
    // definir dado local
       bool result = false;

    // testar a condicao
       if ( ( inferior < x ) && ( x < superior ) )
       {
           result = true;
       } // end if

       return ( result );
} // end belogsTo ( )

/**
 Method03 - Ler valores e contar positivos menores que 100.
 */

void method03 ( )
{
    // definir dado
       int quantidade = 0;
       int valor      = 0;
       int controle   = 0;
       int contador   = 0;

    // identificar
       IO_id ( "Exemplo0419 - Method03 - v0.0" );

    // ler do teclado
       quantidade = IO_readint ( "Entrar com uma quantidade: " );

    // repetir para a quantidade de vezes informada
       controle = 1;
       while ( controle <= quantidade )
       {
          // ler valor do teclado
             valor = IO_readint ( IO_concat (
                                  IO_concat ( "", IO_toString_d ( controle ) ),
                                  ": " ) );

          // testar e contar se valor esta' entre 0 e 100
             if ( belongsTo ( valor, 0, 100 ) )
             {
                contador = contador + 1;
             } // end if

          // passar ao proximo valor
             controle = controle + 1;

       } // end while

    // mostrar quantidade de valores positivos
       IO_printf ( "%s%d\n", "\nPositivos menores que 100 = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 Method04 - Ler valores e contar positivos menores que 100 e pares
 */

void method04 ( )
{
    // definir dado
       int quantidade = 0;
       int valor      = 0;
       int controle   = 0;
       int contador   = 0;

    // identificar
       IO_id ( "Exemplo0419 - Method04 - v0.0" );

    // ler do teclado
       quantidade = IO_readint ( "Entrar com uma quantidade: " );

    // repetir para a quantidade de vezes informada
       controle = 1;
       while ( controle <= quantidade )
       {
          // ler valor do teclado
             valor = IO_readint ( IO_concat (
                                  IO_concat ( "", IO_toString_d ( controle ) ),
                                  ": " ) );

          // testar e contar se valor for positivo, menor que 100 e par
             if ( belongsTo ( valor, 0, 100 ) && even ( valor ) )
             {
                contador = contador + 1;
             } // end if

          // passar ao proximo valor
             controle = controle + 1;

       } // end while

    // mostrar quantidade de valores positivos, menores que 100 e pares
       IO_printf ( "%s%d\n", "\nPositivos menores que 100 e pares = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 Method05 - Ler valores e contar positivos menores que 100 e pares (alternativo)
 */

void method05 ( )
{
    // definir dado
       int quantidade = 0;
       int valor      = 0;
       int controle   = 0;
       int contador   = 0;
       bool ok        = false;

    // identificar
       IO_id ( "Exemplo0419 - Method05 - v0.0" );

    // ler do teclado
       quantidade = IO_readint ( "Entrar com uma quantidade: " );

    // repetir para a quantidade de vezes informada
       controle = 1;
       while ( controle <= quantidade )
       {
          // ler valor do teclado
             valor = IO_readint ( IO_concat (
                                  IO_concat ( "", IO_toString_d ( controle ) ),
                                  ": " ) );

          // testar e contar se valor for positivo, menor que 100 e par
             ok = belongsTo ( valor, 0, 100 );
             ok = ok && even ( valor );

             if ( ok )
             {
                contador = contador + 1;
             } // end if

          // passar ao proximo valor
             controle = controle + 1;

       } // end while

    // mostrar quantidade de valores positivos, menores que 100 e pares
       IO_printf ( "%s%d\n", "\nPositivos menores que 100 e pares = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - Ler palavra e contar letras minusculas.
 */

void method06 ( )
{
    // definir dado
       chars palavra  = IO_new_chars ( STR_SIZE );

       int   tamanho  =  0 ;
       int   posicao  =  0 ;
       char  simbolo  = '_';
       int   contador =  0 ;

    // identificar
       IO_id ( "Exemplo0419 - Method06 - v0.0" );

    // ler do teclado
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( palavra );

    // repetir para a quantidade de vezes informada

       for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
       {
          // isolar um simbolo por vez
             simbolo = palavra [ posicao ];

          // testar e contar se caractere e' letra minuscula
             if ( isLowerCase ( simbolo ) )
             {
                contador = contador + 1;
             } // end if

       } // end for

    // mostrar quantidade de valores positivos, menores que 100 e pares
       IO_printf ( "%s%d\n", "\nMinusculas = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 Method07 - Ler palavra, contar e mostrar letras minusculas.
 */

void method07 ( )
{
    // definir dado
       chars palavra  = IO_new_chars ( STR_SIZE );

       int   tamanho  =  0 ;
       int   posicao  =  0 ;
       char  simbolo  = '_';
       int   contador =  0 ;

    // identificar
       IO_id ( "Exemplo0419 - Method07 - v0.0" );

    // ler do teclado
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( palavra );

    // repetir para a quantidade de vezes informada

       for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
       {
          // isolar um simbolo por vez
             simbolo = palavra [ posicao ];

          // testar e contar se caractere e' letra minuscula
             if ( isLowerCase ( simbolo ) )
             {
                 // mostrar
                    IO_printf ( "%c", simbolo );

                 // contar
                    contador = contador + 1;
             } // end if

       } // end for

    // mostrar quantidade de valores positivos, menores que 100 e pares
       IO_printf ( "%s%d\n", "\n\nMinusculas = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 -
 */

void method08 ( )
{
    // definir dado
       int   tamanho  =  0 ;
       int   posicao  =  0 ;
       char  simbolo  = '_';
       int   contador =  0 ;

       chars palavra    = IO_new_chars ( STR_SIZE );
       chars minusculas = IO_new_chars ( STR_SIZE );

       strcpy ( minusculas, STR_EMPTY ); // vazio

    // identificar
       IO_id ( "Exemplo0419 - Method08 - v0.0" );

    // ler do teclado
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( palavra );

    // repetir para a quantidade de vezes informada

       for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
       {
          // isolar um simbolo por vez
             simbolo = palavra [ posicao ];

          // testar e contar as letras minusculas de uma palavra
             if ( isLowerCase ( simbolo ) )
             {
                 // concatenar simbolo encontrado
                    minusculas = IO_concat ( minusculas, IO_toString_c ( simbolo ) );

                 // contar
                    contador = contador + 1;
             } // end if

       } // end for

    // mostrar quantidade de minusculas
       IO_printf ( "\n%s%d [%s]\n", "Minusculas = ", contador, minusculas );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - Ler palavra e contar os algarismos.
 */

void method09 ( )
{
    // definir dado
       int   tamanho  =  0 ;
       int   posicao  =  0 ;
       char  simbolo  = '_';
       int   contador =  0 ;

       chars palavra    = IO_new_chars ( STR_SIZE );

    // identificar
       IO_id ( "Exemplo0419 - Method09 - v0.0" );

    // ler do teclado
       palavra = IO_readstring ( "Entrar com caracteres: " );

    // determinar a quantidade de simbolos
       tamanho = strlen ( palavra );

    // repetir para a quantidade de vezes informada

       for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
       {
          // isolar um simbolo por vez
             simbolo = palavra [ posicao ];

          // testar e contar os algarismos em uma cadeia de caracteres
             if ( isDigit ( simbolo ) )
             {
                 // mostrar
                    IO_printf ( "%c", simbolo );

                 // contar
                    contador = contador + 1;
             } // end if

       } // end for

    // mostrar a quantidade de digitos
       IO_printf ( "\n%s%d\n", "\nAlgarismos = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Funcao para determinar se caractere e' digito
 @return true, se digito; false, caso contrario
 @param x - valor a ser testado
 */

bool isADigit ( char x )
{
    return ( '0' <= x && x <= '9' );

} // end isADigit ( )

/**
 Funcao para concatenar 'a cadeia de caracteres mais um digito.
 @return cadeia de caracteres acrescida de mais um digito
 @param digits - cadeia de caracteres
 @param digit  - simbolo a ser acrescentado 'a cadeia de caracteres
 */

chars concatADigit ( chars string, char digit )
{
    return ( IO_concat ( string, IO_toString_c ( digit ) ) );

} // end concatADigit ( )

/**
 Method10 - Ler palavra, contar e mostrar os algarismos
 */

void method10 ( )
{
    // definir dado
       int   tamanho  =  0 ;
       int   posicao  =  0 ;
       char  simbolo  = '_';

       chars palavra    = IO_new_chars ( STR_SIZE );
       chars digitos    = IO_new_chars ( STR_SIZE );

       strcpy ( digitos, STR_EMPTY );

    // identificar
       IO_id ( "Exemplo0419 - Method10 - v0.0" );

    // ler do teclado
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( palavra );

    // repetir para a quantidade de vezes informada

       for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
       {
          // isolar um simbolo por vez
             simbolo = palavra [ posicao ];

          // testar e contar os algarismos em uma cadeia de caracteres
             if ( isDigit ( simbolo ) )
             {
                 // concatenar simbolo encontrado
                    digitos = concatADigit ( digitos, simbolo );

             } // end if

       } // end for

    // mostrar a quantidade de digitos
       IO_printf ( "\n%s%d [%s]\n", "Algarismos = ", strlen ( digitos ), digitos );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
 Method11 - Ler certa quantidade de valores reais e dizer:
            quantos estao dentro e quantos estao fora
 */

void method11 ( )
{
    // definir dado
       double superior    = 0.0;
       double inferior    = 0.0;
       double quantidade  = 0.0;
       double valor       = 0.0;
       int    controle    =  0 ;
       int    contadorIn  =  0 ;
       int    contadorOut =  0 ;

    // identificar
       IO_id ( "Exemplo0419 - Method11 - v0.0" );

    // ler do teclado limites do intervalo
       inferior = IO_readdouble ( "Entrar com o limite inferior: " );
       superior = IO_readdouble ( "Entrar com o limite superior: " );

    // testar se intervalo valido
       while ( inferior >= superior )
       {
          IO_printf ( "\nIntervalo invalido!\n\n" );
          inferior = IO_readdouble ( "Entrar com o limite inferior: " );
          superior = IO_readdouble ( "Entrar com o limite superior: " );

       } // end while

    // ler do teclado quantidade de valores
       quantidade = IO_readdouble ( "\nEntrar com uma quantidade: " );

    // testar se quantidade valida
       while ( notPositive ( quantidade ) )
       {
          IO_printf ( "\nValor invalido!\n\n" );
          quantidade = IO_readdouble ( "\nEntrar com uma quantidade: " );

       } // end while

    // repetir para a quantidade de vezes informada
       controle = 1;
       while ( controle <= quantidade )
       {
          // ler valor do teclado
             valor = IO_readdouble ( IO_concat (
                                     IO_concat ( "", IO_toString_f2 ( controle ) ),
                                     ": " ) );

          // testar e contar se valor esta' contido no intervalo estabelecido
             if ( belongsToAClosedRange_f ( valor, inferior, superior ) )
             {
                contadorIn = contadorIn + 1;
             } // end if

             else
             {
                contadorOut = contadorOut + 1;
             } // end else

          // passar ao proximo valor
             controle = controle + 1;

       } // end while

    // mostrar quantidade de valores dentro e fora do intervalo
       IO_printf ( "%s%d\n", "\nValores dentro do intervalo = ", contadorIn );
       IO_printf ( "%s%d\n", "\nValores fora do intervalo = ", contadorOut  );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 Method12 - Ler caracteres e contar as letras maiusculas menores que K
 */

void method12 ( )
{
    // definir dado
       int  tamanho   =  0 ;
       int  posicao   =  0 ;
       char simbolo   = '_';
       int  contador  =  0 ;

      chars palavra  = IO_new_chars ( STR_SIZE );

    // identificar
       IO_id ( "Exemplo0419 - Method12 - v0.0" );

    // ler do teclado cadeia de caracteres
       palavra = IO_readstring ( "\nEntrar com uma sequencia de caracteres: " );

    // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( palavra );

    // repetir para a quantidade de vezes informada

       for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
       {
          // isolar um simbolo por vez
             simbolo = palavra [ posicao ];

          // testar e contar se caractere e' letra minuscula
             if ( belongsToAClosedRange_c ( simbolo, 'A', 'J' ) )
             {
                 // contar
                    contador = contador + 1;
             } // end if

       } // end for

    // mostrar quantidade de letras maiusculas menores que 'K'
       IO_printf ( "%s%d\n", "\nLetras maiusculas menores que K = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

/*
void method12 ( )
{
    // definir dado
       int  tamanho   =  0 ;
       int  posicao   =  0 ;
       char simbolo   = '_';
       int  contador  =  0 ;

      chars palavra  = IO_new_chars ( STR_SIZE );

    // identificar
       IO_id ( "Exemplo0419 - Method12 - v0.0" );

    // ler do teclado cadeia de caracteres
       palavra = IO_readstring ( "\nEntrar com uma sequencia de caracteres: " );

    // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( palavra );

    // repetir para a quantidade de vezes informada

       for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
       {
          // isolar um simbolo por vez
             simbolo = palavra [ posicao ];

          // testar e contar se caractere e' letra minuscula
             if ( isUpperCase ( simbolo ) )
             {
                 // testar se menor que 'K'
                    if ( simbolo < 'K' )

                 // contar
                    contador = contador + 1;
             } // end if

       } // end for

    // mostrar quantidade de letras maiusculas menores que 'K'
       IO_printf ( "%s%d\n", "\nLetras maiusculas menores que K = ", contador );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

*/

} // end method12 ( )

/**
 Method13 - Ler caracteres e mostrar quantidade de letras
            maiusculas menores que K
 */

void method13 ( )
{
    // definir dados
       int x  = 0;
       chars text  = IO_new_chars ( STR_SIZE );

    // identificar
       IO_id ( "Exemplo0419 - Method13 - v0.0" );

    // acao
       text = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
       x = countCharsIn ( text, 'A', 'J' );

    // mostrar quantidade
       IO_printf ( "\nHa' %d letras maiusculas menores que K\n", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 Method14 - Ler caracteres e mostrar as letras
            maiusculas menores que K
 */

void method14 ( )
{
    // definir dados
       chars x     = IO_new_chars ( STR_SIZE );
       chars text  = IO_new_chars ( STR_SIZE );

       strcpy ( x, STR_EMPTY );

    // identificar
       IO_id ( "Exemplo0419 - Method14 - v0.0" );

    // acao
       text = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
       x = printCharsIn ( text, 'A', 'J' );

    // mostrar quantidade
       IO_printf ( "\nAs letras maiusculas menores que K sao: [%s]\n", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 Method15 - Ler caracteres e quantas as letras
            maiusculas e minusculas menores que K e k, respectivamente
 */

void method15 ( )
{
    // definir dados
       chars x     = IO_new_chars ( STR_SIZE );
       chars text  = IO_new_chars ( STR_SIZE );

       strcpy ( x, STR_EMPTY );

    // identificar
       IO_id ( "Exemplo0415 - Method15 - v0.0" );

    // acao
       text = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
       x = countCharsIn2 ( text, 'A', 'J', 'a', 'j' );

    // mostrar quantidade
       IO_printf ( "\nHa' %d letras maiusculas e minusculas menores que K e k, respectivamente\n", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 Method16 - Ler caracteres e mostrar as letras
            maiusculas e minusculas menores que K e k, respectivamente
 */

void method16 ( )
{
    // definir dados
       chars x     = IO_new_chars ( STR_SIZE );
       chars text  = IO_new_chars ( STR_SIZE );

       strcpy ( x, STR_EMPTY );

    // identificar
       IO_id ( "Exemplo0419 - Method16 - v0.0" );

    // acao
       text = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
       x = printCharsIn2 ( text, 'A', 'J', 'a', 'j' );

    // mostrar quantidade
       IO_printf ( "\nAs letras maiusculas e minusculas menores que K e k sao: [%s]\n", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 Method17 - Ler caracteres e mostrar quantos 
            sao digitos e pares
 */

void method17 ( )
{
    // definir dados
       int x       = 0;
       chars text  = IO_new_chars ( STR_SIZE );

    // identificar
       IO_id ( "Exemplo0419 - Method17 - v0.0" );

    // acao
       text = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
       x = evenChars ( text );

    // mostrar quantidade
       IO_printf ( "\nHa' %i digitos pares na cadeia de caracteres\n", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
 Method18 - Ler caracteres e mostrar os nao alfanumericos
 */

void method18 ( )
{
    // definir dados
       chars x     = IO_new_chars ( STR_SIZE );
       chars text  = IO_new_chars ( STR_SIZE );

       strcpy ( x, STR_EMPTY );

    // identificar
       IO_id ( "Exemplo0419 - Method18 - v0.0" );

    // acao
       text = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
       x = printNotAlfaNumbers ( text );

    // mostrar quantidade
       IO_printf ( "\nCaracteres nao alfanumericos sao: %s\n", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

/**
 Method19 - Ler caracteres e mostrar os alfanumericos
 */

void method19 ( )
{
    // definir dados
       chars x     = IO_new_chars ( STR_SIZE );
       chars text  = IO_new_chars ( STR_SIZE );

       strcpy ( x, STR_EMPTY );

    // identificar
       IO_id ( "Exemplo0419 - Method19 - v0.0" );

    // acao
       text = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
       x = printAlfaNumbers ( text );

    // mostrar quantidade
       IO_printf ( "\nCaracteres alfanumericos sao: %s\n", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method19 ( )

/**
 Method20 -
 */

void method20 ( )
{
    // identificar
       IO_id ( "Exemplo0419 - Method20 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method20 ( )

/**
 MethodE1 -
 */

void methodE1 ( )
{
    // identificar
       IO_id ( "Exemplo0419 - MethodE1 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE1 ( )

/**
 MethodE2 -
 */

void methodE2 ( )
{
    // identificar
       IO_id ( "Exemplo0419 - MethodE2 - v0.0" );

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
               IO_id ( "Exemplo0419 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - Parar" );
               IO_println ( "1 - Ler certa quantidade de valores                                     " );
               IO_println ( "2 - Ler valores e contar positivos                                      " );
               IO_println ( "3 - Ler valores e contar positivos menores que 100                      " );
               IO_println ( "4 - Ler valores e contar positivos menores que 100 e pares              " );
               IO_println ( "5 - Ler valores e contar positivos menores que 100 e pares (alternativo)" );
               IO_println ( "6 - Ler palavra e contar letras minusculas                              " );
               IO_println ( "7 - Ler palavra, contar e mostrar letras minusculas                     " );
               IO_println ( "8 - Ler palavra, contar e mostrar letras minusculas (alternativo)       " );
               IO_println ( "9 - Ler palavra e contar os algarismos                                  " );
               IO_println ( "10 - Ler palavra, contar e mostrar os algarismos                        " );
               IO_println ( "11 - Ler certa valores reais e dizer quantos estao dentro e quantos fora" );
               IO_println ( "12 - Ler caracteres e contar as letras maiusculas menores que K         " );
               IO_println ( "13 - Ler caracteres e mostrar numero de letras maiusculas menores que K"  );
               IO_println ( "14 - Ler caracteres e mostrar as letras maiusculas menores que K        " );
               IO_println ( "15 - Ler caracteres e mostrar quantas letras maiusculas e minusculas menores que K e k, respectivamente" );
               IO_println ( "16 - Ler caracteres e mostrar as letras maiusculas e minusculas menores que K e k, respectivamente     " );
               IO_println ( "17 - Ler caracteres e mostrar quantos sao digitos e pares               " );
               IO_println ( "18 - Ler caracteres e mostrar os nao alfanumericos                      " );
               IO_println ( "19 - Ler caracteres e mostrar os alfanumericos                          " );
               // IO_println ( "20 - " );
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
 ----------------------------- previsao de testes

Teste:

a.) (A1b2+C3d4)*E5f6

Caracteres alfanumericos sao: A1b2C3d4E5f6

b.) 123ABCabc%&#

Caracteres alfanumericos sao: 123ABCabc

c.) -[%&]

Caracteres alfanumericos sao: NAO HA'


 ----------------------------- historico

Versao         Data        Modificacao
1.9            12/04       esboco

*/