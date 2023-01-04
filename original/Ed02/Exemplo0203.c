/*
  Exemplo0203 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0203   exemplo0203.c
  No Windows:  g++ -o exemplo0203   exemplo0203.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0203
  No windows:    exemplo0203
 */

// dependencias
#include "io.h"          // para definicoes proprias

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( )
{
    // definir dado
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0203 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readint ( "Entrar com valor inteiro: ");

    // testar valor
       if ( x == 0 )
       {
           IO_printf ( "%s (%d)\n", "Valor e' igual a zero", x );
       } // end if

       else
       {
           IO_printf ( "%s (%d)\n", "Valor e' diferente de zero", x );
           if ( x > 0)
           {
               IO_printf ( "%s (%d)\n", "Valor maior que zero", x );
           } // end if
           else
           {
               IO_printf ( "%s (%d)\n", "Valor menor que zero", x );
           } // end else
       } // end else

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 0
b.) 5
c.) -5

a.) "Valor e' igual a zero"

b.) "Valor e' diferente de zero"
"Valor maior que zero"

c.) "Valor e' diferente de zero"
"Valor menor que zero"

------------------------------ historico


Versao         Data        Modificacao
0.3            31/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao de programa
0.2           01.(OK)          utilizando if and else
0.3           01.(OK)          utilizando if and else ( = , !=, <, >)

*/
