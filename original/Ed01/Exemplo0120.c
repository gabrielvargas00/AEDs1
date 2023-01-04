/*
  Exemplo0120 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0120  exemplo0120.c
  No Windows:  g++ -o exemplo0120  exemplo0120.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0120
  No windows:    exemplo0120
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
       double  r  = 0.0;    // raio da esfera
       double  r1 = 0.0;    // novo raio r1 = 3r/8
       double  v  = 0.0;    // volume esfera com raio = 3r/8

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0120 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor real para o raio da esfera: " );
       scanf  ( "%lf", &r );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( r <= 0)
       {
          if (!( r > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor real POSITIVO para o raio da esfera: " );
               scanf  ( "%lf", &r );
               getchar( );
          }
       }
/*    
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
*/
    // calcular valor do novo raio (r1)
       r1 = ( 3 * r / 8 );
    
    // calcular volume esfera com raio = 3r/8
       v = pow ( r1, 3 ) * M_PI * 4 / 3;

    // mostrar resultado da operacao
       printf ( "Volume da nova esfera: ");
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
r = 5

V = 27.61165

b)
r = 3

V = 5.96412

c) 
r = 7.86

V = 107.26303

d)
r = 54

V = 34782.73211

------------------------------ historico

*/
