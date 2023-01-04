/*
  Exemplo02E2 - v0.0. - 01 / 04 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

// definir dado
    double x = 0;           // definir variavel com valor inicial
    double y = 0;           // definir variavel com valor inicial
    double z = 0;           // definir variavel com valor inicial

void method14 ( double x, double y, double z )
{
    x = IO_readchar ( "Entre com um caractere: " );
    y = IO_readchar ( "Entre com mais um caractere: " );
    z = IO_readchar ( "Entre com mais um caractere: " ); 
    

    if ( ( x != y ) && ( x != z ) && ( y != z ))
    {
        if ( ( y < x && z > x) || ( z < x && y > x ) )
        {
            IO_printf ( "\nO primeiro caractere esta' entre os outros dois" );
        } // end if

        else
        {
            IO_printf ( "\nO primeiro caractere esta' fora do intervalo definido pelos outros dois" );
        } // end else

    } // end if

    else
    {
        if ( ( x == y ) && ( x == z ) && ( y == z ))
        {
            IO_printf ( "\nOs tres caracteres sao iguais" );
            
        } // end if

        else
        {
            if ( x == y )
            {
                IO_printf ( "\nO primeiro caractere e' igual ao segundo" );
            } // end if

            else
            {
                if ( x == z )
                {
                    IO_printf ( "\nO primeiro caractere e' igual ao terceiro" );
                } // end if
                
                else
                {
                    IO_printf ( "\nO segundo caractere e' igual ao terceiro" );
                } // end else

            } // end else

        } // end else 

    } // end else

} // end method14( )

int main ( )
{

    // identificar
       IO_id ( "\nExemplo02E2 - Programa - v0.0" );   

    // testar valor
       method14 ( x, y, z );

    // encerrar
       IO_pause ( "\nApertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) (a, e, c)
b.) (c, a, e)
c.) (a, c, e)
d.) (c, f, a)
e.) (a, e, a)
f.) (A, A, A)
g.) (#, #, c)
h.) ($, b, b)


a.) O primeiro caractere esta' fora do intervalo definido pelos outros dois

b.) O primeiro caractere esta' entre os outros dois

c.) O primeiro caractere esta' fora do intervalo definido pelos outros dois

d.) O primeiro caractere esta' fora do intervalo definido pelos outros dois

e.) O primeiro caractere e' igual ao terceiro

f.) Os tres caracteres sao iguais

g.) O primeiro caractere e' igual ao segundo

h.) O segundo caractere e' igual ao terceiro


------------------------------ historico


Versao         Data        Modificacao
E.2            01/04       esboco

------------------------------ testes

*/
