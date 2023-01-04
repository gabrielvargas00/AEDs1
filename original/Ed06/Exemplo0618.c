/*
Exemplo0618 - v0.0. - 01 / 05 / 2022
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
       IO_id ( "EXEMPLO0618 - Method01 - v0.0" );

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
       IO_id ( "Exemplo0618 - Method02 - v0.0" );

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
       IO_id ( "Exemplo0618 - Method03 - v0.0" );

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
       IO_id ( "Exemplo0618 - Method04 - v0.0" );

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
       IO_id ( "Exemplo0618 - Method05 - v0.0" );

    // executar o metodo auxiliar
       method05a ( 5 );                  // motor da recursividade
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 somarFracoes - Funcao para somar certa quantidade de fracoes recursivamente.
  @return    soma de valores
  @param x - quantidade de valores a serem mostrados
 */

double somarFracoes ( int x )
{
    // definir dado local
       double soma = 0.0;

    // repetir enquanto valor maior que zero
       if ( x > 1 )
       {
           // separar um valor e passar ao proximo ( motor da recursividade )
              soma = ( 2.0 * ( x-1 ) ) / (2.0 * ( x-1 ) + 1 ) + somarFracoes ( x - 1 );
           // mostrar valor
              IO_printf ( "%d: %lf / %lf\n", x, ( 2.0 * ( x-1 ) ), ( 2.0 * ( x-1 ) + 1 ) );
       } // end if

       else
       {   
           // base da recursividade
              soma = 1.0;
           // mostrar o ultimo
              IO_printf ( "%d: %lf\n", x, 1.0 );
       } // end else
    
    // retornar resultado
       return ( soma );

} // end somarFracoes ( )

/**
 Method06 - calcular o somatorio I : 1 + 2/3 + 4/5 + 6/7 + ...
 */

void method06 ( )
{ 
    // definir dado
       double soma = 0.0;

    // identificar
       IO_id ( "Exemplo0618 - Method06 - v0.0" );

    // chamar a funcao e receber resultado
       soma = somarFracoes ( 5 );
    
    // mostrar resultado
       IO_printf ( "\nSoma = %lf\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  somarFracoes2b - Funcao para somar certa quantidade de fracoes recursivamente.
  @return    soma de valores
  @param x           - quantidade de valores a serem mostrados (controle)
  @param soma        - valor atual da soma (historia = memoria)
  @param numerador   - numerador da parcela a ser somada
  @param denominador - denominador da parcela a ser somada
 */

double somarFracoes2b ( int x, double soma, double numerador, double denominador )
{
    // repetir enquanto valor maior que zero
       if ( x > 0 )
       {
           // mostrar valores atuais
              IO_printf ( "%d: %lf / %lf\n", x, numerador, denominador );

           // somar termo atual e passar ao proximo ( motor da recursividade )
              soma = somarFracoes2b ( x - 1,                                               // proximo
                                      soma        + ( ( 1.0 * numerador ) / denominador ), // atualizar
                                      numerador   +     2.0  ,                             // proximo
                                      denominador +     2.0 );                             // proximo
           
       } // end if

    // retornar resultado
       return ( soma );

} // end somarFracoes2b ( )

/**
  somarFracoes2a - Somar certa quantidade de fracoes.
                   Funcao de servico para preparar e disparar o mecanismo recursivo.
  @return soma de valores
  @param x - quantidade de valores a serem mostrados
*/

double somarFracoes2a ( int x )
{
    // definir dado local 
       double soma = 0.0;

    // repetir enquanto valor maior que zero
       if ( x > 0 )
       {
           // mostrar o ultimo
              IO_printf ( "%d: %lf\n", x, 1.0 );

           // preparar a soma do valor atual e o proximo
              soma = somarFracoes2b ( x-1, 1.0, 2.0, 3.0 );
       } // end if
    
    // retornar resultado
       return ( soma );

} // end somarFracoes2a ( )

/**
 Method07 - calcular o somatorio II : 1 + 2/3 + 4/5 + 6/7 + ...
 */

void method07 ( )
{  
    // definir dado
       double soma = 0.0;

    // identificar
       IO_id ( "Exemplo0618 - Method07 - v0.0" );

    // chamar a funcao e receber resultado
       soma = somarFracoes2a ( 5 );
    
    // mostrar resultado
       IO_printf ( "\nSoma = %lf\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  contarDigitos - Contar digitos recursivamente.
  @return    quantidade de digitos
  @param x - numero cuja quantidade de digitos sera' calculada
*/

int contarDigitos ( int x )
{
   // definir dado
      int resposta = 1;                               // base
   
   // testar se contador valido
      if ( x >= 10 )
      {
         // tentar fazer de novo com valor menor
            resposta = 1 + contarDigitos ( x / 10 );  // motor 1
      } // end if

      else
      {
         if ( x < 0 )
         {
            // fazer de novo com valor absoluto
               resposta = contarDigitos ( -x );       // motor 2
         } // end if
      } // end else

   // retornar resposta
      return ( resposta );

} // end contarDigitos ( )

/**
 Method08 - contar e mostrar quantidade de digitos de um numero
 */

void method08 ( )
{  
    // identificar
       IO_id ( "Exemplo0618 - Method08 - v0.0" );
    
    // mostrar resultado
       IO_printf ( "digitos (%3d) = %d\n", 123, contarDigitos ( 123 ) );
       IO_printf ( "digitos (%3d) = %d\n",  1 , contarDigitos (  1  ) );
       IO_printf ( "digitos (%3d) = %d\n", -10, contarDigitos ( -10 ) );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
  fibonacci - Gerador de numero de Fibonacci.
  @return   - numero de Fibonacci
  @param x  - numero de ordem cujo valor sera' calculado
*/

int fibonacci ( int x )
{
    // definir dado
       int resposta = 0;

    // testar se contador valido
       if ( x == 1 || x == 2 )
       {
           // primeiros dois valores iguais a 1
              resposta = 1;              // bases
       } // end if
       else
       {
           if ( x > 1 )
           {
               // fazer de novo com valor absoluto
                  resposta = fibonacci ( x-1 ) + fibonacci ( x-2 );
           } // end if
       } // end else

    // retornar resposta
        return ( resposta );

} // end fibonacci ( )

/**
 Method09 - mostrar numeros da sequencia de fibonacci
 */

void method09 ( )
{  
    // identificar
       IO_id ( "Exemplo0618 - Method09 - v0.0" );
    
    // calcular numero de Fibonacci
       IO_printf ( "fibonacci (%d) = %d\n", 1, fibonacci ( 1 ) );
       IO_printf ( "fibonacci (%d) = %d\n", 2, fibonacci ( 2 ) );
       IO_printf ( "fibonacci (%d) = %d\n", 3, fibonacci ( 3 ) );
       IO_printf ( "fibonacci (%d) = %d\n", 4, fibonacci ( 4 ) );
       IO_printf ( "fibonacci (%d) = %d\n", 5, fibonacci ( 5 ) );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
  contarMinusculas - Contador de letras minusculas.
  @return  -  quantidade de letras minusculas
  @param x - cadeia de caracteres a ser avaliada 
*/

int contarMinusculas ( chars cadeia, int x )
{
    // definir dado
       int resposta = 0;

    // testar se contador valido
       if ( 0 <= x && x < strlen ( cadeia ) )
       {
           // testar se letra minuscula
              if ( cadeia [x] >= 'a' &&
                   cadeia [x] <= 'z' )
               {
                  // fazer de novo com valor absoluto
                     resposta = 1;
               } // end if
        resposta = resposta + contarMinusculas ( cadeia, x+1 );
        } // end if

    // retornar resposta
       return ( resposta );

} // end contarMinusculas ( )

/**
 Method10 - contador letras minusculas
 */

void method10 ( )
{  
    // identificar
       IO_id ( "Exemplo0618 - Method10 - v0.0" );
    
    // contar minusculas em cadeias de caracteres
       IO_printf ( "Minusculas (\"abc\",0) = %d\n", contarMinusculas ( "abc", 0 ) );
       IO_printf ( "Minusculas (\"aBc\",0) = %d\n", contarMinusculas ( "aBc", 0 ) );
       IO_printf ( "Minusculas (\"AbC\",0) = %d\n", contarMinusculas ( "AbC", 0 ) );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
  Method11a - Mostrar certa quantidade valores 
              impares maiores que sete recursivamente.
  @param inicial - determinacao do primeiro valor: 1 = 7, 2 = 9, 3 = 11 ...
  @param final   - quantidade de impares esperados
 */

void method11a ( int inicial, int final )
{
   if ( inicial <= final )
   {
       IO_printf ( "\n%d", (2*inicial-1)+6 );
       method11a ( inicial+1, final );
   } // end if

} // end method11a ( )

/**
 Method11 - mostrar certa quantidade impares maiores que sete
 */

void method11 ( )
{
    // definir dado
       int x = 0;

    // identificar
       IO_id ( "Exemplo0618 - Method11 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantos numeros: " );
    
    // testar se valor valido
       while ( x <= 0 )
       {
           IO_printf ( "Valor invalido! Entre com um numero positivo!\n\n" );
           x = IO_readint ( "Quantos numeros: " );
       } // end while

    // executar o metodo auxiliar
       method11a ( 1, x );
       IO_printf ( "\n" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
  Method12a - Mostrar certa quantidade multiplos de sete, 
              em ordem decrescente, recursivamente.
  @param inicial - determinacao da ordem do primeiro multiplo
 */

void method12a ( int inicial )
{
   if ( inicial >= 1 )
   {
       IO_printf ( "\n%d", 7*inicial );
       method12a ( inicial-1 );
   } // end if

} // end method12a ( )

/**
 Method12 - mostrar certa quantidade de multiplos sete (decrescente)
 */

void method12 ( )
{
    // definir dado
       int x = 0;

    // identificar
       IO_id ( "Exemplo0618 - Method12 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantos numeros: " );
    
    // testar se valor valido
       while ( x <= 0 )
       {
           IO_printf ( "Valor invalido! Entre com um numero positivo!\n\n" );
           x = IO_readint ( "Quantos numeros: " );
       } // end while

    // executar o metodo auxiliar
       method12a ( x );
       IO_printf ( "\n" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
  Method13a - Mostrar certa quantidade multiplos de sete, 
              em ordem crescente, partindo do 1, recursivamente.
  @param inicial - determinacao da ordem do primeiro multiplo
 */

void method13a ( int inicial )
{
    if  ( 1 < inicial )
    {
       method13a ( inicial-1 );
       IO_printf ( "\n%d", 7*(inicial-1) );
    } // end if

    else
    {
        if ( inicial == 1 )
        {
            IO_printf ( "\n%d", 1 );
        } // end if
    } // end else

} // end method13a ( )

/**
 Method13 - mostrar certa quantidade desta sequencia: 1 7 14 21 28 35 ...
 */

void method13 ( )
{
    // definir dado
       int x = 0;

    // identificar
       IO_id ( "Exemplo0618 - Method13 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantos numeros: " );
    
    // testar se valor valido
       while ( x <= 0 )
       {
           IO_printf ( "Valor invalido! Entre com um numero positivo!\n\n" );
           x = IO_readint ( "Quantos numeros: " );
       } // end while

    // executar o metodo auxiliar
       method13a ( x );
       IO_printf ( "\n" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
  Method14a - Mostrar certa quantidade multiplos de sete, 
              em ordem decrescente, terminando no 1, recursivamente.
  @param inicial - determinacao da ordem do primeiro multiplo
 */

void method14a ( int inicial )
{
    if  ( 1 < inicial )
    {
        IO_printf ( "\n%d / %d = %.10lf", 1, (int) pow (7.0, 1.0 * inicial-1), 1.0 / pow (7.0, 1.0 * inicial-1) );
        method14a ( inicial-1 );
    } // end if

    else
    {
        if ( inicial == 1 )
        {
            IO_printf ( "\n%d / %d = %d", 1, 1, 1 );
        } // end if
    } // end else
    
} // end method14a ( )

/**
 Method14 - mostrar certa quantidade desta sequencia: ... 1/2401 1/343 1/49 1/7 1
 */

void method14 ( )
{
    // definir dado
       int x = 0;

    // identificar
       IO_id ( "Exemplo0618 - Method13 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantos numeros: " );
    
    // testar se valor valido
       while ( x <= 0 )
       {
           IO_printf ( "Valor invalido! Entre com um numero positivo!\n\n" );
           x = IO_readint ( "Quantos numeros: " );
       } // end while

    // executar o metodo auxiliar
       method14a ( x );
       IO_printf ( "\n" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
  Method15a - separar e mostrar simbolos de cadeia de caracteres recursivamente.
  @param text    - cadeia de caracteres a ser utilizada
  @param inicial - posicao inicial
 */

void method15a ( chars text, int inicial )
{
    // repetir enquanto valor menor que tamanho da palavra
       if ( ( strlen (text) > inicial ) &&
             ( inicial >= 0 ) )
       {
           // mostrar valor
              IO_printf ( "\n[%d]: %c", inicial, text [inicial] );

           // passar ao proximo
              method15a ( text, inicial + 1 );
       } // end if
} // end method15a ( )

/**
 Method15 - separar e mostrar simbolos de cadeia de caracteres
 */

void method15 ( )
{
    // definir dado
       chars text = IO_new_chars (STR_SIZE);
       strcpy ( text, STR_EMPTY );

    // identificar
       IO_id ( "Exemplo0618 - Method15 - v0.0" );

    // ler cadeia
       text = IO_readstring ( "Digite uma cadeia de caracteres: " );

    // executar o metodo auxiliar
       method15a ( text, 0 );
       IO_printf ( "\n" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
  function_16a - Funcao para somar os primeiros numeros impares, 
                 a partir de 7, recursivamente.
  @param  quantidade - quantidade de impares
  @param  inicial    - valor inicial
  @return - soma dos termos
 */

int function_16a ( int quantidade )
{
    // definir dado
       int soma = 0;

    // repetir enquanto valor maior que zero
       if ( quantidade > 0 )
       {
           // somar numero impar e passar ao proximo
              soma = ( 2* (quantidade+3) - 1 ) + function_16a ( quantidade-1 );
       } // end if
    
    // retornar
       return ( soma );

} // end function_16a ( )

/**
 Method16 - somar os primeiros numeros impares, comecando de 7
 */

void method16 ( )
{
    // definir dado
       int x    = 0;
       int soma = 0;

    // identificar
       IO_id ( "Exemplo0618 - Method16 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantos numeros: " );
    
    // testar se valor valido
       while ( x <= 0 )
       {
           IO_printf ( "Valor invalido! Entre com um numero positivo!\n\n" );
           x = IO_readint ( "Quantos numeros: " );
       } // end while

    // executar o metodo auxiliar
       soma = function_16a ( x );
    
    // mostrar resultado
       IO_printf ( "\nA soma e': %d\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
  function_17a - Funcao para somar o inverso dos primeiros numeros impares, 
                 a partir de 7, recursivamente.
  @param  quantidade - quantidade de impares
  @param  inicial    - valor inicial
  @return - soma dos termos
 */

double function_17a ( int quantidade )
{
    // definir dado
       double soma = 0.0;

    // repetir enquanto valor maior que zero
       if ( quantidade > 0 )
       {
           // somar numero impar e passar ao proximo
              soma = 1.0 / ( 2.0 * (quantidade+3) - 1.0 ) + function_17a ( quantidade-1 );
       } // end if
    
    // retornar
       return ( soma );

} // end function_17a ( )

/**
 Method17 - somar o inverso dos primeiros numeros impares, comecando de 1/7
 */

void method17 ( )
{
    // definir dado
       int    x    = 0;
       double soma = 0.0;

    // identificar
       IO_id ( "Exemplo0618 - Method17 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantos numeros: " );
    
    // testar se valor valido
       while ( x <= 0 )
       {
           IO_printf ( "Valor invalido! Entre com um numero positivo!\n\n" );
           x = IO_readint ( "Quantos numeros: " );
       } // end while

    // executar o metodo auxiliar
       soma = function_17a ( x );
    
    // mostrar resultado
       IO_printf ( "\nA soma e': %lf\n", soma );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
  function_18a - Funcao para somar certos termos pares
                 da serie de Fibonacci, recursivamente.
  @param y - posicao do ultimo termo par
  @return  - soma dos termos pedidos
 */

int function_18a ( int y )
{
    // definir dado
       int contador = 0;
       int x        = 1; 
       int termo    = 0;
       int soma     = 0;
    
    while ( contador < y )
    {
        // gerar sequencia
           termo = fibonacci ( x );

        // testar termo
            if ( termo % 2 == 0)
            {
                // mostrar termo
                    IO_printf ( "\n[%d]: %d", contador+1, termo );
                // contar
                    contador = contador+1;
                // somar
                    soma = soma + termo;
            } // end if

        // passar ao proximo valor
           x = x+1;

    } // end while

    // retornar
       return ( soma );

} // end function_18a ( )

/**
  function_18b - Funcao para somar certos termos pares
                 da serie de Fibonacci, recursivamente.
  @param y - posicao do ultimo termo par
  @return  - soma dos termos pedidos
 */

int function_18b ( int y )
{
    // definir dado
       int x     = 1; 
       int termo = 0;
       int soma  = 0;
    
    while ( x <= y )
    {
        // gerar termo par da sequencia
           termo = fibonacci ( 3 * x );

        // mostrar termo
           IO_printf ( "\n[%d]: %d", x, termo );
        
        // somar
           soma = soma + termo;

        // passar ao proximo valor
           x = x+1;

    } // end while

    // retornar
       return ( soma );

} // end function_18b ( )

/**
 Method18 - mostrar e calcular a soma de certos termos 
            pares da serie de Fibonacci, comecando em 1.
 */

void method18 ( )
{
    // definir dado
       int x     = 0;
       int termo1 = 0;
       int termo2 = 0;

    // identificar
       IO_id ( "Exemplo0618 - Method18 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Quantos numeros: " );
    
    // testar se valor valido
       while ( x <= 0 )
       {
           IO_printf ( "Valor invalido! Entre com um numero positivo!\n\n" );
           x = IO_readint ( "Quantos numeros: " );
       } // end while

    // executar o metodo auxiliar
       IO_println ( "\nManeira I :");
       termo1 = function_18a  ( x );
       IO_printf ( "\nA soma e': %d\n", termo1 );

    // executar o metodo auxiliar (alternativo)
       IO_println ( "\n\nManeira II :");
       termo2 = function_18b  ( x );
       IO_printf ( "\nA soma e': %d\n", termo2 );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

/**
 Method19 -
 */

void method19 ( )
{
    // identificar
       IO_id ( "Exemplo0618 - Method19 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method19 ( )

/**
 Method20 -
 */

void method20 ( )
{
    // identificar
       IO_id ( "Exemplo0618 - Method20 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method20 ( )

/**
 MethodE1 -
 */

void methodE1 ( )
{
    // identificar
       IO_id ( "Exemplo0618 - MethodE1 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE1 ( )

/**
 MethodE2 -
 */

void methodE2 ( )
{
    // identificar
       IO_id ( "Exemplo0618 - MethodE2 - v0.0" );

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
               IO_id ( "Exemplo0618 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0  - parar" );
               IO_println ( "1  - mostrar certa quantidade de valores I                                 " );
               IO_println ( "2  - mostrar certa quantidade de valores II                                " );
               IO_println ( "3  - mostrar certa quantidade de valores positivos                         " );
               IO_println ( "4  - mostrar certa quantidade de multiplos de dois                         " );
               IO_println ( "5  - mostrar valores de parcelas do somatorio: 1 + 2/3 + 4/5 + 6/7 + ...   " );
               IO_println ( "6  - calcular o somatorio I  : 1 + 2/3 + 4/5 + 6/7 + ...                   " );
               IO_println ( "7  - calcular o somatorio II : 1 + 2/3 + 4/5 + 6/7 + ...                   " );
               IO_println ( "8  - contar e mostrar quantidade de digitos de um numero                   " );
               IO_println ( "9  - mostrar numeros da sequencia de fibonacci                             " );
               IO_println ( "10 - contador letras minusculas                                            " );
               IO_println ( "11 - mostrar certa quantidade impares maiores que sete                     " );
               IO_println ( "12 - mostrar certa quantidade de multiplos sete (decrescente)              " );
               IO_println ( "13 - mostrar certa quantidade desta sequencia: 1 7 14 21 28 35 ...         " );
               IO_println ( "14 - mostrar certa quantidade desta sequencia: ... 1/2401 1/343 1/49 1/7 1  ");
               IO_println ( "15 - separar e mostrar simbolos de cadeia de caracteres                    " );
               IO_println ( "16 - somar os primeiros numeros impares, comecando de 7                    " );
               IO_println ( "17 - somar o inverso dos primeiros numeros impares, comecando de 1/7       " );
               IO_println ( "18 - mostrar e calcular a soma de certos termos pares da serie de Fibonacci" );
               // IO_println ( "19 - " ); 
               // IO_println ( "20 - " );
               // IO_println ( "21 - " );
               // IO_println ( "22 - " );
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

a.) 3
Maneira I :

[1]: 2
[2]: 8
[3]: 34
A soma e': 44


Maneira II :

[1]: 2
[2]: 8
[3]: 34
A soma e': 44

b.) 5
Maneira I :

[1]: 2
[2]: 8
[3]: 34
[4]: 144
[5]: 610
A soma e': 798


Maneira II :

[1]: 2
[2]: 8
[3]: 34
[4]: 144
[5]: 610
A soma e': 798

c.) 1
Maneira I :

[1]: 2
A soma e': 2


Maneira II :

[1]: 2
A soma e': 2

d.) 0
Valor invalido! Entre com um numero positivo!*

e.) -2 
Valor invalido! Entre com um numero positivo!*

*vai solicitar um outro valor

*/
  
