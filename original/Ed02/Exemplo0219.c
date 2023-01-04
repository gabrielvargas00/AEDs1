/*
  Exemplo0219 - v0.0. - 01 / 04 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

// definir dado
    double x = 0;           // definir variavel com valor inicial
    double y = 0;           // definir variavel com valor inicial
    double z = 0;           // definir variavel com valor inicial

void method12 ( double x, double y, double z )
{
    x = IO_readdouble ( "Entre com um numero real para x: " );
    y = IO_readdouble ( "Entre com um numero real para y: " );
    z = IO_readdouble ( "Entre com um numero real para z: " ); 

    

    if ( ( x != y ) && ( x != z ) && ( y != z ))
    {
        if ( y < x && z > x)
        {
            IO_printf ( "%s%.2lf%s%.2lf%s%.2lf", "\nO x esta' entre y e z, pois: ", y, " < ", x, " < ", z );
        } // end if

        else
        {
            if ( z < x && y > x )
            {
                IO_printf ( "%s%.2lf%s%.2lf%s%.2lf", "\nO x esta' entre z e y, pois: ", z, " < ", x, " < ", y );
            } // end if

            else
            {
                IO_printf ( "\nEmbora sejam tres numeros diferentes, nao ha consideracoes a serem feitas!" );
            } // end else

        } // end else

    } // end if

    else
    {
        if ( ( x == y ) && ( x == z ) && ( y == z ))
        {
            IO_printf ( "%s%.2lf%s%.2lf%s%.2lf", "\nOs tres valores sao iguais: ", z, " = ", x, " = ", y );
            
        } // end if

        else
        {
            IO_printf ( "\nDois desses valores sao iguais" );
        } // end else 

    } // end else

} // end method12( )

int main ( )
{

    // identificar
       IO_id ( "\nExemplo0219 - Programa - v0.0" );   

    // testar valor
       method12 ( x, y, z );

    // encerrar
       IO_pause ( "\nApertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) (17, 15, 28)
b.) (30, 45, 21)
c.) (60, 72, 60)
d.) (10, 10, 10)
e.) (98, 89, 89)
f.) (5, 15, 28)


a.) O x esta' entre y e z, pois: 15 < 17 < 28

b.) O x esta' entre z e y, pois: 21 < 30 < 45

c.) Dois desses valores sao iguais

d.) "Os tres valores sao iguais: 10 = 10 = 10

e.) Dois desses valores sao iguais

f.) Embora sejam tres numeros diferentes, nao ha consideracoes a serem feitas!


------------------------------ historico


Versao         Data        Modificacao
1.9            01/04       esboco

------------------------------ testes

*/
