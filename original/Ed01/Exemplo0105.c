/*
  Exemplo0105 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0105   exemplo0105.c
  No Windows:  g++ -o exemplo0105   exemplo0105.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0105
  No windows:    exemplo0105
 */

// dependencias
#include <stdio.h>          // para entradas e saidas
#include <stdbool.h>        // para valores logicos
#include <string.h>         // para cadeia de caracteres

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( int argc, char* argv [ ] )
{
    // definir dado
       char x [ 80 ]= "abc";          // definir variavel com tamanho e com valor inicial                   

    // identificar
       printf ( "%s\n", "Exemplo0105 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valor inicial
       printf ( "%s%s\n", "x = ", x );
                            // OBS.: o formato para caracteres -> %s

    
    // ler do teclado
       printf  ( " Entrar com uma cadeia de caracteres: " );
       scanf   ( "%s", x );
                            // OBS.: nao utilizar o endereco dessa vez
                            //       o tamanho nao devera' ultrapassar 80 simbolos
       getchar ( );         // OBS.: limpar a entrada de dados

    // mostrar valor lido
       printf ( "%s%s", "x = ", x );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // aguardar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passo a passo para compilar e executar
* Inclui a biblioteca "string.h"
* Ao definir os dados, adicionei uma cadeia de caracteres e o seu valor inicial
* Para exibir o valor inical de x, colocar %s
* Pedir ao usuario que entre com uma cadeia de caracteres
* E a leitura desse valor deve, agora, ser de um valor logico %s
* Retirar o endereco (&)
* RETIREI: Garantir valor logico no intervalo [0:1]
* No printf, colocar, tambem, %s

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) def
b.) d e f
c.) d_e_f
d.) GabrielVargasBentodeSouzaGabrielVargasBentodeSouzaGabrielVargasBentodeSouza01234
e.) GabrielVargasBentodeSouzaGabrielVargasBentodeSouzaGabrielVargasBentodeSouza0123456789

A e C) mostrara' corretamente
B) mostrara' apenas "d"
D) mostrara' todos os 80 digitos
E) mostrara' apenas os 80 primeiros

CORRECAO DA PREVISAO:

E) mostrou todos os valores. Por que?

------------------------------ historico


Versao         Data        Modificacao
0.5            28/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro
0.2           01.(OK)          identificacao de programa, leitura e exibicao de real
0.3           01.(OK)          identificacao de programa, leitura e exibicao de caractere
0.4           01.(OK)          identificacao de programa, leitura e exibicao de valor logico
0.5           01.(OK)          identificacao de programa, leitura e exibicao de cadeia de caracteres

*/
