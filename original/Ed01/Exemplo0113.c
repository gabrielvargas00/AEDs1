/*
  Exemplo0113 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0113   exemplo0113.c
  No Windows:  g++ -o exemplo0113   exemplo0113.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0113
  No windows:    exemplo0113
 */

// dependencias
#include <stdio.h>          // para entradas e saidas
#include <stdbool.h>        // para valores logicos
#include <string.h>         // para cadeia de caracteres
#include <math.h>           // para funcoes matematicas
#include "io.h"             // para definicoes proprias

// funcao princiapl

int main ( int argc, char* argv [ ] )
{
    // definir dados
       int    b = 0;        // base do retangulo
       int    h = 0;        // altura do retangulo
       double y = 0.00;     // area do retangulo
       double z = 0.0;      // 1/3 area do retangulo

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0113 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor inteiro para a base do retangulo: " );
       scanf  ( "%d", &b );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( b <= 0)
       {
          if (!( b > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor INTEIRO POSITIVO para a base do retangulo: " );
               scanf  ( "%d", &b);
               getchar( );
          }
       }
    
    // ler novo valor do teclado
       printf ( "Entre com um valor inteiro para a altura do retangulo: " );
       scanf  ( "%d", &h );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( h <= 0)
       {
          if (!( h > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor INTEIRO POSITIVO para a altura do retangulo: " );
               scanf  ( "%d", &h);
               getchar( );
          }
       }

    // calcular area do retangulo
       y = ( b * h );

    // calcular 1/3 area do retangulo
       z = ( y / 3 ); 

    // mostrar resultado da operacao
       printf ("\n");
       printf ( "1/3 da area do retangulo: ");
       printf ( "%0.2lf", z  );
       printf ( "\n" );

    // encerrar
       printf ( "\nApertar ENTER para terminar.\n" );
       getchar( );   
       return (0);   

} // end main ()

/*
------------------------------ documentacao complementar

------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a)
b = 3
h = 5

1/3 A = 5.00

b) 
b = 2
h = 8

1/3 A = 5.33

c) 
b = 6
h = 5

1/3 A = 10.00

d)
b = -7
h = 

Valor invalido!

e)
b = 4
h = -7

Valor invalido!


------------------------------ historico

*/