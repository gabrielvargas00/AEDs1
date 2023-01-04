/*
  Exemplo0220 - v0.0. - 01 / 04 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

// definir dado
    double x = 0;           // definir variavel com valor inicial
    double y = 0;           // definir variavel com valor inicial
    double z = 0;           // definir variavel com valor inicial

void method13 ( double x, double y, double z )
{
    x = IO_readdouble ( "Entre com um numero real para x: " );
    y = IO_readdouble ( "Entre com um numero real para y: " );
    z = IO_readdouble ( "Entre com um numero real para z: " ); 

    

    if ( ( x != y ) && ( x != z ) && ( y != z ))
    {
        if ( ( y < x && z > x) || ( z < x && y > x ) )
        {
            IO_printf ( "\nO x esta' entre os outros dois valores" );
        } // end if

        else
        {
            IO_printf ( "\nO x nao esta' entre os outros dois valores" );
        } // end else

    } // end if

    else
    {
        if ( ( x == y ) && ( x == z ) && ( y == z ))
        {
            IO_printf ( "\nOs tres valores sao iguais" );
            
        } // end if

        else
        {
            IO_printf ( "\nDois desses valores sao iguais" );
        } // end else 

    } // end else

} // end method13( )

int main ( )
{

    // identificar
       IO_id ( "\nExemplo0220 - Programa - v0.0" );   

    // testar valor
       method13 ( x, y, z );

    // encerrar
       IO_pause ( "\nApertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) (17, 15, -7)
b.) (30, 45, 21)
c.) (60, 72, 60)
d.) (10, 10, 10)
e.) (98, 89, 89)
f.) (5, 15, 28)


a.) O x nao esta' entre os outros dois valores

b.) O x esta' entre os outros dois valores

c.) Dois desses valores sao iguais

d.) Os tres valores sao iguais

e.) Dois desses valores sao iguais

f.) O x nao esta' entre os outros dois valores


------------------------------ historico


Versao         Data        Modificacao
2.0            01/04       esboco

------------------------------ testes

*/
