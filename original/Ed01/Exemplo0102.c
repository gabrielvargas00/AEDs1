/*
  Exemplo0102 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0102   exemplo0102.c
  No Windows:  g++ -o exemplo0102   exemplo0102.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0102
  No windows:    exemplo0102
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
       double x = 0;        // definir variavel com valor inicial
                            // OBS.: Definir a parte fracionario e' util

    // identificar
       printf ( "%s\n", "Exemplo0102 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valor inicial
       printf ( "%s%lf\n", "x = ", x );
                            // OBS.: o formato para double -> %lf

    
    // ler do teclado
       printf  ( " Entrar com um valor real: " );
       scanf   ( "%lf", &x );
                            // OBS.: necesario indicar o endereco -> &
       getchar ( );         // OBS.: limpar a entrada de dados

    // mostrar valor lido
       printf ( "%s%lf", "x = ", x );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // aguardar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passoa a passo para compilar e executar
* Ao definir os dados, substitui int por double, pois o valor, desta vez, seria real, e nao inteiro
* Adicionei a parte fracionaria do valor de x
* Para exibir o valor inical de x, colocar %lf pois é um valor real do tipo double
* Pedir ao usuario que entre com um valor real
* E a leitura desse valor deve, agora, ser de um numero real %lf
* No printf, colocar, tambem, %lf

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 5
b.) -5
c.) 123456789

Deve mostrar todos os 3 valores corretamente, pois são números reais. Mas, devido 'a configuracao double, as casas decimais ficarao visiveis, mesmo se forem zeros. Logo, 5 = 5.000000, por exemplo

------------------------------ historico


Versao         Data        Modificacao
0.2            28/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro
0.2           02.(OK)          identificacao de programa, leitura e exibicao de real

*/
