/*
  Exemplo0107 - v0.0. - 28 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0107   exemplo0107.c
  No Windows:  g++ -o exemplo0107   exemplo0107.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0107
  No windows:    exemplo0107
 */

// dependencias
#include <stdio.h>          // para entradas e saidas
#include <stdbool.h>        // para valores logicos
#include <string.h>         // para cadeia de caracteres
#include <math.h>           // para funcoes matematicas: pow( ), sqrt( ), sin( ), cos( )...

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( int argc, char* argv [ ] )
{
    // definir dado
       double x = 0.0;      // definir variavel com valor inicial
       double y = 0.0;      // definir variavel com valor inicial
       double z = 0.0;      // definir variavel com valor inicial                   

    // identificar
       printf ( "%s\n", "Exemplo0107 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );     // mudar de linha

    // mostrar valores iniciais
       printf ( "%s%lf\n", "x = ", x );
       printf ( "%s%lf\n", "y = ", y );
                            // OBS.: o formato para double -> %lf

    
    // ler do teclado
       printf  ( " Entrar com um valor real: " );
       scanf   ( "%lf", &x );
                            // OBS.: necesario endereco -> &
       getchar ( );         // OBS.: limpar a entrada de dados

       printf  ( " Entrar com outro valor real: " );
       scanf   ( "%lf", &y );
                            // OBS.: necesario endereco -> &
       getchar ( );         // OBS.: limpar a entrada de dados

    // operar valores
       z = pow ( x, y );    // elevar a base (x) 'a potencia (y)

    // mostrar valor resultante
       printf ( "%s(%lf)^(%lf) = (%lf)\n", "z = ", x, y, z );

    // encerrar
       printf  ( "\n\nApertar ENTER para terminar." );
       getchar ( );         // aguardar por ENTER 
       return  ( 0 );       // voltar ao SO (sem erros)

} // end main ()

/*
------------------------------ documentacao complementar

* Alterei os comentarios iniciais, com titulo e com passo a passo para compilar e executar
* Inclui a bibblioteca "math.h"
* Defini as variaveis iniciais, x, y e z, como reais, usando o double e as casas decimais
* Para exibir os valores inicais de x e y, colocar %lf
* Pedir ao usuario que entre com um valor real
* E a leitura desse valor deve ser %lf para x e para y
* Adicionar a operacao entre os valores para potencia e a saida do valor resultante %lf

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 2.0 e 3.0
b.) 3.0 e 2.0
c.) -3.0 e 2.0
d.) -2.0 e -3.0


Espera-se que seja feito o produto entre os valores e que encontre valores:
a.) 8.000000
b.) 9.000000
c.) 9.000000
d.) -0.125000

------------------------------ historico


Versao         Data        Modificacao
0.7            28/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa, leitura e exibicao de inteiro
0.2           01.(OK)          identificacao de programa, leitura e exibicao de real
0.3           01.(OK)          identificacao de programa, leitura e exibicao de caractere
0.4           01.(OK)          identificacao de programa, leitura e exibicao de valor logico
0.5           01.(OK)          identificacao de programa, leitura e exibicao de cadeia de caracteres
0.6           01.(OK)          identificacao de programa e operacoes aritmeticas
0.7           01.(OK)          identificacao de programa e operacoes aritmeticas II

*/
