/*
  Exemplo0119 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0119  exemplo0119.c
  No Windows:  g++ -o exemplo0119  exemplo0119.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0119
  No windows:    exemplo0119
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
       double  r = 0.0;     // raio do circulo
       double  a = 0.0;     // area do circulo de raio r/2

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0119 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor real para o raio do circulo: " );
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
               printf ( "Entre com um valor real POSITIVO para o raio do circulo: " );
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
    // calcular area do circulo com raio r/2
       a = M_PI * pow ( ( r / 2 ), 2 );

    // calcular area do trangulo de lado l/2
       //x = ( l * h / 4 ); 

    // calcular perimetro do trangulo de lado l/2
       //p = ( 3 * l / 2 );

    // mostrar resultado da operacao
       printf ( "Area do novo circulo: ");
       printf ( "%lf", a );
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

A = 19.63495

b)
r = 3

A = 7.06858

c) 
r = 7.86

A = 48.52158

d)
r = 829

A = 539757.81921

------------------------------ historico

*/
