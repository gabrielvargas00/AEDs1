/*
  Exemplo0114 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0114   exemplo0114.c
  No Windows:  g++ -o exemplo0114   exemplo0114.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0114
  No windows:    exemplo0114
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
       int    b = 0;       // base do retangulo
       int    h = 0;       // altura do retangulo
       int    y = 0;       // area do retangulo de base 2b e altura 2h
       int    z = 0;       // perimetro do retangulo de base 2b e altura 2h

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0114 - Programa = v0.0" );
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

    // calcular area do retangulo de base 2b e altura 2h
       y = ( 4 * b * h );

    // calcular perimetro do retangulo de base 2b e altura 2h
       z = 2 * ( 2 * b + 2 * h ); 

    // mostrar resultado da operacao
       printf ("\n");
       printf ( "Area do novo retangulo: ");
       printf ( "%0d", y  );

       printf ( "\n" );
       printf ( "Perimetro do novo retangulo: ");
       printf ( "%d", z  );
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

A  = 60
2P = 32

b)
b = 2
h = 7

A  = 56
2P = 36

c) 
b = 10
h = 10


A  = 400
2P = 80

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