/*
  Exemplo0103 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0103   exemplo0103.c
  No Windows:  g++ -o exemplo0103   exemplo0103.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0103
  No windows:    exemplo0103
 */

// dependencias
#include <stdio.h>          // para entradas e saidas

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( int argc, char* argv [ ] )
{
    // definir dado
       char x = 'A';          // definir variavel com valor inicial
                            // OBS.: INDISPENSAVEL usar apostrofos

    // identificar
       printf ( "%s\n", "Exemplo0103 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valor inicial
       printf ( "%s%c\n", "x = ", x );
                            // OBS.: o formato para caractere -> %c

    
    // ler do teclado
       printf  ( " Entrar com um caractere: " );
       scanf   ( "%c", &x );
                            // OBS.: necesario indicar o endereco -> &
       getchar ( );         // OBS.: limpar a entrada de dados

    // mostrar valor lido
       printf ( "%s%c", "x = ", x );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // aguardar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passo a passo para compilar e executar
* Ao definir os dados, substitui double por char, pois o valor, desta vez, seria caractere, e nao real
* Defini x como A, usando apostrofos
* Para exibir o valor inical de x, colocar %c pois é um caractere
* Pedir ao usuario que entre com um caractere
* E a leitura desse valor deve, agora, ser de um caractere %c
* No printf, colocar, tambem, %c

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) B
b.) g
c.) 8
d.) Gabriel

Deve mostrar todos os 3 primeiros caracteres corretamente.
Mas "Gabriel" deve mostrar apenas o G, pois "char" é para um unico caractere.

------------------------------ historico


Versao         Data        Modificacao
0.3            28/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro
0.2           01.(OK)          identificacao de programa, leitura e exibicao de real
0.3           01.(OK)          identificacao de programa, leitura e exibicao de caractere

*/
