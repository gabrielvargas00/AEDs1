/*
  Exemplo0217 - v0.0. - 01 / 04 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

// definir dado
    int x = 0;           // definir variavel com valor inicial
    int y = 0;           // definir variavel com valor inicial

void method10 ( int x )
{
    x = IO_readint ( "Entre com um numero inteiro para x: " );
    y = IO_readint ( "Entre com um numero inteiro para y: " ); 

    if ( ( x % 2 == 0 ) && ( x < 0 ) )
    {
        IO_println ( IO_concat ( "O numero x (",
                                  IO_concat ( IO_toString_d ( x ), ") e' par e negativo" ) ) );       
    } // end if

    else
    {
        IO_println ( IO_concat ( "O numero x (",
                                  IO_concat ( IO_toString_d ( x ), ") nao e' par e negativo" ) ) ); 

    }

    if ( ( y % 2 == 1 ) && ( y > 0 ) )
    {
        IO_println ( IO_concat ( "O numero y (",
                                  IO_concat ( IO_toString_d ( y ), ") e' impar e positivo" ) ) );       
    } // end if

    else
    {
        IO_println ( IO_concat ( "O numero y (",
                                  IO_concat ( IO_toString_d ( y ), ") nao e' impar e positivo" ) ) ); 

    }

} // end method10( )

int main ( )
{

    // identificar
       IO_id ( "\nExemplo0217 - Programa - v0.0" );   

    // testar valor
       method10 ( x );

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) (-5, -15)
b.) (-30, 45)
c.) (60, 72)
d.) (98, -89)


a.) O numero x nao e' par e negativo
O numero y nao e' impar e positivo

b.) O numero x e' par e negativo
O numero y e' impar e positivo

c.) O numero x nao e' par e negativo
O numero y nao e' impar e positivo

d.) O numero x nao e' par e negativo
O numero y nao e' impar e positivo

------------------------------ historico


Versao         Data        Modificacao
1.7            01/04       esboco

------------------------------ testes

*/
