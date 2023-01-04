/*
  Exemplo0112 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0112   exemplo0112.c
  No Windows:  g++ -o exemplo0112   exemplo0112.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0112
  No windows:    exemplo0112
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
       int    x = 0;        // lado do quadrado
       int    y = 0;        // area do quadrado de lado 3x
       int    z = 0;        // perimetro do quadrado de lado 3x

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0112 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );

    // mostrar valor inicial
    //printf ( "%s%d\n", "Lado = ", x );
    
    // ler valor do teclado
       printf ( "Entre com um valor inteiro para o lado do quadrado: " );
       scanf  ( "%d", &x);
       getchar( );
    
    // testar se valor valido
       while ( x <= 0)
       {
          if (!( x > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor INTEIRO POSITIVO para o lado do quadrado: " );
               scanf  ( "%d", &x);
               getchar( );
          }
       }

    // calcular area do quadrado de lado 3x
       y = pow( (3 * x), 2 );

    // calcular perimetro do quadrado de lado 3x
       z = ( 4 * ( 3 * x ) ); 

    // mostrar resultado da operacao
       printf ("\n");
       printf ( "Area do novo quadrado: ");
       printf ( "%i", y  );
       printf ( "\n" );
       printf ( "Perimetro do novo quadrado: ");
       printf ( "%i", z  );
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

a) 5
A= 225
2P= 60

b) 1
A= 9
2P= 12

c) 9
A= 729
2P= 108

d) -7
Valor invalido!


------------------------------ historico

*/