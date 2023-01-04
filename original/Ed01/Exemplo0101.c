/*
  Exemplo0101 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0101   exemplo0101.c
  No Windows:  g++ -o exemplo0101   exemplo0101.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0101
  No windows:    exemplo0101
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
       int x = 0;           // definir variavel com valor inicial

    // identificar
       printf ( "%s\n", "Exemplo0101 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valor inicial
       printf ( "%s%d\n", "x = ", x );
                            // OBS.: o formato para int -> %d ou %i

    
    // ler do teclado
       printf  ( " Entrar com um valor inteiro: " );
       scanf   ( "%d", &x );
                            // OBS.: necesario indicar o endereco -> &
       getchar ( );         // OBS.: limpar a entrada de dados

    // mostrar valor lido
       printf ( "%s%i", "x = ", x );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // agaurdar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 5
b.) -5
c.) 123456789

Deve mostrar todos os 3 valores corretamente, pois são números inteiros

------------------------------ historico


Versao         Data        Modificacao
0.1            28/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro

*/
