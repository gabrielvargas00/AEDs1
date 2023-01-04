/*
Exemplo0319 - v0.0. - 10 / 04 / 2022
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
       IO_id ( "Exemplo0319 - Method01 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method02 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method03 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method04 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method05 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method06 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method07 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method08 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method09 - v0.0" );
    
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
       IO_id ( "Exemplo0319 - Method10 - v0.0" );
    
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

/**
 Method11 - Mostrar letras minusculas
 */

void method11 ( )
{
    // definir dado
       int x = 0;
       int tamanho = 0;

       chars palavra = IO_new_chars ( STR_SIZE );
  
    // identificar
       IO_id ( "Exemplo0319 - Method11 - v0.0" );
    
    // ler do teclado o valor inicial
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // repetir para cada letra
       tamanho = strlen ( palavra );
 
    //       inicio     teste    variacao
       for ( x = 0; x < tamanho; x = x + 1 )
       {
            // testar se caractere e' minusculo
               if ( ( 'a' <= palavra [x] ) && ( 'z' >= palavra [x] ) )
                {
                    // mostrar caractere atual
                    IO_printf ( "%d: [%c]\n", x, palavra [x] );
                } // end if
        } // end for

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 Method12 - Mostrar e contar letras minusculas
 */

void method12 ( )
{
    // definir dado
       int x          = 0;
       int tamanho    = 0;
       int quantidade = 0;

       chars palavra = IO_new_chars ( STR_SIZE );
  
    // identificar
       IO_id ( "Exemplo0319 - Method12 - v0.0" );
    
    // ler do teclado o valor inicial
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // repetir para cada letra
       tamanho = strlen ( palavra );
 
    //       inicio     teste    variacao
       for ( x = 0; x < tamanho; x = x + 1 )
       {
            // testar se caractere e' minusculo
               if ( ( 'a' <= palavra [x] ) && ( 'z' >= palavra [x] ) )
                {
                    // mostrar caractere atual e quantidade
                       quantidade = quantidade + 1;
                       IO_printf ( "%d: [%c]\n", x, palavra [x] );
                       
                } // end if
        } // end for

    // contar quantidade de caracteres minusculos

       IO_printf ("%s%d", "\nTotal de minusculas: ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
 Method13 - Mostrar e contar letras minusculas (decrescente)
 */

void method13 ( )
{
    // definir dado
       int x          = 0;
       int tamanho    = 0;
       int quantidade = 0;

       chars palavra = IO_new_chars ( STR_SIZE );
  
    // identificar
       IO_id ( "Exemplo0319 - Method13 - v0.0" );
    
    // ler do teclado o valor inicial
       palavra = IO_readstring ( "Entrar com uma palavra: " );

    // repetir para cada letra
       tamanho = strlen ( palavra );
 
    //       inicio       teste   variacao
       for ( x = tamanho; x >= 0; x = x - 1 )
       {
            // testar se caractere e' minusculo
               if ( ( 'a' <= palavra [x] ) && ( 'z' >= palavra [x] ) )
                {
                    // mostrar caractere atual e quantidade
                       quantidade = quantidade + 1;
                       IO_printf ( "%d: [%c]\n", x, palavra [x] );
                       
                } // end if
        } // end for

    // contar quantidade de caracteres minusculos

       IO_printf ("%s%d", "\nTotal de minusculas: ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 Method14 - Mostrar e contar, dentre os caracteres, os que sao letras
 */

void method14 ( )
{
    // definir dado
       int x          = 0;
       int tamanho    = 0;
       int quantidade = 0;

       chars caracteres = IO_new_chars ( STR_SIZE );
  
    // identificar
       IO_id ( "Exemplo0319 - Method14 - v0.0" );
    
    // ler do teclado o valor inicial
       caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );

    // repetir para cada caractere
       tamanho = strlen ( caracteres );
 
    //       inicio     teste    variacao
       for ( x = 0; x < tamanho; x = x + 1 )
       {
            // testar se caractere e' letra
               if ( ( 'a' <= caracteres [x] ) && ( 'z' >= caracteres [x] ) ||
                    ( 'A' <= caracteres [x] ) && ( 'Z' >= caracteres [x] ) )
                {
                    // mostrar caractere atual e quantidade
                       quantidade = quantidade + 1;
                       IO_printf ( "%d: [%c]\n", x, caracteres [x] );
                       
                } // end if
        } // end for

    // contar quantidade de letras

       IO_printf ("%s%d", "\nTotal de letras: ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 Method15 - Mostrar e contar, dentre os caracteres, os digitos
 */

void method15 ( )
{
    // definir dado
       int x          = 0;
       int tamanho    = 0;
       int quantidade = 0;

       chars caracteres = IO_new_chars ( STR_SIZE );
  
    // identificar
       IO_id ( "Exemplo0319 - Method15 - v0.0" );
    
    // ler do teclado o valor inicial
       caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );

    // repetir para cada caractere
       tamanho = strlen ( caracteres );
 
    //       inicio       teste   variacao
       for ( x = tamanho; x >= 0; x = x - 1 )
       {
            // testar se caractere e' digito
               if ( ( '0' <= caracteres [x] ) && ( '9' >= caracteres [x] ) )
                {
                    // mostrar caractere atual e quantidade
                       quantidade = quantidade + 1;
                       IO_printf ( "%d: [%c]\n", x, caracteres [x] );
                       
                } // end if
        } // end for

    // contar quantidade de letras

       IO_printf ("%s%d", "\nTotal de digitos: ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 Method16 - Mostrar e contar caracteres especiais (nao letras e nao numeros)
 */

void method16 ( )
{
    // definir dado
       int x          = 0;
       int tamanho    = 0;
       int quantidade = 0;

       chars caracteres = IO_new_chars ( STR_SIZE );
  
    // identificar
       IO_id ( "Exemplo0319 - Method16 - v0.0" );
    
    // ler do teclado o valor inicial
       caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );

    // repetir para cada caractere
       tamanho = strlen ( caracteres );
 
    //       inicio     teste    variacao
       for ( x = 0; x < tamanho; x = x + 1 )
       {
            // testar se e' caractere especial
               if ( ! ( ( 'a' <= caracteres [x] ) && ( 'z' >= caracteres [x] ) ||
                    ( 'A' <= caracteres [x] ) && ( 'Z' >= caracteres [x] ) ||
                    ( '0' <= caracteres [x] ) && ( '9' >= caracteres [x]) ) )
                {
                    // mostrar caractere atual e quantidade
                       quantidade = quantidade + 1;
                       IO_printf ( "%d: [%c]\n", x, caracteres [x] );
                       
                } // end if
        } // end for

    // contar quantidade de caracteres especiais

       IO_printf ("%s%d", "\nTotal de caracteres especiais: ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 Method17 - Mostrar e contar numeros pertencentes ao intervalo [a:b]
            e multiplos de 5
 */

void method17 ( )
{
    // definir dados
       int a          = 0;      // entrada: limite inferior do intervalo
       int b          = 0;      // entrada: limite superior do intervalo
       int i          = 0;      // contador da posicao dos numeros no vetor
       int n          = 0;      // entrada: numero de repeticoes
       int x          = 0;      // variavel nula
       int quantidade = 0;      // contador da quantidade de numeros a serem exibidos
       int numeros [ 80 ];      // vetor de numeros inteiros
  
    // identificar
       IO_id ( "Exemplo0319 - Method17 - v0.0" );
    
    // ler do teclado valores do intervalo
       a = IO_readint ( "Limite inferior do intervalo: " );
       b = IO_readint ( "Limite superior do intervalo: " );  

    // testar se intervalo valido
       while ( a >= b )
       {
          if (! ( a < b ) )
          {
               IO_printf ( "\nIntervalo inexistente!\n\n" );
               a = IO_readint ( "Limite inferior do intervalo: " );
               b = IO_readint ( "Limite superior do intervalo: " );
          } // end if
       } // end while    

    // ler do teclado quantidade de repeticoes
       n = IO_readint ( "Quantidade de valores para teste: " );
    
    // testar se quantidade e' valida
       while ( n <= 0 )
          {
             if (! ( n > 0 ) )
             {
                  IO_printf ( "\nValor invalido!\n\n" );
                  n = IO_readint ( "Quantidade de valores para teste: " );
                  IO_printf ( "\n" );
             } // end if
          } // end while 

    // repetir n vezes
       do
       {        
         // ler valor para teste
            IO_printf ( "\nDigite o valor para a posicao %d: ", i );
            IO_scanf ("%d", &numeros [ i ] );
            getchar   ( );

         // controle da quantidade
            i = i + 1;

        } while ( n > i );      

    // mostrar numeros armazenados 
    
       for ( i = 0; x < n; i = i + 1, x = x + 1)
       {
           // verificar intervalo
              if ( ( a <= numeros [ i ] ) && ( numeros [ i ] <= b ) )
               {
                   // verificar se multiplo de 5
                      if ( numeros [ i ] % 5 == 0 )
                       {
                           IO_printf ( "\n" );
                           IO_printf ( "%s%d%s%d", "[", i, "] ", numeros [ i ] );
                           IO_printf ("\n");
                           quantidade = quantidade + 1;

                        } // end if

                } // end if
        } // end for

    // mostrar quantidade de numeros

       IO_printf ("%s%d", "\nTotal de multiplos de 5 no intervalo estabelecido: ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
 Method18 - Mostrar e contar numeros pertencentes ao intervalo [a:b],
            multiplos de 5 e não multiplo de 3
 */

void method18 ( )
{
    // definir dados
       int a          = 0;      // entrada: limite inferior do intervalo
       int b          = 0;      // entrada: limite superior do intervalo
       int i          = 0;      // contador da posicao dos numeros no vetor
       int n          = 0;      // entrada: numero de repeticoes
       int x          = 0;      // variavel nula
       int quantidade = 0;      // contador da quantidade de numeros a serem exibidos
       int numeros [ 80 ];      // vetor de numeros inteiros
  
    // identificar
       IO_id ( "Exemplo0319 - Method18 - v0.0" );
    
    // ler do teclado valores do intervalo
       a = IO_readint ( "Limite real inferior do intervalo: " );
       b = IO_readint ( "Limite real superior do intervalo: " );  

    // testar se intervalo valido
       while ( a >= b )
       {
          if (! ( a < b ) )
          {
               IO_printf ( "\nIntervalo inexistente!\n\n" );
               a = IO_readint ( "Limite real inferior do intervalo: " );
               b = IO_readint ( "Limite real superior do intervalo: " );
          } // end if
       } // end while    

    // ler do teclado quantidade de repeticoes
       n = IO_readint ( "Quantidade de valores para teste: " );
    
    // testar se quantidade e' valida
       while ( n <= 0 )
          {
             if (! ( n > 0 ) )
             {
                  IO_printf ( "\nValor invalido!\n\n" );
                  n = IO_readint ( "Quantidade de valores para teste: " );
                  IO_printf ( "\n" );
             } // end if
          } // end while 

    // repetir n vezes
       do
       {        
         // ler valor para teste
            IO_printf ( "\nDigite o valor para a posicao %d: ", i );
            IO_scanf ("%d", &numeros [ i ] );
            getchar   ( );

         // controle da quantidade
            i = i + 1;

        } while ( n > i );      

    // mostrar numeros armazenados 
    
       for ( i = 0; x < n; i = i + 1, x = x + 1)
       {
           // verificar intervalo
              if ( ( a <= numeros [ i ] ) && ( numeros [ i ] <= b ) )
               {
                   // verificar se multiplo de 5
                      if ( ( numeros [ i ] % 5 == 0 ) && 
                           ( ! ( numeros [ i ] % 3 == 0 ) ) )
                       {
                           IO_printf ( "\n" );
                           IO_printf ( "%s%d%s%d", "[", i, "] ", numeros [ i ] );
                           IO_printf ("\n");
                           quantidade = quantidade + 1;

                        } // end if

                } // end if
        } // end for

    // mostrar quantidade de numeros

       IO_printf ("%s%d", "\nTotal de multiplos de 5 e nao multiplos de 3 no intervalo estabelecido: ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

/**
 Method19 - Mostrar e contar numeros pertencentes ao intervalo real (a:b),
            cujas partes inteiras forem impares
 */

void method19 ( )
{
    // definir dados
       double a          = 0;      // entrada: limite inferior do intervalo
       double b          = 0;      // entrada: limite superior do intervalo
       int i             = 0;      // contador da posicao dos numeros no vetor real
       double n          = 0;      // entrada: numero de repeticoes
       int x             = 0;      // variavel nula
       int    quantidade = 0;      // contador da quantidade de numeros a serem exibidos
       double numeros [ 80 ];      // vetor de numeros reais
  
    // identificar
       IO_id ( "Exemplo0319 - Method19 - v0.0" );
    
    // ler do teclado valores do intervalo
       a = IO_readdouble ( "Limite inferior do intervalo: " );
       b = IO_readdouble ( "Limite superior do intervalo: " );  

    // testar se intervalo valido
       while ( a >= b )
       {
          if (! ( a < b ) )
          {
               IO_printf ( "\nIntervalo inexistente!\n\n" );
               a = IO_readdouble ( "Limite inferior do intervalo: " );
               b = IO_readdouble ( "Limite superior do intervalo: " );
          } // end if
       } // end while    

    // ler do teclado quantidade de repeticoes
       n = IO_readdouble ( "Quantidade de valores para teste: " );
    
    // testar se quantidade e' valida
       while ( n <= 0 )
          {
             if (! ( n > 0 ) )
             {
                  IO_printf ( "\nValor invalido!\n\n" );
                  n = IO_readdouble ( "Quantidade de valores para teste: " );
                  IO_printf ( "\n" );
             } // end if
          } // end while 

    // repetir n vezes
       do
       {        
         // ler valor para teste
            IO_printf ( "\nDigite o valor para a posicao %d: ", i );
            IO_scanf  ("%lf", &numeros [ i ] );
            getchar   ( );

         // controle da quantidade
            i = i + 1;

        } while ( n > i );      

    // mostrar numeros armazenados    
       for ( i = 0; x < n; i = i + 1, x = x + 1 )
       {
           // verificar intervalo
              if ( ( a < numeros [ i ] ) && ( numeros [ i ] < b ) )
               {                    
                   // verificar se parte inteira e' impar
                      if ( ! ( (int) numeros [ i ] % 2 == 0 ) )
                       {
                           IO_printf ( "\n" );
                           IO_printf ( "%s%d%s%lf", "[", i, "] ", numeros [ i ] );
                           IO_printf ("\n");
                           quantidade = quantidade + 1;

                        } // end if

                } // end if
        } // end for

    // mostrar quantidade de numeros

       IO_printf ("%s%lf%s%lf%s%d", "\nTotal de numeros com parte inteira impar no intervalo (", a," : ",b,"): ", quantidade );
       IO_printf ( "\n" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method19 ( )

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
               IO_id ( "Exemplo0319 - Programa - v0.0" );

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
               IO_println ( "11 - mostrar letras minusculas                            " );
               IO_println ( "12 - mostrar e contar letras minusculas      ( crescente )" );
               IO_println ( "13 - mostrar e contar letras minusculas      (decrescente)" );
               IO_println ( "14 - mostrar e contar apenas as letras       ( crescente )" );
               IO_println ( "15 - mostrar e contar apenas os digitos      (decrescente)" );
               IO_println ( "16 - mostrar e contar apenas os caracteres especiais      " );
               IO_println ( "17 - mostrar e contar numeros [a:b] e multiplos de 5      " );
               IO_println ( "18 - mostrar e contar numeros [a:b], multiplos de 5 e nao multiplos de 3" );
               IO_println ( "19 - mostrar e contar numeros (a:b), cuja parte inteira e' impar" );
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

a.) 
a < b:

a=5.7
b=-3.2
Intervalo inexistente!

a=4.1
b=4.1
Intervalo inexistente!

a=2.4
b=6.3

n > 0:

n= 0
Valor invalido!

n=-3
Valor invalido!

n = 7

[0]: 1.0

[1]: 2.4

[2]: 3.6

[3]: 4.1

[4]: 5.5

[5]: 6.3

[6]: 8.4


PRINTF:

[2]: 3.6

[4]: 5.5

Total de numeros com parte inteira impar no intervalo (a:b): 2




Testado, tambem, caso nao haja numeros: aparece quantidade = 0


 ----------------------------- historico

Versao         Data        Modificacao
1.9            10/04       esboco

*/

