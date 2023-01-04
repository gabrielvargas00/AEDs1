/*
  Exemplo0115 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0115   exemplo0115.c
  No Windows:  g++ -o exemplo0115   exemplo0115.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0115
  No windows:    exemplo0115
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
       double  b = 0.0;    // base do triangulo
       double  h = 0.0;    // altura do triangulo
       double  y = 0.0;    // area do trangulo de base b e altura h/5
       //int    z = 0;     // perimetro do triangulo

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0115 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor real para a base do triangulo: " );
       scanf  ( "%lf", &b );
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
               printf ( "Entre com um valor real POSITIVO para a base do triangulo: " );
               scanf  ( "%lf", &b);
               getchar( );
          }
       }
    
    // ler novo valor do teclado
       printf ( "Entre com um valor real para a altura do triangulo: " );
       scanf  ( "%lf", &h );
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
               printf ( "Entre com um valor real POSITIVO para a altura do triangulo: " );
               scanf  ( "%lf", &h);
               getchar( );
          }
       }

    // calcular area do trangulo de base b e altura h/5
       y = ( b * h / 10 );

    // calcular perimetro
       //z = 2 * ( 2 * b + 2 * h ); 

    // mostrar resultado da operacao
       printf ("\n");
       printf ( "Area do novo triangulo: ");
       printf ( "%lf", y  );

       //printf ( "\n" );
       //printf ( "Perimetro do novo retangulo: ");
       //printf ( "%d", z  );
       //printf ( "\n" );

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

A  = 1.500000

b)
b = 3.25
h = 7.5

A  = 2.437500

c) 
b = 3.1415
h = 9.17

A  = 2.880755

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