/*
  Exemplo0111 - v0.0. - 29 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0111   exemplo0111.c
  No Windows:  g++ -o exemplo0111   exemplo0111.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0111
  No windows:    exemplo0111
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
       int    y = 0;        // area do quadrado
       double z = 0.0;      // 1/4 da area do quadrado

    // identificar
       printf ( "\n" );
       printf ( "%s\n", "Exemplo0111 - Programa = v0.0" );
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

    // calcular area do quadrado
       y = pow( x, 2 );

    // calcular 1/4 area do quadrado
       z = ( y * 0.25 ); 

    // mostrar resultado o peracao
       printf ("\n");
       printf ( "1/4 da area do quadrado e': ");
       printf ( "%0.2lf", z  );
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

a) 5
6.25

b) 1
0.25

c)100
2500.00

d) -1
Valor invalido!


------------------------------ historico

*/