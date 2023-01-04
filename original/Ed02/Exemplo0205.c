/*
  Exemplo0205 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0205   exemplo0205.c
  No Windows:  g++ -o exemplo0205   exemplo0205.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0205
  No windows:    exemplo0205
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
       IO_id ( "\nExemplo0205 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readchar ( "Entrar com um caractere: ");

    // testar valor
       if ( 'a' <= x && x <= 'z' )
       {
           IO_printf ( "%s (%c)\n", "Letra minuscula", x );
       } // end if

       else
       {
           IO_printf ( "%s (%c)\n", "Valor diferente de minuscula", x );
           if ( 'A' <= x && x <= 'Z'  )
           {
               IO_printf ( "%s (%c)\n", "Letra maiuscula", x );
           } // end if
           else
           {
               if ('0' <= x && x <= '9')
               {
                   IO_printf ( "%s (%c)\n", "Algarismo", x );
               } // end if
               else
               {
                   IO_printf ( "%s (%c)\n", "Valor diferente de algarismo", x );
               } // end else
           } // end else
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

a.) "Letra minuscula"

b.) "Valor diferente de minuscula"
    "Letra maiuscula"

c.) "Valor diferente de minuscula"
    "Algarismo"

d.) "Valor diferente de minuscula"
    "Valor diferente de algarismo"


------------------------------ historico


Versao         Data        Modificacao
0.5            31/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao de programa
0.2           01.(OK)          utilizando if and else
0.3           01.(OK)          utilizando if and else ( = , !=, <, >)
0.4           01.(OK)          utilizando if and else dentro intervalo [1:10]
0.5           01.(OK)          utilizando if and else para caractere

*/
