/*
  Exemplo01E2 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo01E2  exemplo01E2.c
  No Windows:  g++ -o exemplo01E2  exemplo01E2.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo01E2
  No windows:    exemplo01E2
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
       double  v  = 0.0;    // volume da esfera
       double  v2 = 0.0;    // metade do volume da esfera
       double  r2 = 0.0;    // raio da esfera de volume v2
       double  a2 = 0.0;    // area da esfera de volume v2

       double  y  = 0.0;   // variavel auxiliar

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo01E2 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor real para o volume da esfera: " );
       scanf  ( "%lf", &v );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( v <= 0)
       {
          if (!( v > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor real POSITIVO para o volume da esfera: " );
               scanf  ( "%lf", &v );
               getchar( );
          }
       }

    // calcular valor da metade do volume da esfera
       v2 = v * 0.5;
    
    // calcular valor do raio da esfera de volume v2
       y = ( v2 * 3 / ( 4 * M_PI ) );
       r2 = pow ( y ,  1.0 / 3.0  );

    // calcular valor da area da esfera de volume v2
       a2 = 4 * M_PI * pow ( r2, 2.0 );

    // mostrar resultado da operacao
       printf ( "Raio da nova esfera: ");
       printf ( "%lf", r2 );
       printf ("\n");

       printf ( "\n" );
       printf ( "Area da nova esfera: ");
       printf ( "%lf", a2 );
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
v = 5

r = 0.841945
A = 8.90794


b)
V = 18

r = 1.29038
A = 20.92402

c) 
V = 7.15

r = 0.948555
A = 11.306667

------------------------------ historico

*/
