/*
  Exemplo1215 - v 0.0. - 12 / 06 / 2022
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
      cout << "\nExemplo1215 - Method01 - v0.0\n" << endl;
    
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
      cout << endl << "Exemplo1215 - Method02 - v0.0" << endl;

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
      cout << endl << "Exemplo1215 - Method03 - v0.0" << endl;

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
      cout << endl << "Exemplo1215 - Method04 - v0.0" << endl;

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
      cout << endl << "Exemplo1215 - Method05 - v0.0" << endl;

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
      cout << endl << "Exemplo1215 - Method06 - v0.0" << endl;

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
      cout << endl << "Exemplo1215 - Method07 - v0.0" << endl;

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
      cout << endl << "Exemplo1215 - Method08 - v0.0" << endl;

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
      cout << endl << "Exemplo1215 - Method09 - v0.0" << endl;

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
 Method10 - Acessar externamente e alterar dados da matriz.
 */

void method10 ( )
{  
   // definir dados
      Matrix <int> int_matrix ( 3, 3, 0 );
      int x = 0;
      int y = 0;

   // identificar
      cout << endl << "Exemplo1215 - Method09 - v0.0" << endl;

   // ler dados
      int_matrix.fread ( "MATRIX1.TXT" );

   // mostrar dados
      cout << endl << "Matrix" << endl;
      int_matrix.print ( );

   // operar dados
      for ( x = 0; x < int_matrix.getRows ( ); x = x+1 )
      {
          for ( y = 0; y < int_matrix.getColumns ( ); y = y+1 )
          {
              int_matrix.set ( x, y, int_matrix.get ( x, y ) * (-1 ) );
          } // end for
      } // end for

   // mostrar dados
      cout << endl << "Matrix" << endl;
      int_matrix.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
 Method11 - Ler quantidade do teclado e gerar valores aleatorios,
            a partir de um intervalo, para uma matriz quadrada
 */

void method11 ( )
{  
   // definir dados
      int n = 0;

   // identificar
      cout << endl << "Exemplo1215 - Method11 - v0.0" << endl;

   // ler do teclado
      cout << endl << "Entre com quantidade de linhas/colunas de uma matriz quadrada: ";
      cin >> n;

   // verificar se quantidade valida
      while ( n <= 0 )
      {
          // solicitar nova leitura
             n = 0;
             cout << endl << "Valor Invalido." << endl;
             cout << endl << "Entre com quantidade de linhas/colunas de uma matriz quadrada: ";
             cin >> n;     
      } // end while
   
   // definir arranjo
      Matrix <int> matrix ( n, n, 0 );

   // gerar valores
      for ( int x = 0; x < matrix.getRows ( ); x = x+1 )
      {
          for ( int y = 0; y < matrix.getColumns ( ); y = y+1 )
          {
              matrix.set ( x, y, matrix.gerarInt ( 20, 100 ) );
          } // end for
      } // end for
   
   // mostrar matriz
      cout << endl << "Matrix";
      matrix.print ( );

   // gravar em arquivo
      matrix.fprint ( "DADOS.TXT" );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 Method12 - Ler quantidade do teclado e escalar uma matriz por esse valor.
 */

void method12 ( )
{  
   // definir dados
      Matrix <int> matrix ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1215 - Method12 - v0.0" << endl;
   
   // ler matriz
      matrix.fread ( "DADOS.TXT" );

   // mostrar matriz
      cout << endl << "Original";
      matrix.print ( );

   // escalar matriz
      matrix.escalar ( 2 );

   // mostrar matriz
      cout << endl << "Escalada (2)";
      matrix.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
 Method13 - Testar se matriz e' identidade.
 */

void method13 ( )
{  
   // definir dados
      Matrix <int> matrix( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1215 - Method13 - v0.0" << endl;
   
   // ler matriz
      matrix.fread ( "DADOS.TXT" );

   // mostrar matriz
      cout << endl << "Matrix 1";
      matrix.print ( );

   // mostrar teste se identidade
      cout << "Identidade = " << matrix.identidade ( ) << endl;

   // ler matriz
      matrix.fread ( "MATRIX_ID.TXT" );

   // mostrar matriz
      cout << endl << "Matrix 2";
      matrix.print ( );

   // mostrar teste se identidade
      cout << "Identidade = " << matrix.identidade ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 Method14 - Testar se matrizes sao iguais.
 */

void method14 ( )
{  
   // definir dados
      Matrix <int> matrix1 ( 1, 1, 0 );
      Matrix <int> matrix2 ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1215 - Method14 - v0.0" << endl;
   
   // ler matriz
      matrix1.fread ( "DADOS.TXT" );
      matrix2.fread ( "DADOS.TXT" );

   // mostrar matriz
      cout << endl << "Matrix 1";
      matrix1.print ( );

   // mostrar matriz
      cout << endl << "Matrix 2";
      matrix2.print ( );

   // mostrar teste se iguais
      cout << "Iguais = " << (matrix1 == matrix2) << endl;

   // pausa para teste 2
      pause ( "Apertar ENTER para proximo teste" );

   // alterar dados
      matrix2.set ( 0, 0, 0 );

   // mostrar dados
      cout << endl << "Matrix 1" << endl;
      matrix1.print ( );

   // mostrar dados
      cout << endl << "Matrix 2" << endl;
      matrix2.print ( );

   // mostrar teste se iguais
      cout << "Iguais = " << (matrix1 == matrix2) << endl;

   // encerrar
      getchar ( );
      pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
  Method15 - Somar duas matrizes.
 */

void method15 ( )
{  
   // definir dados
      Matrix <int> int_matrix1 ( 1, 1, 0 );
      Matrix <int> int_matrix2 ( 1, 1, 0 );
      Matrix <int> int_matrix3 ( 1, 1, 0 );

   // identificar
      cout << endl << "Exemplo1215 - Method15 - v0.0" << endl;

   // ler dados
      int_matrix1.fread ( "DADOS.TXT" );
      int_matrix2.fread ( "DADOS.TXT" );

   // mostrar dados
      cout << endl << "Matrix 1" << endl;
      int_matrix1.print ( );

   // mostrar dados
      cout << endl << "Matrix 2" << endl;
      int_matrix2.print ( );

   // operar dados
      int_matrix3 = (int_matrix1 + int_matrix2);

   // mostrar dados
      cout << endl << "Matriz 1 + Matrz 2" << endl;
      int_matrix3.print ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

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
               cout << "\nExemplo1215 - Programa - v0.0\n           " << endl;

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
               cout << "10 - acessar e alterar dados de matriz      " << endl;
               cout << "11 - mostrar matriz gerada aleatoriamente   " << endl;
               cout << "12 - mostrar matriz escalada por constante  " << endl;
               cout << "13 - testar se matriz e' identidade         " << endl;
               cout << "14 - testar se matrizes sao iguais          " << endl;
               cout << "15 - somar duas matrizes                    " << endl;


            // ler do teclado
               cout << endl << "Entrar com uma opcao: ";
               cin >> x;
            
            // escolher acao
               switch ( x )
               {
                   case 0 : method00 ( ); break;
                   case 1 : method01 ( ); break;
                   case 2 : method02 ( ); break;
                   case 3 : method03 ( ); break;
                   case 4 : method04 ( ); break;
                   case 5 : method05 ( ); break;
                   case 6 : method06 ( ); break;
                   case 7 : method07 ( ); break;
                   case 8 : method08 ( ); break;
                   case 9 : method09 ( ); break;
                   case 10: method10 ( ); break;
                   case 11: method11 ( ); break;
                   case 12: method12 ( ); break;
                   case 13: method13 ( ); break;
                   case 14: method14 ( ); break;
                   case 15: method15 ( ); break;

                   default:
                   pause ( "ERRO: Valor invalido!" );
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
---------------------------------------------- previsao de testes / testes

Somar duas matrizes:

Matrix 1

41      85      72      38
80      69      65      68
96      22      49      67
51      61      63      87


Matrix 2

41      85      72      38
80      69      65      68
96      22      49      67
51      61      63      87


Matriz 1 + Matrz 2

82      170     144     76
160     138     130     136
192     44      98      134
102     122     126     174

---------------------------------------------- historico

Versao          Data          Modificacao
1.5             12/06         esboco

*/