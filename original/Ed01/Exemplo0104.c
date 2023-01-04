/*
  Exemplo0104 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0104   exemplo0104.c
  No Windows:  g++ -o exemplo0104   exemplo0104.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0104
  No windows:    exemplo0104
 */

// dependencias
#include <stdio.h>          // para entradas e saidas
#include <stdbool.h>        // para valores logicos
                            // NOTA: em alguns compiladores, pode haver problemas
                            //       com relacao a essa biblioteca. Caso acontecer,
                            //       considerar o uso de definicoes alternativas.

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( int argc, char* argv [ ] )
{
    // definir dado
       bool x = false;          // definir variavel com valor inicial
                                // OBS.: INDISPENSAVEL usar minusculas
       int y  = 0;              // definir variavel auxiliar                    

    // identificar
       printf ( "%s\n", "Exemplo0104 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valor inicial
       printf ( "%s%d\n", "x = ", x );
                            // OBS.: o formato para equivalente inteiro -> %d

    
    // ler do teclado
       printf  ( " Entrar com um valor logico: " );
       scanf   ( "%d", &y );
                            // OBS.: usar equivalente inteiro -> 0 = false
       getchar ( );         // OBS.: limpar a entrada de dados

    // garantir valor logico no intervalo [0:1]
       x = (y != 0);

    // mostrar valor lido
       printf ( "%s%d", "x = ", x );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // aguardar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passo a passo para compilar e executar
* Inclui a biblioteca "stdbool.h"
* Ao definir os dados, substitui double por bool, pois o valor, desta vez, seria um valor logico
* Defini x como falso, usando minusculas; e y como uma variavel auxiliar
* Para exibir o valor inical de x, colocar %d pois valor logico equivale a um inteiro ( 0 ou 1 )
* Pedir ao usuario que entre com um valor logico
* E a leitura desse valor deve, agora, ser de um valor logico %d
* Deve armazenar na variavel y -> &y
* Garantir valor logico no intervalo [0:1]
* No printf, colocar, tambem, %d

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 1
b.) 0
c.) true

A e C deve apresentar 1
B deve apresentar 0

CORRECAO DA PREVISAO:

Errei ao esquecer de que a minha entrada é um valor inteiro, logo, digitando "true",
não vai considerar nada, por ser uma cadeira de caracteres, e o resultado de x nao se 
alterara'

------------------------------ historico


Versao         Data        Modificacao
0.4            28/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro
0.2           01.(OK)          identificacao de programa, leitura e exibicao de real
0.3           01.(OK)          identificacao de programa, leitura e exibicao de caractere
0.4           01.(OK)          identificacao de programa, leitura e exibicao de valor logico

*/
