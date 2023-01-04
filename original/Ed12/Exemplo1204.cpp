/*
  Exemplo1204 - v 0.0. - 12 / 06 / 2022
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

#include "mymatrix.hpp"

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
      Matrix <int> int_matrix ( 2, 2, 0 );

      int_matrix.set ( 0, 0, 1 );    int_matrix.set ( 0, 1, 2 );
      int_matrix.set ( 1, 0, 3 );    int_matrix.set ( 1, 1, 4 );

   // identificar
      cout << "\nExemplo1204 - Method01 - v0.0\n" << endl;
    
   // mostrar dados
      int_matrix.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
  Method02 - Ler e mostrar certa quantidade de valores.
 */

void method02 ( )
{
   // definir dados
      Matrix <int> matrix ( 2, 2, 0 );

   // identificar
      cout << endl << "Exemplo1204 - Method02 - v0.0" << endl;

   // ler dados
      matrix.read ( );  

   // mostrar dados
      matrix.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
  Method03 - Gravar centa quantidade de valores em arquivo.
 */

void method03 ( )
{  
   // definir dados
      Matrix <int> matrix ( 2, 2, 0 );

   // identificar
      cout << endl << "Exemplo1204 - Method03 - v0.0" << endl;

   // ler dados
      matrix.read ( );  

   // mostrar dados
      matrix.print ( );
   
   // gravar dados
      matrix.fprint ( "MATRIX1.TXT" );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
  Method04 - Gravar certa quantidade de valores de arquivo.
 */

void method04 ( )
{  
   // definir dados
      Matrix <int> matrix ( 1, 1, 0 );    // havera' redimensionamento da area

   // identificar
      cout << endl << "Exemplo1204 - Method04 - v0.0" << endl;

   // ler dados
      matrix.fread ( "MATRIX1.TXT" );  

   // mostrar dados
      matrix.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  Method05 - 
 */

void method05 ( )
{  
   // identificar
      cout << endl << "Exemplo1204 - Method05 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  Method06 - 
 */

void method06 ( )
{  
   // identificar
      cout << endl << "Exemplo1204 - Method06 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - 
 */

void method07 ( )
{  
   // identificar
      cout << endl << "Exemplo1204 - Method07 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - 
 */

void method08 ( )
{  
   // identificar
      cout << endl << "Exemplo1204 - Method08 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      cout << endl << "Exemplo1204 - Method09 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1204 - Method10 - v0.0" << endl;
      
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
               cout << "\nExemplo1204 - Programa - v0.0\n           " << endl;

            // mostrar opcoes
               cout << "Opcoes                                      " << endl;
               cout << "0  - parar                                  " << endl;
               cout << "1  - mostrar dados inteiros em matriz       " << endl;
               cout << "2  - ler e mostrar dados inteiros em matriz " << endl;
               cout << "3  - ler e gravar dados inteiros de matriz  " << endl;
               cout << "4  - ler dados inteiros de matriz de arquivo" << endl;
            // cout << "5  -                                        " << endl;
            // cout << "6  -                                        " << endl;
            // cout << "7  -                                        " << endl;
            // cout << "8  -                                        " << endl;
            // cout << "9  -                                        " << endl;
            // cout << "10 -                                        " << endl;

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


Ler matriz gravada em MATRIX1.TXT

Depois, sera' mostrada
  
  1     2
  3     4


---------------------------------------------- historico

Versao          Data          Modificacao
0.4             12/06         esboco

---------------------------------------------- testes

Versao       Teste
0.1          01.(OK)           identificacao de programa, mostrando matriz
0.2          01.(OK)           identificacao de programa, lendo e mostrando matriz
0.3          01.(OK)           identificacao de programa, lendo e mostrando e gravando matriz
0.4          01.(OK)           identificacao de programa, lendo matriz de arquivo

*/