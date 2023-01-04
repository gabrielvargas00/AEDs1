/*
  Exemplo1209 - v 0.0. - 12 / 06 / 2022
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
      cout << "\nExemplo1209 - Method01 - v0.0\n" << endl;
    
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
      cout << endl << "Exemplo1209 - Method02 - v0.0" << endl;

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
      cout << endl << "Exemplo1209 - Method03 - v0.0" << endl;

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
      cout << endl << "Exemplo1209 - Method04 - v0.0" << endl;

   // ler dados
      matrix.fread ( "MATRIX1.TXT" );  

   // mostrar dados
      matrix.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  Method05 - Copiar uma matriz para outra
 */

void method05 ( )
{  
   // definir dados
      Matrix <int> int_matrix1 ( 1, 1, 0 );
      Matrix <int> int_matrix2 ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1209 - Method05 - v0.0" << endl;

   // ler dados
      int_matrix1.fread ( "MATRIX1.TXT" );  

   // mostrar dados
      cout << endl << "Original" << endl;
      int_matrix1.print ( );
   
   // copiar dados
      int_matrix2 = int_matrix1;

   // mostrar dados
      cout << endl << "Copia   " << endl;
      int_matrix2.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  Method06 - Testar se matrix e' nula.
 */

void method06 ( )
{  
   // definir dados
      Matrix <int> int_matrix ( 2, 2, 0 );

      int_matrix.set ( 0, 0, 0 );     int_matrix.set ( 0, 1, 0 );
      int_matrix.set ( 1, 0, 0 );     int_matrix.set ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1209 - Method06 - v0.0" << endl;

   // mostrar dados
      int_matrix.print ( );
   
   // testar condicao
      cout << "Zeros = " << int_matrix.isZeros ( ) << endl;
   
   // ler dados
      int_matrix.fread ( "MATRIX1.TXT" );

   // mostrar dados
      int_matrix.print ( );

   // testar condicao
      cout << "Zeros = " << int_matrix.isZeros ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - Testar se matrizes sao diferentes.
 */

void method07 ( )
{  
   // definir dados
      Matrix <int> int_matrix1 ( 1, 1, 0 );
      Matrix <int> int_matrix2 ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1209 - Method07 - v0.0" << endl;

   // ler dados
      int_matrix1.fread ( "MATRIX1.TXT" );

   // mostrar dados
      cout << endl << "Matrix_1" << endl;
      int_matrix1.print ( );

   // copiar dados
      int_matrix2 = int_matrix1;

   // mostrar dados
      cout << endl << "Matrix_2" << endl;
      int_matrix2.print ( );

   // testar condicao
      cout << "Diferentes = " << (int_matrix1 != int_matrix2 ) << endl;
   
   // alterar dados
      int_matrix2.set ( 0, 0, (-1) );

   // mostrar dados
      cout << endl << "Matrix_1" << endl;
      int_matrix1.print ( );

   // mostrar dados
      cout << endl << "Matrix_2" << endl;
      int_matrix2.print ( );

   // testar condicao
      cout << "Diferentes = " << (int_matrix1 != int_matrix2 ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - Subtrair duas matrizes.
 */

void method08 ( )
{  
   // definir dados
      Matrix <int> int_matrix1 ( 1, 1, 0 );
      Matrix <int> int_matrix2 ( 1, 1, 0 );
      Matrix <int> int_matrix3 ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1209 - Method08 - v0.0" << endl;

   // ler dados
      int_matrix1.fread ( "MATRIX1.TXT" );

   // mostrar dados
      cout << endl << "Matrix_1" << endl;
      int_matrix1.print ( );

   // copiar dados
      int_matrix2 = int_matrix1;

   // mostrar dados
      cout << endl << "Matrix_2" << endl;
      int_matrix2.print ( );

   // operar dados
      int_matrix3 = (int_matrix1 - int_matrix2);

   // mostrar dados
      cout << endl << "Matrix_3" << endl;
      int_matrix3.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - Multiplicar duas matrizes.
 */

void method09 ( )
{  
   // definir dados
      Matrix <int> int_matrix1 ( 2, 2, 0 );

      int_matrix1.set ( 0, 0, 1 );     int_matrix1.set ( 0, 1, 0 );
      int_matrix1.set ( 1, 0, 0 );     int_matrix1.set ( 1, 1, 1 );

      Matrix <int> int_matrix2 ( 1, 1, 0 );
      Matrix <int> int_matrix3 ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1209 - Method09 - v0.0" << endl;

   // ler dados
      int_matrix2.fread ( "MATRIX1.TXT" );

   // mostrar dados
      cout << endl << "Matrix_1" << endl;
      int_matrix1.print ( );

   // mostrar dados
      cout << endl << "Matrix_2" << endl;
      int_matrix2.print ( );

   // operar dados
      int_matrix3 = (int_matrix1 * int_matrix2);

   // mostrar dados
      cout << endl << "Matrix_3" << endl;
      int_matrix3.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1209 - Method10 - v0.0" << endl;
      
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
               cout << "\nExemplo1209 - Programa - v0.0\n           " << endl;

            // mostrar opcoes
               cout << "Opcoes                                      " << endl;
               cout << "0  - parar                                  " << endl;
               cout << "1  - mostrar dados inteiros em matriz       " << endl;
               cout << "2  - ler e mostrar dados inteiros em matriz " << endl;
               cout << "3  - ler e gravar dados inteiros de matriz  " << endl;
               cout << "4  - ler dados inteiros de matriz de arquivo" << endl;
               cout << "5  - copiar uma matriz para outra           " << endl;
               cout << "6  - testar se matriz e' nula               " << endl;
               cout << "7  - testar se matrizes sao diferentes      " << endl;
               cout << "8  - subtrair duas matrizes                 " << endl;
               cout << "9  - multiplicar duas matrizes              " << endl;
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
Pre-definir matrix1
Ler matrix2 de arquivo MATRIX1.TXT

Matrix_1

1       0
0       1


Matrix_2

1       2
3       4


Matrix_3

1       2
3       4

// multiplicar pela identidade resulta nela mesma


---------------------------------------------- historico

Versao          Data          Modificacao
0.9             12/06         esboco

---------------------------------------------- testes

Versao       Teste
0.1          01.(OK)           identificacao de programa, mostrando matriz
0.2          01.(OK)           identificacao de programa, lendo e mostrando matriz
0.3          01.(OK)           identificacao de programa, lendo e mostrando e gravando matriz
0.4          01.(OK)           identificacao de programa, lendo matriz de arquivo
0.5          01.(OK)           identificacao de programa, copiar uma matriz pra outra
0.6          01.(OK)           identificacao de programa, testar se matriz e' nula
0.7          01.(OK)           identificacao de programa, testar se matrizes sao diferentes
0.8          01.(OK)           identificacao de programa, subtrair duas matrizes
0.9          01.(OK)           identificacao de programa, multiplicar duas matrizes

*/