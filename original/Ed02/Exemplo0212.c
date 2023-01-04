/*
  Exemplo0212 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

void method05 ( int x )
{
    x = IO_readint ( "Entre com um valor inteiro: " );

    if ( x % 2 == 0)
    {
        IO_println ( IO_concat ( "O valor (",
                                  IO_concat ( IO_toString_d ( x ), ") e' par" ) ) );
        
        if ( x > -30 )
        {
            IO_println ( IO_concat ( "O valor (",
                                      IO_concat ( IO_toString_d ( x ), ") e' maior que -30" ) ) );  
        } // end if
    } // end if
           
    else
    {
        IO_println ( IO_concat ( "O valor (",
                                  IO_concat ( IO_toString_d ( x ), ") e' impar" ) ) );

        if ( x < 30 )
        {
            IO_println ( IO_concat ( "O valor (",
                                      IO_concat ( IO_toString_d ( x ), ") e' menor que 30" ) ) ); 
        } // end if
    } // end else 

} // end method05( )

int main ( )
{
    // definir dado
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0212 - Programa - v0.0" );   

    // testar valor
       method05 ( x );

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) -60
b.) -33
c.) 0
d.) 13
e.) 26
f.) 39


a.) O valor (-60) e' par

b.) O valor (-33) e' impar
    O valor (-33) e' menor que 30

c.) O valor (0) e' par
    O valor (0) e' maior que -30

d.) O valor (13) e' impar
    O valor (13) e' menor que 30

e.) O valor (26) e' par
    O valor (26) e' maior que -30

f.) O valor (39) e' impar


------------------------------ historico


Versao         Data        Modificacao
1.2            31/03       esboco

------------------------------ testes

*/
