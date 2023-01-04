/*
  Exemplo01E1 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo01E1  exemplo01E1.c
  No Windows:  g++ -o exemplo01E1  exemplo01E1.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo01E1
  No windows:    exemplo01E1
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
       double  a  = 0.0;    // area da circunferencia
       double  a2 = 0.0;    // dobro da area da circunferencia
       double  r2 = 0.0;    // raio da circunferencia de area a2

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo01E1 - Programa = v0.0" );
       printf ( "%s\n", "Autor: Gabriel Vargas Bento de Souza" );
       printf ( "\n" );
    
    // ler valor do teclado
       printf ( "Entre com um valor real para a area da circunferencia: " );
       scanf  ( "%lf", &a );
       getchar( );
       printf ( "\n" );

    // testar se valor valido
       while ( a <= 0)
       {
          if (!( a > 0))
          {
               printf ("\n");
               printf ( "Valor invalido!" );
               printf ("\n");
               printf ( "Entre com um valor real POSITIVO para a area da circunferencia: " );
               scanf  ( "%lf", &a );
               getchar( );
          }
       }

    // calcular valor do dobro da area da circunferencia
       a2 = 2 * a;
    
    // calcular valor do raio da circunferencia de area a2
       r2 = pow ( ( a2 / M_PI ), 0.5 );

    // mostrar resultado da operacao
       printf ( "Raio da nova circunferencia: ");
       printf ( "%lf", r2 );
       printf ("\n");

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
A = 5

r = 1.78412

b)
A = 1.570796

r = 1

c) 
A = 5,89

r = 1.93641

------------------------------ historico

*/
