/*
  Exemplo0201 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0201   exemplo0201.c
  No Windows:  g++ -o exemplo0201   exemplo0201.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0201
  No windows:    exemplo0201
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
       IO_id ( "\nExemplo0201 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readint ( "Entrar com valor inteiro: ");

    // testar valor
       if ( x == 0 )
       {
           IO_printf ( "%s (%d)\n", "Valor e' igual a zero", x );
       } // end if

       if ( x != 0)
       {
           IO_printf ( "%s (%d)\n", "Valor e' diferente de zero", x );
       } // end if

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 0
b.) 5
c.) -5

a.) "Valor e' igual a zero"
b. e c.) "Valor e' diferente de zero"

------------------------------ historico


Versao         Data        Modificacao
0.1            31/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao de programa
*/
