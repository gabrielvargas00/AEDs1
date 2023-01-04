/*
  Exemplo1101 - v 0.0. - 01 / 06 / 2022
  Author: Gabriel Vargas Bento de Souza
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres

// --------------------------------------------------------- definicoes globais

void pause ( std::string text )
{
    std::string dummy;
    std::cin.clear ( );
    std::cout << std::endl << text;
    std::cin.ignore( );
    std::getline(std::cin, dummy);
    std::cout << std::endl << std::endl;

}  // end pause ( )

// ---------------------------------------------------------- classes / pacotes

#include "myarray.hpp"

using namespace std;

// -------------------------------------------------------------------- metodos

/**
  Method00 - Nao faz nada.
 */

void method00 ( )
{
    // nao faz nada
} // end method00 ( )

/**
  Method01 - Mostrar certa quantidade de valores.
*/

void method01 ( )
{
   // definir dado
      Array <int> int_array ( 5, 0 );

      int_array.set ( 0, 1 );
      int_array.set ( 1, 2 );
      int_array.set ( 2, 3 );
      int_array.set ( 3, 4 );
      int_array.set ( 4, 5 );

   // identificar
      cout << "\nExemplo1101 - Method01 - v0.0\n" << endl;
    
   // mostrar dados
      int_array.print ( );

   // reciclar espaco
      int_array.free  ( );
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
  Method02 - 
 */

void method02 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method02 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
  Method03 - 
 */

void method03 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method03 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
  Method04 - 
 */

void method04 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method04 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  Method05 - 
 */

void method05 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method05 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  Method06 - 
 */

void method06 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method06 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - 
 */

void method07 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method07 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - 
 */

void method08 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method08 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method09 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1101 - Method10 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

// ------------------------------------------------------------- acao principal

/**
  Funcao principal.
  @return codigo de encerramento
*/

int main ( int argc, char** argv )
{
    // definir dado
       int x = 0;
    
    // repetir ate desejar parar
       do
       {
            // identificar
               cout << "\nExemplo1101 - Programa - v0.0\n       " << endl;

            // mostrar opcoes
               cout << "Opcoes                                  " << endl;
               cout << "0  - parar                              " << endl;
               cout << "1  - mostrar dados inteiros em arranjo  " << endl;
            // cout << "2  -                                    " << endl;
            // cout << "3  -                                    " << endl;
            // cout << "4  -                                    " << endl;
            // cout << "5  -                                    " << endl;
            // cout << "6  -                                    " << endl;
            // cout << "7  -                                    " << endl;
            // cout << "8  -                                    " << endl;
            // cout << "9  -                                    " << endl;
            // cout << "10 -                                    " << endl;

            // ler do teclado
               cout << endl << "Entrar com uma opcao: ";
               cin >> x;
            
            // escolher acao
               switch ( x )
               {
               case 0:
                   method00 ( );
                   break;

                case 1:
                   method01 ( );
                   break;

                case 2:
                   method02 ( );
                   break;

                case 3:
                   method03 ( );
                   break;

                case 4:
                   method04 ( );
                   break;

                case 5:
                   method05 ( );
                   break;

                case 6:
                   method06 ( );
                   break;

                case 7:
                   method07 ( );
                   break;

                case 8:
                   method08 ( );
                   break;

                case 9:
                   method09 ( );
                   break;

                case 10:
                   method10 ( );
                   break;
               
               default:
                   cout << endl << "ERRO: Valor invalido!" << endl;
                   break;
               } // end switch

       } while ( x != 0 );
    
    // encerrar
       pause ( "Apertar ENTER para terminar" );
       return ( 0 );
       
} // end main ( )


/*

---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes

Ira' mostrar o arranjo pre'-definido
{ 1, 2, 3, 4, 5 }
um termo por linha e com a sua respectiva posicao sucedida de dois pontos

0: 1
1: 2
2: 3
3: 4
4: 5

Correcao de espacamento: *

  0 :         1
  1 :         2
  2 :         3
  3 :         4
  4 :         5

*verificada na biblioteca com o "setw"
---------------------------------------------- historico

Versao          Data          Modificacao
0.1             01/06         esboco

---------------------------------------------- testes

Versao       Teste
0.1          01.(OK)           identificacao de programa

*/