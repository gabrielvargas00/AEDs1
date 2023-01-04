/*
  Exemplo0116 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0116   exemplo0116.c
  No Windows:  g++ -o exemplo0116   exemplo0116.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0116
  No windows:    exemplo0116
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
       double  l = 0.0;                // lado do triangulo equilatero
       double  h = 0.0;                // altura do triangulo de lado l/2
       double  x = 0.0;                // area do trangulo de lado l/2
       double  p = 0;                  // perimetro do triangulo de lado l/2
       double  raiz3 = pow ( 3, 0.5 ); // raiz de 3 

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0116 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor real para o lado triangulo equilatero: " );
       scanf  ( "%lf", &l );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( l <= 0)
       {
          if (!( l > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor real POSITIVO para o lado triangulo equilatero: " );
               scanf  ( "%lf", &l);
               getchar( );
          }
       }
    /*
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
    */

    // calcular altura do trangulo de lado l/2
       h = ( (l/4) * raiz3 );

    // calcular area do trangulo de lado l/2
       x = ( l * h / 4 ); 

    // calcular perimetro do trangulo de lado l/2
       p = ( 3 * l / 2 );

    // mostrar resultado da operacao
       printf ( "Altura do novo triangulo: ");
       printf ( "%lf", h  );
       printf ("\n");

       printf ( "\n" );
       printf ( "Area do novo retangulo: ");
       printf ( "%lf", x );
       printf ( "\n" );

       printf ( "\n" );
       printf ( "Perimetro do novo retangulo: ");
       printf ( "%lf", p );
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
l = 5.0

h = 2.16506
A = 2.706325
2P= 7.500000 

b)
b = 7.0

h = 3.03109
A = 5.304407
2P= 10.50000

c) 
b = 9.5

h = 4.11362
A = 9.769847
2P= 14.2500000

------------------------------ historico

*/