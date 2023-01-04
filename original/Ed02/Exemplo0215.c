/*
  Exemplo0215 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

void method08 ( int x )
{
    x = IO_readint ( "Entre com um numero inteiro: " );

    if ( ( x >= 10 && x <= 25 ) &&
       ( x >= 20 && x <= 40) )
    {
        IO_println ( IO_concat ( "O numero (",
                                  IO_concat ( IO_toString_d ( x ), ") pertence aos intervalos [10:25] E [20:40]" ) ) );
        
    } // end if
           
    else
    {
        if ( x >= 10 && x <= 25 )
        {
            IO_println ( IO_concat ( "O numero (",
                                      IO_concat ( IO_toString_d ( x ), ") pertence ao intervalo fechado [10:25] apenas" ) ) );
        }  // end if
        else
        {
            if ( x >= 20 && x <= 40)
            {
                IO_println ( IO_concat ( "O numero (",
                                          IO_concat ( IO_toString_d ( x ), ") pertence ao intervalo fechado [20:40] apenas" ) ) );
            } // end if

            else
            {
                IO_println ( IO_concat ( "O numero (",
                                          IO_concat ( IO_toString_d ( x ), ") nao pertence, nem ao intervalo fechado [10:25], nem ao [20:40]" ) ) );
            }

        } // end else
    } // end else 

} // end method08( )

int main ( )
{
    // definir dado
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0215 - Programa - v0.0" );   

    // testar valor
       method08 ( x );

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
c.) 22
d.) 30
e.) 45
f.) 60


a.) O numero (5) nao pertence, nem ao intervalo fechado [10:25], nem ao [20:40]

b.) O numero (15) pertence ao intervalo fechado [10:25] apenas

c.) O numero (22) pertence aos intervalos [10:25] E [20:40]

d.) O numero (30) pertence ao intervalo fechado [20:40] apenas

e.) O numero (45) nao pertence, nem ao intervalo fechado [10:25], nem ao [20:40]

f.) O numero (60) nao pertence, nem ao intervalo fechado [10:25], nem ao [20:40]


------------------------------ historico


Versao         Data        Modificacao
1.5            31/03       esboco

------------------------------ testes

*/
