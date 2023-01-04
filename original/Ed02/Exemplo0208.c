/*
  Exemplo0208 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0208   exemplo0208.c
  No Windows:  g++ -o exemplo0208   exemplo0208.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0208
  No windows:    exemplo0208
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
       char x = '_';           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0208 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readchar ( "Entrar com um caractere ['0', 'A', 'a']: ");

    // testar valor
       switch (x)
       {
       case '0':
           IO_printf ( "%s (%c=%d)\n", "Valor igual do simbolo zero", x, x );
           break;
        
       case 'A':
           IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra A", x, x );
           break;
        
       case 'a':
           IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra a", x, x );
           break;
       
       default:    // se nao alguma das opcoes anteriores
           IO_printf ( "%s (%c=%d)\n", "Valor diferente das opcoes ['0', 'A', 'a']", x, x );
           break;
       } // end switch

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 0
b.) A
c.) a
d.) 1


a.) "Valor igual do simbolo zero"

b.) "Valor igual 'a letra A"

c.) "Valor igual 'a letra a"

d.) "Valor diferente das opcoes ['0', 'A', 'a']"

------------------------------ historico


Versao         Data        Modificacao
0.8            31/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao de programa
0.2           01.(OK)          utilizando if and else
0.3           01.(OK)          utilizando if and else ( = , !=, <, >)
0.4           01.(OK)          utilizando if and else dentro intervalo [1:10]
0.5           01.(OK)          utilizando if and else para caractere
0.6           01.(OK)          utilizando operador logico OU
0.7           01.(OK)          utilizando operador logico OU e !
0.8           01.(OK)          utilizando switch

*/
