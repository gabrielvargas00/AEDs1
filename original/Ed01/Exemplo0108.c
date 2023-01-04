/*
  Exemplo0108 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0108   exemplo0108.c
  No Windows:  g++ -o exemplo0108   exemplo0108.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0108
  No windows:    exemplo0108
 */

// dependencias
#include <stdio.h>          // para entradas e saidas
#include <stdbool.h>        // para valores logicos
#include <string.h>         // para cadeia de caracteres
#include <math.h>           // para funcoes matematicas

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( int argc, char* argv [ ] )
{
    // definir dado
       char x [ 80 ] = "abc";    // definir variavel com tamanho e valor inicial
       char y [ 80 ] = "def";    // definir variavel com tamanho e valor inicial
       char z [ 80 ];            // definir variavel com tamanho
       strcpy  ( z, " " );        // e copiar, para (z), a representacao de vazio               

    // identificar
       printf ( "%s\n", "Exemplo0108 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valores iniciais e comprimentos das cadeias
       printf ( "%s%s(%d)\n", "x = ", x, strlen ( x ) );
       printf ( "%s%s(%d)\n", "y = ", y, strlen ( y ) );
    
    // ler do teclado
       printf  ( " Entrar com caracteres: " );
       scanf   ( "%s", x );
       getchar ( );         // OBS.: limpar a entrada de dados

       printf  ( " Entrar com outros caracteres: " );
       scanf   ( "%s", y );
       getchar ( );         // OBS.: limpar a entrada de dados

    // operar valores (forma mais eficiente)
       strcpy ( z, x );     // copiar (x) para (z)
       strcat ( z, y );     // concatenar/juntar (y) a (z)

    // mostrar valor resultante
       printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );

    // operar valores (forma alternativa)
       strcpy ( z, strcat ( strdup(x), y ) );

                            // copiar para (z)
                            // o resultado de concatenar
                            // a copia de (x) com (y)
                            // OBS.: se nao duplicar, o valor de (x) sera' alterado

    // mostrar valor resultante
       printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // aguardar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passo a passo para compilar e executar
* Defini as variaveis iniciais (x, y, z), com tamanho e com valor inicial
* Copiar, para (z), a representacao de vazio
* Para exibir os valores inicais de x e y, colocar %s
* Para exibir os comprimentos de x e y, colocar %d ou %i
* Pedir ao usuario que entre com caracteres
* E a leitura desse valor deve ser %s para x e para y
* Adicionar a operacao entre os caracteres de duas formas e a saida dos caracteres resultantes %s

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 12 e 24
b.) ab e cd
c.) a e bc
d.) ab e c

Mostrar valores iniciais seguidos do tamanho da cadeia de caracteres
x = abc(3)
y = def(3)

E, depois, espera-se:
a.) 1224
b.) abcd
c.) abc
d.) abc

Resultados mostrados duas vezes

------------------------------ historico


Versao         Data        Modificacao
0.8            28/03       esboco

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

*/