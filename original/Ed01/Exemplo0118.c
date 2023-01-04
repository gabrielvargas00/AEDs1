/*
  Exemplo0118 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0118   exemplo0118.c
  No Windows:  g++ -o exemplo0118  exemplo0118.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0118
  No windows:    exemplo0118
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
       double  x = 0.0;                // comrpimento do solido
       double  y = 0.0;                // largura do solido
       double  z = 0.0;                // altura do solido
       double  v = 0.0;                // volume do solido com dimensoes multiplicadas por 6
       //double  p = 0;                // perimetro do triangulo de lado l/2
       //double  raiz3 = pow ( 3, 0.5 ); // raiz de 3 

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0118 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor real para o comprimento do paralelepipedo: " );
       scanf  ( "%lf", &x );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( x <= 0)
       {
          if (!( x > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor real POSITIVO para o comprimento do paralelepipedo: " );
               scanf  ( "%lf", &x);
               getchar( );
          }
       }
    
    // ler novo valor do teclado
       printf ( "Entre com um valor real para a largura do paralelepipedo: " );
       scanf  ( "%lf", &y );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( y <= 0)
       {
          if (!( y > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor real POSITIVO para a largura do paralelepipedo: " );
               scanf  ( "%lf", &y);
               getchar( );
          }
       }
    
    // ler novo valor do teclado
       printf ( "Entre com um valor real para a altura do paralelepipedo: " );
       scanf  ( "%lf", &z );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( z <= 0)
       {
          if (!( z > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor real POSITIVO para a altura do paralelepipedo: " );
               scanf  ( "%lf", &z);
               getchar( );
          }
       }

    // calcular volume do solido com dimensoes multiplicadas por 6
       v = 216 * ( x * y * z );

    // calcular area do trangulo de lado l/2
       //x = ( l * h / 4 ); 

    // calcular perimetro do trangulo de lado l/2
       //p = ( 3 * l / 2 );

    // mostrar resultado da operacao
       printf ( "Volume do novo paralelepipedo: ");
       printf ( "%lf", v );
       printf ("\n");
/*
       printf ( "\n" );
       printf ( "Area do novo retangulo: ");
       printf ( "%lf", x );
       printf ( "\n" );

       printf ( "\n" );
       printf ( "Perimetro do novo retangulo: ");
       printf ( "%lf", p );
       printf ( "\n" );
*/
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
x = 3
y = 4
z = 5

V = 12960

b)
x = 3.25
y = 9.17
z = 2.89

V = 18603.9126

c) 
x = 7.77
y = 10
z = 1.866

V = 31317.4512

d)
x = -4.9

Valor invalido!

e)
x = 9.81
y = -15

Valor invalido!

f)
x = 9.81
y = 5.7
z = -6

Valor invalido!


------------------------------ historico

*/