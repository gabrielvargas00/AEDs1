/*
  Exemplo0213 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

void method06 ( int x )
{
    x = IO_readint ( "Entre com um numero inteiro: " );

    if ( x > 25 && x < 40)
    {
        IO_println ( IO_concat ( "O numero (",
                                  IO_concat ( IO_toString_d ( x ), ") pertence ao intervalo aberto (25:40)" ) ) );
        
    } // end if
           
    else
    {
        IO_println ( IO_concat ( "O numero (",
                                  IO_concat ( IO_toString_d ( x ), ") nao pertence ao intervalo aberto (25:40)" ) ) );

    } // end else 

} // end method06( )

int main ( )
{
    // definir dado
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0213 - Programa - v0.0" );   

    // testar valor
       method06 ( x );

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


a.) O numero (5) nao pertence ao intervalo aberto (25:40)

b.) O numero (15) nao pertence ao intervalo aberto (25:40)

c.) O numero (30) pertence ao intervalo aberto (25:40)

d.) O numero (45) nao pertence ao intervalo aberto (25:40)

e.) O numero (60) nao pertence ao intervalo aberto (25:40)


------------------------------ historico


Versao         Data        Modificacao
1.3            31/03       esboco

------------------------------ testes

*/
