/*
  Exemplo1301 - v 0.0. - 25 / 06 / 2022
  Author: Gabriel Vargas Bento de Souza
*/

// ---------------------------------------------------------- classes / pacotes

#include "Contato.hpp" // classe para tratar dados de pessoas

// --------------------------------------------------------- definicoes globais

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
  Method01 - Testar definicoes da classe
*/

void method01 ( )
{
   // definir dado
      Contato     pessoa1;
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( );

   // identificar
      cout << "\nExemplo1301 - Method01 - v0.0\n" << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
  Method02 - 
 */

void method02 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method02 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
  Method03 - 
 */

void method03 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method03 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
  Method04 - 
 */

void method04 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method04 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  Method05 - 
 */

void method05 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method05 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  Method06 - 
 */

void method06 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method06 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - 
 */

void method07 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method07 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - 
 */

void method08 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method08 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method09 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1301 - Method10 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
 method23 - Metodo para default 
 */

void method23 ( )
{  
   cout << endl << "ERRO: Valor invalido!" << endl;

} // end method23 ( )

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
               cout << "\nExemplo1301 - Programa - v0.0\n           " << endl;

            // mostrar opcoes
               cout << "Opcoes                                      " << endl;
               cout << "0  - parar                                  " << endl;
               cout << "1  - testar definicao de contatos (objetos) " << endl;
            // cout << "2  -                                        " << endl;
            // cout << "3  -                                        " << endl;
            // cout << "4  -                                        " << endl;
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
                  default: method23 ( ); break;

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

Executar metodo1, mas nao mostra nada na tela.
Apenas ira' compilar e ttestar as duas bibliotecas

---------------------------------------------- historico

Versao          Data          Modificacao
0.1             26/06         esboco

---------------------------------------------- testes

Versao       Teste
0.1          01.(OK)           testar definicao de contatos (objetos)

*/