/*
Exemplo05E2 - v0.0. - 23 / 04 / 2022
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
       IO_id ( "Exemplo05E2 - Method01 - v0.0" );

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
       IO_id ( "Exemplo05E2 - Method02 - v0.0" );

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
       IO_id ( "Exemplo05E2 - Method03 - v0.0" );

    // executar o metodo auxiliar
       method03a ( 5 );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 Method04a - Mostrar certa quantidade de valores pares (decrescente).
 @param x - quantidade de valores a serem mostrados
 */

void method04a ( int x )
{
    // definir dado
       int y = x;        // controle 
       int z = 0;
  
    // repetir enquanto controle menor que a quantidade desejada
       while ( y > 0 )
       {
           // vincular o valor a ser mostrado ao controle
              z = 2 * y;

           // mostrar valor
              IO_printf ( "%d: %d\n", y, z );

           // passar ao proximo valor do controle
              y = y - 1;
       } // end while

} // end method04a ( )

/**
 Method04 - Mostrar certa quantidade de valores pares (decrescente).
 */

void method04 ( )
{  
    // identificar
       IO_id ( "Exemplo05E2 - Method04 - v0.0" );
    
    // executar o metodo auxiliar
       method04a ( 5 );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 Method05a - Mostrar certa quantidade de valores pares (decrescente - alternativo).
 @param x - quantidade de valores a serem mostrados
 */

void method05a ( int x )
{
    // definir dado
       int y = 0;        // controle 
  
    // repetir enquanto controle menor que a quantidade desejada
       for ( y = x; y > 0; y = y - 1 )
       {
           // mostrar valor
              IO_printf ( "%d: %d\n", y, ( 2 * y ) );
       } // end for

} // end method05a ( )

/**
 Method05 - Mostrar certa quantidade de valores pares (decrescente - alternativo).
 */

void method05 ( )
{  
    // identificar
       IO_id ( "Exemplo05E2 - Method05 - v0.0" );

    // executar o metodo auxiliar
       method05a ( 5 );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 somarValores - Funao para somar certa quantidade de pares.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
 */

int somarValores ( int x )
{
    // definir dados locais
       int soma = 1;
       int y    = 0;
  
    // repetir enquanto controle menor que a quantidade desejada
       for ( y = x-1; y > 0; y = y - 1 )
       {
           // mostrar valor
              IO_printf ( "%d: %d\n", y, ( 2 * y ) );

           // somar valor
              soma = soma + ( 2 * y );
       } // end for
    
    // retornar resultado
       return ( soma );

} // end somarValores ( )

/**
 Method06 - Mostrar e somar certa quantidade de pares.
 */

void method06 ( )
{  
    // definir dado
       int soma = 0;

    // identificar
       IO_id ( "Exemplo05E2 - Method06 - v0.0" );

    // chamar e receber resultado da funcao
       soma = somarValores ( 5 );

    // mostrar resultado
       IO_printf ( "\nSoma de pares = %d\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 somarFracao - Funao para somar certa quantidade de fracoes.
 @return soma das fracoes
 @param x - quantidade de valores a serem mostrados
 */

double somarFracao ( int x )
{
    // definir dados locais
       double soma        = 1.0;
       double numerador   = 0.0;
       double denominador = 0.0;
       int    y           = 0  ;
  
    // repetir enquanto controle menor que a quantidade desejada
       for ( y = x-1; y > 0; y = y - 1 )
       {
           // calcular numerador
              numerador   = 1.0;

           // calcular denominador
              denominador = 2.0 * y;

           // mostrar valor
              IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
                            y, numerador, denominador, (numerador/denominador) );

           // somar valor
              soma = soma + ( 1.0 ) / ( 2.0 * y );
       } // end for
    
    // retornar resultado
       return ( soma );

} // end somarFracao ( )

/**
 Method07 - Mostrar e somar certa quantidade de fracoes.
 */

void method07 ( )
{  
    // definir dado
       double soma = 0.0;

    // identificar
       IO_id ( "Exemplo05E2 - Method07 - v0.0" );

    // chamar e recebeer resultado da funcao
       soma = somarFracao ( 5 );

    // mostrar resultado
       IO_printf ( "\nSoma de fracoes = %lf\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 somarFracao1 - Funao para somar certa quantidade de fracoes.
 @return soma das fracoes
 @param x - quantidade de valores a serem mostrados
 */

double somarFracao1 ( int x )
{
    // definir dados locais
       double soma        = 1.0;
       double numerador   = 0.0;
       double denominador = 0.0;
       int    y           = 0  ;
    
    // mostrar primeiro valor
       IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n", 1, 1.0, soma, (1.0/1.0) );
  
    // repetir enquanto controle menor que a quantidade desejada
       for ( y = 1; y <= ( x - 1 ); y = y + 1 )
       {
           // calcular numerador
              numerador   = 2.0 * y - 1;

           // calcular denominador
              denominador = 2.0 * y;

           // mostrar valor
              IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
                            y+1, numerador, denominador, (numerador/denominador) );

           // somar valor
              soma = soma + ( 2.0 * y - 1 ) / ( 2.0 * y );
       } // end for
    
    // retornar resultado
       return ( soma );

} // end somarFracao1 ( )

/**
 Method08 - Mostrar e somar certa quantidade de fracoes I.
 */

void method08 ( )
{  
    // definir dado
       double soma = 0.0;

    // identificar
       IO_id ( "Exemplo05E2 - Method08 - v0.0" );

    // chamar e recebeer resultado da funcao
       soma = somarFracao1 ( -5 );

    // mostrar resultado
       IO_printf ( "\nSoma de fracoes = %lf\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 somarFracao2 - Funao para somar certa quantidade de fracoes.
 @return soma das fracoes
 @param x - quantidade de valores a serem mostrados
 */

double somarFracao2 ( int x )
{
    // definir dados locais
       double soma        = 1.0;
       int y              = 0  ;
    
    // mostrar primeiro valor
       IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n", 1, 1.0, soma, (1.0/1.0) );
  
    // repetir enquanto controle menor que a quantidade desejada
       for ( y = 1; y <= ( x - 1 ); y = y + 1 )
       {
           // mostrar valor
              IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
                            y+1, ( 2.0 * y ), ( 2.0 * y + 1 ), ( ( 2.0 * y ) / ( 2.0 * y + 1 ) ) );

           // somar valor
              soma = soma + ( 2.0 * y ) / ( 2.0 * y + 1);
       } // end for
    
    // retornar resultado
       return ( soma );

} // end somarFracao2 ( )

/**
 Method09 - Mostrar e somar certa quantidade de fracoes II.
 */

void method09 ( )
{  
    // definir dado
       double soma = 0.0;

    // identificar
       IO_id ( "Exemplo05E2 - Method09 - v0.0" );

    // chamar e recebeer resultado da funcao
       soma = somarFracao2 ( 5 );

    // mostrar resultado
       IO_printf ( "\nSoma de fracoes = %lf\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 multiplicarValores - Funcao para multiplicar certa quantidade de valores impares.
 @return produto de valores
 @param x - quantidade de valores
 */

int multiplicarValores ( int x )
{
    // definir dados locais
       int produto = 1;
       int y       = 0;
  
    // repetir enquanto controle menor que a quantidade desejada
       for ( y = 1; y <= x; y = y + 1 )
       {
           // mostrar valor
              IO_printf ( "%d: %d\n", y, ( 2 * y - 1 ) );

           // somar valor
              produto = produto * ( 2 * y - 1 );
       } // end for
    
    // retornar resultado
       return ( produto );

} // end multiplicarValores ( )

/**
 Method10 - Mostrar e multiplicar certa quantidade de valores impares.
 */

void method10 ( )
{  
    // identificar
       IO_id ( "Exemplo05E2 - Method10 - v0.0" );

    // mostrar produto de valores
       IO_printf ( "\n%s%d\n", "Produto = ", multiplicarValores ( 5 ) );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
 Method11 - mostrar multiplos positivos de sete (crescente)
 OBS.: as funcoes se encontram a partir da linha 147 na biblioteca "gabrielvargas.h"
 */

void method11 ( )
{
    // definir dados 
       int x = 0;

    // identificar
       IO_id ( "Exemplo05E2 - Method11 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantas vezes? ");
       IO_printf ( "\n" );

    // mostrar multiplos
       multiple ( 7, x );

    // espacar as respostas
       IO_printf ( "\n");

    // mostrar multiplos (alternativo I )
       multipleSeven ( x );

    // espacar as respostas
       IO_printf ( "\n");

    // mostrar multiplos (alternativo II)
       multiple_Seven ( x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 Method12 - mostrar multiplos pares positivos de sete (crescente)
 OBS.: as funcoes se encontram a partir da linha 255 na biblioteca "gabrielvargas.h"
 */

void method12 ( )
{  
    // definir dados 
       int x = 0;

    // identificar
       IO_id ( "Exemplo05E2 - Method12 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantas vezes? ");
       IO_printf ( "\n" );

    // mostrar multiplos
       multipleEven ( 7, x );

    // espacar as respostas
       IO_printf ( "\n");

    // mostrar multiplos (alternativo I )
       multipleEvenSeven ( x );

    // espacar as respostas
       IO_printf ( "\n");

    // mostrar multiplos (alternativo II)
       multiple_EvenSeven ( x );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
 Method13 - mostrar multiplos impares positivos de sete (decrescente)
 OBS.: as funcoes se encontram a partir da linha 413 na biblioteca "gabrielvargas.h" 
 */

void method13 ( )
{  
    // definir dados 
       int x = 0;

    // identificar
       IO_id ( "Exemplo05E2 - Method13 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantas vezes? ");
       IO_printf ( "\n" );

    // mostrar multiplos
       _multipleOdd ( 7, x );

    // espacar as respostas
       IO_printf ( "\n");

    // mostrar multiplos (alternativo)
       _multipleOddSeven ( x );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 Method14 - mostrar multiplos fracionais positivos de sete
 OBS.: as funcoes se encontram a partir da linha 501 na biblioteca "gabrielvargas.h" 
 */

void method14 ( )
{  
    // definir dados 
       int x = 0;

    // identificar
       IO_id ( "Exemplo05E2 - Method14 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantas vezes? ");
       IO_printf ( "\n" );
    
    // mostrar multiplos
       fractionalMultiple ( 7, x );

    // espacar as respostas
       IO_printf ( "\n");

    // mostrar multiplos (alternativo)
       fractional_MultipleSeven ( x );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 Method15 - mostrar fracoes ( 1 / x^y ) certa quantidade de vezes
 OBS.: as funcoes se encontram a partir da linha 584 na biblioteca "gabrielvargas.h"
 */

void method15 ( )
{  
    // definir dados
       double x = 0.0;
       int    y =  0 ;

    // identificar
       IO_id ( "Exemplo05E2 - Method15 - v0.0" );

    // ler do teclado
       x = IO_readdouble ( "Entre com a base para o denominador: ");
       IO_printf ( "\n" );
       y = IO_readint    ( "Entre com a quantidade de termos: ");
       IO_printf ( "\n" );

    // mostrar fracoes
       fractionalPow  ( x, y );

    // espacar as respostas
       IO_printf ( "\n");

    // mostrar fracoes
       fractional_Pow ( x, y );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 Method16 - somar os primeiros valores ímpares positivos a partir do 7 e não múltiplos de 3
 OBS.: as funcoes se encontram a partir da linha 680 na biblioteca "gabrielvargas.h"
 */

void method16 ( )
{  
    // definir dados
       int x    = 0;
       int soma1 = 0;
       int soma2 = 0;
       

    // identificar
       IO_id ( "Exemplo05E2 - Method16 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com a quantidade de termos: ");

    // contar numeros
       soma1 = countOddNotMultiple3  ( x ); // funcao considera, se x = 0, como soma = 0
       soma2 = count_OddNotMultiple3 ( x ); // funcao considera, se x = 0, como valor invalido --> funcionando a partir do 1
                                            // propositalmente
    // mostrar soma
       if ( notNegative ( x ) )
       {
           IO_printf ( "\nA soma e': %d\n", soma1 );
       } // end if

    // mostrar soma (alternativo)
       if ( positive ( x ) )
       {
           IO_printf ( "\nA soma e': %d\n", soma2 );
       } // end if
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 Method17 - somar (1/x) dos primeiros valores ímpares positivos a partir do 7 e não múltiplos de 3
 OBS.: as funcoes se encontram a partir da linha 828 na biblioteca "gabrielvargas.h"
 */

void method17 ( )
{  
    // definir dados
       int x        = 0;
       double soma1 = 0.0;
       double soma2 = 0.0;
       
    // identificar
       IO_id ( "Exemplo05E2 - Method17 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com a quantidade de termos: ");

    // contar numeros
       soma1 = countFractionOddNotMultiple3  ( x ); // funcao considera, se x = 0, como soma = 0
       soma2 = count_FractionOddNotMultiple3 ( x ); // funcao considera, se x = 0, como valor invalido --> funcionando a partir do 1
                                                    // propositalmente
    // mostrar soma
       if ( notNegative ( x ) )
       {
           IO_printf ( "\nA soma e': %lf\n", soma1 );
       } // end if

    // mostrar soma (alternativo)
       if ( positive ( x ) )
       {
           IO_printf ( "\nA soma e': %lf\n", soma2 );
       } // end if
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
 Method18 - somar os primeiros números naturais começando no valor 7
 OBS.: as funcoes se encontram a partir da linha 933 na biblioteca "gabrielvargas.h"
 */

void method18 ( )
{  
    // definir dados
       int x     = 0;
       int soma1 = 0;
       int soma2 = 0;
       int soma3 = 0;
       
    // identificar
       IO_id ( "Exemplo05E2 - Method18 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com a quantidade de termos: ");

    // contar numeros
       soma1 = addUp       ( x, 7 );
       soma2 = addUpSeven  ( x );
       soma3 = addUp_Seven ( x );

    // mostrar
       if ( notNegative ( x ) )
        {
            // mostrar soma
               IO_printf ( "\nA soma e': %d\n", soma1 );

            // mostrar soma (alternativo I )
               IO_printf ( "\nA soma e': %d\n", soma2 );
       } // end if

       if ( positive ( x ) )
       {
           // mostrar soma (alternativo II)
              IO_printf ( "\nA soma e': %d\n", soma3 );
       } // end if

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

/**
 Method19 - somar os quadrados dos primeiros números naturais começando em 7
 OBS.: as funcoes se encontram a partir da linha 1027 na biblioteca "gabrielvargas.h"
 */

void method19 ( )
{  
    // definir dados
       int x     = 0;
       int soma1 = 0;
       int soma2 = 0;
       
    // identificar
       IO_id ( "Exemplo05E2 - Method19 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com a quantidade de termos: ");

    // contar numeros
       soma1 = addUpSquareNumber       ( x, 7 );
       soma2 = addUpSquareNumber_Seven ( x );

    // mostrar
       if ( notNegative ( x ) )
        {
            // mostrar soma
               IO_printf ( "\nA soma e': %d\n", soma1 );

            // mostrar soma (alternativo I )
               IO_printf ( "\nA soma e': %d\n", soma2 );
       } // end if

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method19 ( )

/**
 Method20 - somar (1/x) para os primeiros números naturais, começando no valor 7
 OBS.: as funcoes se encontram a partir da linha 1104 na biblioteca "gabrielvargas.h"
 */

void method20 ( )
{  
    // definir dados
       int    x    = 0;
       double soma = 0.0;
       
    // identificar
       IO_id ( "Exemplo05E2 - Method20 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com a quantidade de termos: ");

    // contar numeros
       soma = addUpFractional_Seven ( x );
    // mostrar
       if ( positive ( x ) )
        {
            // mostrar soma
               IO_printf ( "\nA soma e': %lf\n", soma );
       } // end if

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method20 ( )

/**
 MethodE1 - mostrar fatorial de um numero inteiro nao nulo  (fatorial de zero = 1)
 OBS.: as funcoes se encontram a partir da linha 1143 na biblioteca "gabrielvargas.h"
 */

void methodE1 ( )
{  
    // definir dados
       int x        = 0;
       int fatorial = 0;
       
    // identificar
       IO_id ( "Exemplo05E2 - MethodE1 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com a quantidade de termos: ");

    // contar numeros
       fatorial = factorial ( x );

    // mostrar
       if ( notNegative ( x ) )
        {
            // mostrar soma
               IO_printf ( "\nO fatorial de %d e': %d\n", x, fatorial );
       } // end if

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE1 ( )

/**
 MethodE2 - calcular o resultado da funcao: f ( n ) = (1+2/3!) * (1+3/4!) * (1+4/5!) * ... * ( 1 + (n+1) / (n+2)! )
 OBS.: as funcoes se encontram a partir da linha 1181 na biblioteca "gabrielvargas.h"
 */

void methodE2 ( )
{  
    // definir dados
       int    n      = 0;
       double funcao = 0.0;
       
    // identificar
       IO_id ( "Exemplo05E2 - MethodE2 - v0.0" );

    // ler do teclado
       n = IO_readint ( "Entre com a quantidade de termos: ");

    // contar numeros
       funcao = function_E2 ( n );

    // mostrar
       if ( positive ( n ) )
        {
            // mostrar soma
               IO_printf ( "\nO resultado da funcao para n = %d e': %lf\n", n, funcao );
       } // end if

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
               IO_id ( "Exemplo05E2 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0  - parar" );
               IO_println ( "1  - mostrar certa quantidade de valores                                  " );
               IO_println ( "2  - mostrar certa quantidade de valores pares                            " );
               IO_println ( "3  - mostrar certa quantidade de valores pares (alternativo)              " );
               IO_println ( "4  - mostrar certa quantidade de valores pares (decrescente)              " );
               IO_println ( "5  - mostrar certa quantidade de valores pares (decrescente - alternativo)" );
               IO_println ( "6  - mostrar e somar certa quantidade de pares                            " );
               IO_println ( "7  - mostrar e somar certa quantidade de fracoes                          " );
               IO_println ( "8  - mostrar e somar certa quantidade de fracoes I                        " );
               IO_println ( "9  - mostrar e somar certa quantidade de fracoes II                       " );
               IO_println ( "10 - mostrar e multiplicar certa quantidade de valores impares            " );
               IO_println ( "11 - mostrar multiplos positivos de sete (crescente)                      " );
               IO_println ( "12 - mostrar multiplos pares positivos de sete (crescente)                " );
               IO_println ( "13 - mostrar multiplos impares positivos de sete (decrescente)            " );
               IO_println ( "14 - mostrar multiplos fracionais positivos de sete                       " );
               IO_println ( "15 - mostrar fracoes ( 1 / x^y ) certa quantidade de vezes                " );
               IO_println ( "16 - somar os primeiros valores impares positivos a partir do 7 e nao multiplos de 3             " );
               IO_println ( "17 - somar (1/x) dos primeiros valores impares positivos a partir do 7 e nao multiplos de 3" );
               IO_println ( "18 - somar os primeiros numeros naturais, comecando no valor 7            " );
               IO_println ( "19 - somar os quadrados dos primeiros numeros naturais, comecando em 7    " );
               IO_println ( "20 - somar (1/x) para os primeiros numeros naturais, comecando no valor 7 " );
               IO_println ( "21 - mostrar fatorial de um numero inteiro nao nulo                       " );
               IO_println ( "22 - calcular o resultado da funcao: f (n) = (1+2/3!) * (1+3/4!) * (1+4/5!) * ..." );
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

a.) 1 -->  (1+2/3!)

O resultado da funcao para n = 1 e': 1.333333


b.) 2 -->  (1+2/3!) * (1+3/4!)

O resultado da funcao para n = 2 e': 1.500000


c.) 3 -->  (1+2/3!) * (1+3/4!) * (1+4/5!)

O resultado da funcao para n = 3 e': 1.550000


d.) 0

ERRO: valor invalido!


e.) -9

ERRO: valor invalido!

*/
  
