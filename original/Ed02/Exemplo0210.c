/*
  Exemplo0210 - v0.0. - 31 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em terminal (janela de comandos):

  No Linux  :  g++ -o exemplo0210   exemplo0210.c
  No Windows:  g++ -o exemplo0210   exemplo0210.c

  Para executar em terminal (janela de comandos):

  No Linux  :  ./exemplo0210
  No windows:    exemplo0210
 */

// dependencias
#include "io.h"          // para definicoes proprias

/**
 Method00 - nao faz nada
*/
void method00 ( )
{
    // nao faz nada
} // end method00( )

/**
 Method01 - mostrar mensagem com texto constante
*/
void method01 ( )
{
    IO_println ( "Valor igual a um" );
} // end method01( )

/**
 Method02 - mostrar mensagem com texto constante e valor variavel
 @param x - valor a ser exibido
*/
void method02 ( int x )
{
    IO_println ( IO_concat ( "Valor igual a (",
                             IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
} // end method02( )

/**
 Method03 - mostrar mensagem com texto constante e valor variavel
 @param text1 - texto a ser exibido
 @param x     - valor a ser exibido
*/
void method03 ( char* text1, int x )
{
    IO_println ( IO_concat (
                 IO_concat ( text1, " (" ),
                 IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
} // end method03( )

/*
 Funcao principal
 @return     - codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
 */

int main ( )
{
    // definir dado
       int x = 0;           // definir variavel com valor inicial

    // identificar
       IO_id ( "\nExemplo0210 - Programa - v0.0" );
    
    // ler do teclado
       x = IO_readint ( "Entrar com um inteiro [0,1,2,3]: " );

    // testar valor
       switch (x)
       {
       case 0:
           method00 ( );
           break;
        
       case 1:
           method01 ( );
           break;
        
       case 2:
           method02 ( x );
           break;

       case 3:
           method03 ( "Valor igual a tres", x );
           break;
       
       default:    // se nao alguma das opcoes anteriores
           IO_println ( IO_concat ( "Valor diferente das opcoes [0,1,2,3] (",
                        IO_concat ( IO_toString_d ( x ), ")" ) ) );
           break;
       } // end switch

    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );

} // end main( )

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes

a.) 0
b.) 1
c.) 2
d.) 3
e.) 4
f.) -1


a.) 

b.) "Valor igual a um"

c.) "Valor igual a (2)"

d.) "Valor igual a tres (3)"

e.) "Valor diferente das opcoes [0, 1, 2, 3] (4)"

f.) "Valor diferente das opcoes [0, 1, 2, 3] (-1)"

------------------------------ historico


Versao         Data        Modificacao
1.0            31/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao de programa
0.2           01.(OK)          utilizando if and else
0.3           01.(OK)          utilizando if and else ( = , !=, <, >)
0.4           01.(OK)          utilizando if and else dentro intervalo [1:10]
0.5           01.(OK)          utilizando if and else para caractere
0.6           01.(OK)          utilizando operador logico OU
0.7           01.(OK)          utilizando operador logico OU e !
0.8           01.(OK)          utilizando switch
0.9           01.(OK)          utilizando switch II
1.0           01.(OK)          utilizando switch III

*/
