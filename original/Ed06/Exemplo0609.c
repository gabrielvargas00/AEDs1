/*
Exemplo0609 - v0.0. - 30 / 04 / 2022
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
       IO_id ( "EXEMPLO0609 - Method01 - v0.0" );

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
       IO_id ( "Exemplo0609 - Method02 - v0.0" );

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
       IO_id ( "Exemplo0609 - Method03 - v0.0" );

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
       IO_id ( "Exemplo0609 - Method04 - v0.0" );

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
       IO_id ( "Exemplo0609 - Method05 - v0.0" );

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
       IO_id ( "Exemplo0609 - Method06 - v0.0" );

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
       IO_id ( "Exemplo0609 - Method07 - v0.0" );

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
       IO_id ( "Exemplo0609 - Method08 - v0.0" );
    
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
       IO_id ( "Exemplo0609 - Method09 - v0.0" );
    
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
 Method10 - 
 */

void method10 ( )
{  
    // identificar
       IO_id ( "Exemplo0609 - Method10 - v0.0" );
       
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
               IO_id ( "Exemplo0609 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar certa quantidade de valores I                               " );
               IO_println ( "2 - mostrar certa quantidade de valores II                              " );
               IO_println ( "3 - mostrar certa quantidade de valores positivos                       " );
               IO_println ( "4 - mostrar certa quantidade de multiplos de dois                       " );
               IO_println ( "5 - mostrar valores de parcelas do somatorio: 1 + 2/3 + 4/5 + 6/7 + ... " );
               IO_println ( "6 - calcular o somatorio I  : 1 + 2/3 + 4/5 + 6/7 + ...                 " );
               IO_println ( "7 - calcular o somatorio II : 1 + 2/3 + 4/5 + 6/7 + ...                 " );
               IO_println ( "8 - contar e mostrar quantidade de digitos de um numero                 " );
               IO_println ( "9 - mostrar numeros da sequencia de fibonacci                           " );
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

fibonacci (1) = 1
fibonacci (2) = 1
fibonacci (3) = 2
fibonacci (4) = 3
fibonacci (5) = 5

 ----------------------------- historico

Versao         Data        Modificacao
0.9            30/04       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       mostrar certa quantidade de valores I
0.2            01.(OK)       mostrar certa quantidade de valores II
0.3            01.(OK)       mostrar certa quantidade de valores positivos
0.4            01.(OK)       mostrar certa quantidade de multiplos de dois
0.5            01.(OK)       mostrar valores de parcelas do somatorio: 1 + 2/3 + 4/5 + 6/7 + ...
0.6            01.(OK)       calcular o somatorio I : 1 + 2/3 + 4/5 + 6/7 + ...
0.7            01.(OK)       calcular o somatorio II: 1 + 2/3 + 4/5 + 6/7 + ...
0.8            01.(OK)       contar e mostrar quantidade de digitos de um numero
0.9            01.(OK)       mostrar numeros da sequencia de fibonacci

*/
  
