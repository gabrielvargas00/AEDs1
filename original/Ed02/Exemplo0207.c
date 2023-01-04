/*
  Exemplo0207 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0207   exemplo0207.c
  No Windows:  g++ -o exemplo0207   exemplo0207.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0207
  No windows:    exemplo0207
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
       IO_id ( "\nExemplo0207 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readchar ( "Entrar com um caractere: ");

    // testar valor
       if ( ! ( ( 'a' <= x && x <= 'z' ) ||         // NAO (minuscula OU
                ( 'A' <= x && x <= 'Z' ) ) )        //      maiuscula)
       {
           IO_printf ( "%s (%c)\n", "Valor diferente de Letra", x );
       } // end if

       else
       {
           IO_printf ( "%s (%c)\n", "Letra", x );
       } // end else

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) a
b.) A
c.) 0
d.) #


a.) "Letra"

b.) "Letra"

c.) "Valor diferente de letra"

d.) "Valor diferente de letra"

------------------------------ historico


Versao         Data        Modificacao
0.7            31/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao de programa
0.2           01.(OK)          utilizando if and else
0.3           01.(OK)          utilizando if and else ( = , !=, <, >)
0.4           01.(OK)          utilizando if and else dentro intervalo [1:10]
0.5           01.(OK)          utilizando if and else para caractere
0.6           01.(OK)          utilizando operador logico OU
0.7           01.(OK)          utilizando operador logico OU e !

*/
