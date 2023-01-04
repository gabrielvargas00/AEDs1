/*
  Exemplo0204 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0204   exemplo0204.c
  No Windows:  g++ -o exemplo0204   exemplo0204.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0204
  No windows:    exemplo0204
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
       double x = 0.0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0204 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readdouble ( "Entrar com valor real: ");

    // testar valor
       if ( 1.0 <= x && x <= 10.0 )
       {
           IO_printf ( "%s (%d)\n", "Valor dentro do intervalo [1:10]", x );
       } // end if

       else
       {
           IO_printf ( "%s (%d)\n", "Valor fora do intervalo [1:10]", x );
           if ( x < 1.0 )
           {
               IO_printf ( "%s (%d)\n", "Valor abaixo do intervalo [1:10]", x );
           } // end if
           else
           {
               IO_printf ( "%s (%d)\n", "Valor acima do intervalo [1:10]", x );
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
b.) 1
c.) 10
d.) -1
e.) 100

a.) "Valor fora do intervalo [1:10]"
    "Valor abaixo do intervalo [1:10]"

b.) "Valor dentro do intervalo [1:10]"

c.) "Valor dentro do intervalo [1:10]"

d.) "Valor fora do intervalo [1:10]"
    "Valor abaixo do intervalo [1:10]"

e.) "Valor fora do intervalo [1:10]"
    "Valor acima do intervalo [1:10]"

------------------------------ historico


Versao         Data        Modificacao
0.4            31/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao de programa
0.2           01.(OK)          utilizando if and else
0.3           01.(OK)          utilizando if and else ( = , !=, <, >)
0.4           01.(OK)          utilizando if and else dentro intervalo [1:10]

*/
