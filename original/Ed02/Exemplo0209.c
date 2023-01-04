/*
  Exemplo0209 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0209   exemplo0209.c
  No Windows:  g++ -o exemplo0209   exemplo0209.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0209
  No windows:    exemplo0209
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
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0209 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readint ( "Entrar com um inteiro [0,1,2,3]: " );

    // testar valor
       switch (x)
       {
       case 0:
           IO_printf ( "%s (%d)\n", "Valor igual a zero", x );
           break;
        
       case 1:
           IO_printf ( "%s (%d)\n", "Valor igual a um", x );
           break;
        
       case 2:
           IO_printf ( "%s (%d)\n", "Valor igual a dois", x );
           break;

       case 3:
           IO_printf ( "%s (%d)\n", "Valor igual a tres", x );
           break;
       
       default:    // se nao alguma das opcoes anteriores
           IO_printf ( "%s (%d)\n", "Valor diferente das opcoes [0, 1, 2, 3]", x );
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
b.) 1
c.) 2
d.) 3
e.) 4
f.) -1


a.) "Valor igual a zero"

b.) "Valor igual a um"

c.) "Valor igual a dois"

d.) "Valor igual a tres"

e.) "Valor diferente das opcoes [0, 1, 2, 3]"

f.) "Valor diferente das opcoes [0, 1, 2, 3]"

------------------------------ historico


Versao         Data        Modificacao
0.9            31/03       esboco

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
0.9           01.(OK)          utilizando switch II

*/
