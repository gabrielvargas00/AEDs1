/*
  Exemplo1118 - v 0.0. - 05 / 06 / 2022
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
      cout << "\nExemplo1118 - Method01 - v0.0\n" << endl;
    
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
      cout << endl << "Exemplo1118 - Method02 - v0.0" << endl;
   
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
      cout << endl << "Exemplo1118 - Method03 - v0.0" << endl;
   
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
      cout << endl << "Exemplo1118 - Method04 - v0.0" << endl;
   
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
      cout << endl << "Exemplo1118 - Method05 - v0.0" << endl;

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
      cout << endl << "Exemplo1118 - Method06 - v0.0" << endl;
   
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
  Method07 - Copiar certa quantidade de valores de arquivo.
 */

void method07 ( )
{  
   // definir dados
      Array <int> int_array1 ( 1, 0 );
      Array <int> int_array2 ( 2, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method07 - v0.0" << endl;
   
   // ler dados
      int_array1.fread ( "INT_ARRAY1.TXT" );

   // mostrar dados
      cout << "\nOriginal\n" << endl;
      int_array1.print ( );
  
   // copiar dados
      int_array2 = int_array1;

   // mostrar dados
      cout << "\nCopia\n" << endl;
      int_array2.print ( );

   // reciclar espaco
      int_array1.free  ( );
      int_array2.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - Comparar certa quantidade de valores.
 */

void method08 ( )
{  
   // definir dados
      int   other [ ] = { 1, 2, 3 };
      Array <int> int_array1 ( 3, other );
      Array <int> int_array2 ( 3, other );

   // identificar
      cout << endl << "Exemplo1118 - Method08 - v0.0" << endl;

   // mostrar dados
      cout << endl;
      cout << "Array_1";
      int_array1.print ( );
  
   // mostrar dados
      cout << "Array_2";
      int_array2.print ( );

   // mostrar comparacao
      cout << "Igualdade = " << ( int_array1 == int_array2 ) << endl;

   // alterar dado
      int_array2.set ( 0, (-1) );

   // mostrar dados
      cout << endl;
      cout << "Array_1" << endl;
      int_array1.print ( );
  
   // mostrar dados
      cout << "Array_2" << endl;
      int_array2.print ( );

   // mostrar comparacao
      cout << "Igualdade = " << ( int_array1 == int_array2 ) << endl;
      
   // reciclar espaco
      int_array1.free  ( );
      int_array2.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - Somar arranjos.
 */

void method09 ( )
{  
   // definir dados
      Array <int> int_array1 ( 1, 0 );
      Array <int> int_array2 ( 1, 0 );
      Array <int> int_array3 ( 1, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method09 - v0.0" << endl;
   
   // ler dados
      int_array1.fread ( "INT_ARRAY1.TXT" );

   // copiar dados
      int_array2 = int_array1;
   
   // somar  dados
      int_array3 = int_array1 + int_array2;

   // mostrar dados
      cout << endl;
      cout << "Original" << endl;
      int_array1.print ( );
  
   // mostrar dados
      cout << "Copia"    << endl;
      int_array2.print ( );

   // mostrar dados
      cout << "Soma"     << endl;
      int_array3.print ( );

   // reciclar espaco
      int_array1.free  ( );
      int_array2.free  ( );
      int_array3.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - Fazer acesso externo ao arranjo.
 */

void method10 ( )
{  
   // definir dados
      int other [ ] =  { 1, 2, 3, 4, 5 };
      Array <int> int_array ( 5, other );
      int x;

   // identificar
      cout << endl << "Exemplo1118 - Metho10 - v0.0" << endl;

   // mostrar dados
      cout << "\nAcesso externo" << endl;
      for ( x=0; x < int_array.getLength(); x = x+1 )
      {
          cout << endl << setw ( 3 ) << x << " : " << int_array [ x ];
      } // end for
      
      cout << endl << "\nFora dos limites: ";
      cout << endl << "[-1]: " << int_array.get(-1)                     << endl;
      cout << endl << "["      << int_array.getLength ( )               << "]: "
                               << int_array [ int_array.getLength ( ) ] << endl;

   // reciclar espaco
      int_array.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
 Method11 - Ler quantidade do teclado e gerar valores aleatorios,
            a partir de um intervalo
 */

void method11 ( )
{  
   // definir dados
      int n = 0;

   // identificar
      cout << endl << "Exemplo1118 - Method11 - v0.0" << endl;

   // ler do teclado
      cout << endl << "Entre com a quantidade de numeros: ";
      cin >> n;

   // verificar se quantidade valida
      while ( n <= 0 )
      {
          // solicitar nova leitura
             n = 0;
             cout << endl << "Valor Invalido." << endl;
             cout << endl << "Entre com a quantidade de numeros: ";
             cin >> n;     
      } // end while
   
   // definir arranjo
      Array <int> int_array ( n, 0 );

   // gerar valores
      for ( int x = 0; x < int_array.getLength ( ); x = x+1 )
      {
          int_array.set ( x, int_array.gerarInt ( 20, 100) );
      } // end for
   
   // gravar em arquivo
      int_array.fprint ( "DADOS.TXT" );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 Method12 - Procurar maior valor em um arranjo.
 */

void method12 ( )
{  
   // definir dados
      int n = 0;
      Array <int> int_array ( 25, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method12 - v0.0" << endl;
   
   // ler dados
      int_array.fread  ( "DADOS.TXT" );

   // mostrar maior
      cout << endl << "Maior = " << int_array.acharMaior() << endl;

   // reciclar espaco
      int_array.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
 Method13 - Procurar menor valor em um arranjo.
 */

void method13 ( )
{  
   // definir dados
      int n = 0;
      Array <int> int_array ( 25, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method12 - v0.0" << endl;
   
   // ler dados
      int_array.fread  ( "DADOS.TXT" );

   // mostrar maior
      cout << endl << "Menor = " << int_array.acharMenor() << endl;

   // reciclar espaco
      int_array.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 Method14 - Somar valores em um arranjo.
 */

void method14 ( )
{  
   // definir dados
      int n = 0;
      Array <int> int_array ( 25, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method14 - v0.0" << endl;
   
   // ler dados
      int_array.fread  ( "DADOS.TXT" );

   // mostrar maior
      cout << endl << "Soma = " << int_array.somarValores ( int_array.getLength ( ) ) << endl;

   // reciclar espaco
      int_array.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 Method15 - Obter media de valores em um arranjo.
 */

void method15 ( )
{  
   // definir dados
      Array <int> int_array ( 25, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method15 - v0.0" << endl;
   
   // ler dados
      int_array.fread  ( "DADOS.TXT" );

   // mostrar maior
      cout << endl << "Media = " << int_array.mediaValores ( ) << endl;

   // reciclar espaco
      int_array.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 Method16 - Verificar se arranjo e' igual a zero.
 */

void method16 ( )
{  
   // definir dados
      Array <int> int_array1 ( 25, 0 );
      Array <int> int_array2 ( 25, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method16 - v0.0" << endl;
   
   // ler dados
      int_array1.fread  ( "DADOS.TXT"  );
      int_array2.fread  ( "DADOS1.TXT" );

   // mostrar maior
      cout << endl << "All zeros [int_array1] = " << int_array1.zeros ( ) << endl;
      cout << endl << "All zeros [int_array2] = " << int_array2.zeros ( ) << endl;

   // reciclar espaco
      int_array1.free  ( );
      int_array2.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 Method17 - Verificar se arranjo esta' ordenado decrescente.
 */

void method17 ( )
{  
   // definir dados
      Array <int> int_array1 ( 25, 0 );
      Array <int> int_array2 ( 10, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method17 - v0.0" << endl;
   
   // ler dados
      int_array1.fread  ( "DADOS.TXT"  );
      int_array2.fread  ( "DADOS2.TXT" );

   // mostrar maior
      cout << endl << "Decrescente [int_array1] = " << int_array1.decrescente ( ) << endl;
      cout << endl << "Decrescente [int_array2] = " << int_array2.decrescente ( ) << endl;

   // reciclar espaco
      int_array1.free  ( );
      int_array2.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
 Method18 - Verificar se valor pertence ao arranjo.
 */

void method18 ( )
{  
   // definir dados
      int n = 0;
      Array <int> int_array ( 25, 0 );

   // identificar
      cout << endl << "Exemplo1118 - Method18 - v0.0" << endl;

  // ler do teclado
     cout << endl << "Entrar com o valor a ser procurado: ";
     cin >> n;

   // ler dados
      int_array.fread  ( "DADOS.TXT"  );

   // mostrar maior
      cout << endl << "Procurado ( " << n << " ) em [ " << 3 << " , " << 12 <<
      " ] = " << int_array.acharValor ( n, 3, 12 ) << endl;

   // reciclar espaco
      int_array.free  ( );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

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
               cout << "\nExemplo1118 - Programa - v0.0\n         " << endl;

            // mostrar opcoes
               cout << "Opcoes                                    " << endl;
               cout << "0  - parar                                " << endl;
               cout << "1  - mostrar dados inteiros em arranjo    " << endl;
               cout << "2  - ler dados inteiros em arranjo        " << endl;
               cout << "3  - gravar dados inteiros em arquivo     " << endl;
               cout << "4  - ler e mostrar dados de arquivo       " << endl;
               cout << "5  - copiar certa quantidade de valores   " << endl;
               cout << "6  - copiar valores de arquivo I          " << endl;
               cout << "7  - copiar valores de arquivo II         " << endl;
               cout << "8  - comparar certa quantidade de valores " << endl;
               cout << "9  - somar certa quantidade de valores    " << endl;
               cout << "10 - fazer acesso externo ao arranjo      " << endl;
               cout << "11 - mostrar arranjo gerado aleatoriamente" << endl;
               cout << "12 - procurar maior valor de arranjo      " << endl;
               cout << "13 - procurar menor valor de arranjo      " << endl;
               cout << "14 - somar valores de arranjo             " << endl;
               cout << "15 - obter media de valores de arranjo    " << endl;
               cout << "16 - dizer se valores do arranjo sao zeros" << endl;
               cout << "17 - dizer se valores estao decrescentes  " << endl;
               cout << "18 - dizer se valor pertence ao arranjo   " << endl;

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
                   case 16: method16 ( ); break;
                   case 17: method17 ( ); break;
                   case 18: method18 ( ); break;
                   
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
---------------------------------------------- previsao de testes e testes

Ler em DADOS.TXT 25 e mostrar:

Procurado ( 80 ) em [ 3 , 12 ] = 1
Procurado ( 78 ) em [ 3 , 12 ] = 0
Procurado ( 90 ) em [ 3 , 12 ] = 0
Procurado ( -1 ) em [ 3 , 12 ] = 0
Procurado ( 51 ) em [ 3 , 12 ] = 1
Procurado ( 61 ) em [ 12 , 3 ] = 0  * 

* caso intervalo nao exista, resultado sera falso ( 0 )

---------------------------------------------- historico

Versao          Data          Modificacao
1.8             05/06         esboco

*/