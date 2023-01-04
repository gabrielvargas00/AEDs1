/*
  Exemplo0106 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0106   exemplo0106.c
  No Windows:  g++ -o exemplo0106   exemplo0106.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0106
  No windows:    exemplo0106
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
       int x = 0;           // definir variavel com valor inicial
       int y = 0;           // definir variavel com valor inicial
       int z = 0;           // definir variavel com valor inicial                   

    // identificar
       printf ( "%s\n", "Exemplo0106 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valores iniciais
       printf ( "%s%d\n", "x = ", x );
       printf ( "%s%i\n", "y = ", y );
                            // OBS.: o formato para int -> %d ou %i

    
    // ler do teclado
       printf  ( " Entrar com um valor inteiro: " );
       scanf   ( "%i", &x );
                            // OBS.: necesario endereco -> &
       getchar ( );         // OBS.: limpar a entrada de dados

       printf  ( " Entrar com outro valor inteiro: " );
       scanf   ( "%i", &y );
                            // OBS.: necesario endereco -> &
       getchar ( );         // OBS.: limpar a entrada de dados

    // operar valores
       z = x * y;           // guardando, em z, o produto de x por y

    // mostrar valor resultante
       printf ( "%s(%i)*(%i) = (%d)\n", "z = ", x, y, z );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // aguardar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passo a passo para compilar e executar
* Defini as variaveis iniciais, x, y e z
* Para exibir os valores inicais de x e y, colocar %d ou %i
* Pedir ao usuario que entre com um valor inteiro
* E a leitura desse valor deve ser %d ou %i para x e para y
* Adicionar a operacao entre os valores e a saida do valor resultante

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 3 e 5
b.) -3 e 5
c.) -3 e -5


Espera-se que seja feito o produto entre os valores e que encontre valores pesitivos ou negativos

------------------------------ historico


Versao         Data        Modificacao
0.6            28/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro
0.2           01.(OK)          identificacao de programa, leitura e exibicao de real
0.3           01.(OK)          identificacao de programa, leitura e exibicao de caractere
0.4           01.(OK)          identificacao de programa, leitura e exibicao de valor logico
0.5           01.(OK)          identificacao de programa, leitura e exibicao de cadeia de caracteres
0.6           01.(OK)          identificacao de programa e operacoes aritmeticas

*/
