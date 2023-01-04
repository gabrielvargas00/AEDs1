/*
  Exemplo0216 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza
 */

// dependencias
#include "io.h"          // para definicoes proprias

// definir dado
    int x = 0;           // definir variavel com valor inicial
    int y = 0;           // definir variavel com valor inicial

void method09 ( int x )
{
    x = IO_readint ( "Entre com um numero inteiro para x: " );
    y = IO_readint ( "Entre com um numero inteiro para y: " ); 

    if ( ( x % 2 == 1 ) &&
         ( y % 2 == 0 ) )
    {
        IO_println ( IO_concat ( "O x (",
                                  IO_concat ( IO_toString_d ( x ), ") e' impar" ) ) );
        IO_println ( IO_concat ( "E o y (",
                                  IO_concat ( IO_toString_d ( y ), ") e' par" ) ) );
        
    } // end if
           
    else
    {
        IO_printf ( "\nNao e' verdade que x e' impar e y e' par.\n" );
    } // end else 

} // end method09( )

int main ( )
{

    // identificar
       IO_id ( "\nExemplo0216 - Programa - v0.0" );   

    // testar valor
       method09 ( x );

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) (5, 15)
b.) (30, 45)
c.) (60, 72)
d.) (89, 98)


a.) "Nao e' verdade que x e' impar e y e' par."

b.) "Nao e' verdade que x e' impar e y e' par."

c.) "Nao e' verdade que x e' impar e y e' par."

d.) "O x e' impar"
    "E o y e' par"

------------------------------ historico


Versao         Data        Modificacao
1.6            31/03       esboco

------------------------------ testes

*/
