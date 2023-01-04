/*
  Exemplo0214 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

void method07 ( int x )
{
    x = IO_readint ( "Entre com um numero inteiro: " );

    if ( x >= 15 && x <= 45 )
    {
        IO_println ( IO_concat ( "O numero (",
                                  IO_concat ( IO_toString_d ( x ), ") pertence ao intervalo fechado [15:45]" ) ) );
        
    } // end if
           
    else
    {
        IO_println ( IO_concat ( "O numero (",
                                  IO_concat ( IO_toString_d ( x ), ") nao pertence ao intervalo fechado [15:45]" ) ) );

    } // end else 

} // end method07( )

int main ( )
{
    // definir dado
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0214 - Programa - v0.0" );   

    // testar valor
       method07 ( x );

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 5
b.) 15
c.) 30
d.) 45
e.) 60


a.) O numero (5) nao pertence ao intervalo fechado [15:45]

b.) O numero (15) pertence ao intervalo fechado [15:45]

c.) O numero (30) pertence ao intervalo fechado [15:45]

d.) O numero (45) pertence ao intervalo fechado [15:45]

e.) O numero (60) nao pertence ao intervalo fechado [15:45]


------------------------------ historico


Versao         Data        Modificacao
1.4            31/03       esboco

------------------------------ testes

*/
