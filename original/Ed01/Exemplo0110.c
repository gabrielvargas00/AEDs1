/*
  Exemplo0110 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0110   exemplo0110.c
  No Windows:  g++ -o exemplo0110   exemplo0110.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0110
  No windows:    exemplo0110
 */

// dependencias
#include <stdio.h>          // para entradas e saidas
#include <stdbool.h>        // para valores logicos
#include <string.h>         // para cadeia de caracteres
#include <math.h>           // para funcoes matematicas
#include "io.h"             // para definicoes proprias

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( int argc, char* argv [ ] )
{
    // definir dados
       int    x = 5;                         // definir variavel com valor inicial 
       double y = 3.5;                       // definir variavel com valor inicial
       char   z = 'A';                       // definir variavel com valor inicial
       bool   w = true;                      // definir variavel com valor inicial
       chars a = IO_new_chars(STR_SIZE);     // definir variavel com tamanho inicial
       chars b = IO_new_chars(STR_SIZE);     // definir variavel com tamanho inicial
       chars c = IO_new_chars(STR_SIZE);     // definir variavel com tamanho inicia

    // identificar
       IO_id ( "Exemplo0110 - Programa = v0.0" );

    // concatenar cadeias de caracteres
       strcpy ( a, "abc" );                  // atribuir 'a variavel (a) o valor constante ("abc")    
       strcpy ( b, "def" );                  // OBS.: a atribuicao de cadeia de caracteres NAO usa (=)

       IO_printf ( "\na = %s b = %s\n", a, b );

       c = IO_concat ( a, b );               // melhor alternativa para a funcao nativa (a,b)

       IO_printf ( "\nc = [%s] + [%s]\n", a, b, c);

       strcpy ( c, STR_EMPTY);               // limpar cadeia de caracteres

       IO_printf ( "%s\n", IO_concat ( a, IO_toString_c ( z ) ) );

       IO_println ( IO_concat ( "x = ", IO_toString_d ( x ) ) );
       
       IO_println ( IO_concat ( "w = ", IO_toString_b ( w ) ) );
       
       strcpy ( b, STR_EMPTY );
       
       IO_print ( "y = " );
       
       IO_print ( IO_concat ( b, IO_toString_f ( y ) ) );
       
       IO_print ( "\n" );

       z = IO_readchar ( "char = " );
       IO_println ( IO_concat ( a, IO_toString_c ( z ) ) );

       y = IO_readdouble ( "double = " );
       IO_println ( IO_concat ( a, IO_toString_f ( y ) ) );

       x = IO_readint ( "int = " );
       IO_println ( IO_concat ( a, IO_toString_d ( x ) ) );

       w = IO_readbool ( "bool = " );
       IO_println ( IO_concat ( a, IO_toString_b ( w ) ) );
       
       b = IO_readstring ( "chars = " );
       IO_println ( IO_concat ( a, b ) );

       b = IO_readln ( "line = " );
       IO_println ( IO_concat ( a, b ) );

    // encerrar
       IO_pause ( "Apertar ENTER para terminar");     // metodo para pausar
       return  ( 0 );                                 // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passo a passo para compilar e executar
* Inclui a biblioteca "io.h"
* Defini os novos dados
* Alterei forma de identificacao do programa
* Formas de concatenar (juntar) cadeias

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

Mostrar os seguintes valores:

a = abc b = def
c = abcdef
abcA
x = 5
w = 1
y = 3.500000



a.) a 
abca

b.) 4.2
abc4.200000

c.) 10
abc10

d.) 1
abc1

e.) abc def
abcabc

f .) abcdef
abcabc

CORRECAO previsao

f .)
abcabc def 
logo, "line" permite ler a linha todo, incluindo o espaco em branco

------------------------------ historico


Versao         Data        Modificacao
1.0            29/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro
0.2           01.(OK)          identificacao de programa, leitura e exibicao de real
0.3           01.(OK)          identificacao de programa, leitura e exibicao de caractere
0.4           01.(OK)          identificacao de programa, leitura e exibicao de valor logico
0.5           01.(OK)          identificacao de programa, leitura e exibicao de cadeia de caracteres
0.6           01.(OK)          identificacao de programa e operacoes aritmeticas
0.7           01.(OK)          identificacao de programa e operacoes aritmeticas II
0.8           01.(OK)          identificacao de programa e operacoes com cadeia de caracteres
0.9           01.(OK)          conversao de dados
1.0           01.(OK)          testando biblioteca "io.h"

*/