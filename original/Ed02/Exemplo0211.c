/*
  Exemplo0211 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

void method04 ( int x )
{
    x = IO_readint ( "Entre com um valor inteiro: " );

    if ( x % 2 == 0)
    {
        IO_println ( IO_concat ( "O valor (",
                                  IO_concat ( IO_toString_d ( x ), ") e' par" ) ) );
    } // end if
           
    else
    {
        IO_println ( IO_concat ( "O valor (",
                                  IO_concat ( IO_toString_d ( x ), ") e' impar" ) ) );
    } // end else 

} // end method04( )

int main ( )
{
    // definir dado
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0211 - Programa - v0.0" );   

    // testar valor
       method04 ( x );

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) -6
b.) -3
c.) 0
d.) 3
e.) 6
f.) 9

-6, 0, 6 -> "O valor (x) e' par"
-3, 3, 9 -> "O valor (x) e' impar"


------------------------------ historico


Versao         Data        Modificacao
1.1            31/03       esboco

------------------------------ testes

*/
