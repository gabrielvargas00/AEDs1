/*
  Exemplo0218 - v0.0. - 01 / 04 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

// definir dado
    double x = 0;           // definir variavel com valor inicial
    double y = 0;           // definir variavel com valor inicial

void method11 ( int y )
{
    x = IO_readdouble ( "Entre com um numero real para x: " );
    y = IO_readdouble ( "Entre com um numero real para y: " ); 

    if ( y == x )
    {
        IO_println ( IO_concat ( "O numero y (",
                                       IO_concat ( IO_toString_f ( y ), ") e' igual ao x " ) ) );     
    } // end if

    else
    {
        if ( y > x)
        {
            IO_println ( IO_concat ( "O numero y (",
                                       IO_concat ( IO_toString_f ( y ), ") e' maior que o x " ) ) );
        } // end if 

        else
        {
            IO_println ( IO_concat ( "O numero y (",
                                  IO_concat ( IO_toString_f ( y ), ") e' menor que o x" ) ) );      
        } // end else

    } // end else

} // end method11( )

int main ( )
{

    // identificar
       IO_id ( "\nExemplo0218 - Programa - v0.0" );   

    // testar valor
       method11 ( y );

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) (5, 15)
b.) (30, 30)
d.) (98, 89)


a.) O numero y e' maior que o x

b.) O numero y e' igual ao x

c.) O numero y e' menor ao x

------------------------------ historico


Versao         Data        Modificacao
1.8            01/04       esboco

------------------------------ testes

*/
