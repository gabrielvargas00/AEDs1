/*
  Exemplo1106 - v 0.0. - 03 / 06 / 2022
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
      cout << "\nExemplo1106 - Method01 - v0.0\n" << endl;
    
   // mostrar dados
      int_array.print ( );

   // reciclar espaco
      int_array.free  ( );
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
  Method02 - Ler e mostrar certa quantidade de valores.
 */

void method02 ( )
{  
   // definir dado
      Array <int> int_array ( 5, 0 );

   // identificar
      cout << endl << "Exemplo1106 - Method02 - v0.0" << endl;
   
   // ler dados
      int_array.read  ( );

   // mostrar dados
      int_array.print ( );

   // reciclar espaco
      int_array.free  ( );
            
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
  Method03 - Ler e gravar em arquivo certa quantidade de valores.
 */

void method03 ( )
{  
   // definir dado
      Array <int> int_array ( 5, 0 );

   // identificar
      cout << endl << "Exemplo1106 - Method03 - v0.0" << endl;
   
   // ler dados
      int_array.read  ( );

   // salvar dados
      int_array.fprint ( "INT_ARRAY1.TXT" );

   // reciclar espaco
      int_array.free  ( );
            
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
  Method04 - Mostrar de arquivo certa quantidade de valores.
 */

void method04 ( )
{  
   // definir dado
      Array <int> int_array ( 5, 0 );

   // identificar
      cout << endl << "Exemplo1106 - Method04 - v0.0" << endl;
   
   // ler dados
      int_array.fread  ( "INT_ARRAY1.TXT" );

   // salvar dados
      int_array.print ( );

   // reciclar espaco
      int_array.free  ( );
            
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  Method05 - Copiar certa quantidade de valores. 
 */

void method05 ( )
{  
   // definir dado
      int other [ ] = { 1, 2, 3, 4, 5  };
      Array <int> int_array ( 5, other );

   // identificar
      cout << endl << "Exemplo1106 - Method05 - v0.0" << endl;

   // mostrar dados
      cout << "\nCopia\n" << endl;
      int_array.print ( );

   // reciclar espaco
      int_array.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  Method06 - Copiar certa quantidade de valores de arquivo.
 */

void method06 ( )
{  
   // definir dado
      Array <int> int_array1 ( 1, 0 );

   // identificar
      cout << endl << "Exemplo1106 - Method06 - v0.0" << endl;
   
   // ler dados
      int_array1.fread ( "INT_ARRAY1.TXT" );

   // mostrar dados
      cout << "\nOriginal\n" << endl;
      int_array1.print ( );
   
   // criar copia
      Array <int> int_array2 ( int_array1 );

   // mostrar dados
      cout << "\nCopia\n" << endl;
      int_array2.print ( );

   // reciclar espaco
      int_array1.free  ( );
      int_array2.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - 
 */

void method07 ( )
{  
   // identificar
      cout << endl << "Exemplo1106 - Method07 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - 
 */

void method08 ( )
{  
   // identificar
      cout << endl << "Exemplo1106 - Method08 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      cout << endl << "Exemplo1106 - Method09 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1106 - Method10 - v0.0" << endl;
      
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
               cout << "\nExemplo1106 - Programa - v0.0\n       " << endl;

            // mostrar opcoes
               cout << "Opcoes                                  " << endl;
               cout << "0  - parar                              " << endl;
               cout << "1  - mostrar dados inteiros em arranjo  " << endl;
               cout << "2  - ler dados inteiros em arranjo      " << endl;
               cout << "3  - gravar dados inteiros em arquivo   " << endl;
               cout << "4  - ler e mostrar dados de arquivo     " << endl;
               cout << "5  - copiar certa quantidade de valores " << endl;
               cout << "6  - copiar valores de arquivo          " << endl;
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

Ira' ler arranjo do arquivo INT_ARRAY1.TXT:

Original


  0 :         1
  1 :         2
  2 :         3
  3 :         4
  4 :         5


Copiar arranjo:

Copia


  0 :         1
  1 :         2
  2 :         3
  3 :         4
  4 :         5


---------------------------------------------- historico

Versao          Data          Modificacao
0.6             03/06         esboco

---------------------------------------------- testes

Versao       Teste
0.1          01.(OK)           identificacao de programa, utilizando print
0.2          01.(OK)           identificacao de programa, utilizando read
0.3          01.(OK)           identificacao de programa, utilizando fprint
0.4          01.(OK)           identificacao de programa, utilizando fread
0.5          01.(OK)           identificacao de programa, copiando   arranjo I
0.6          01.(OK)           identificacao de programa, copiando   arranjo II

*/