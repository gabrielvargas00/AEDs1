/*
  Exemplo1309 - v 0.0. - 25 / 06 / 2022
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
      cout << "\nExemplo1309 - Method01 - v0.0\n" << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
  Method02 - Testar atribuicoes
 */

void method02 ( )
{  
   // definir dado
      Contato     pessoa1;
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( );

   // identificar
      cout << endl << "Exemplo1309 - Method02 - v0.0\n" << endl;
   
   // testar atribuicoes
      pessoa1.setNome  ( "Pessoa_01" );
      pessoa1.setFone  ( "111" );
      pessoa3->setNome ( "Pessoa_03" );
      pessoa3->setFone ( "333" );

      cout << "pessoa1 - { " << pessoa1.getNome  ( ) << ", " << pessoa1.getFone  ( ) << " }" << endl;
      cout << "pessoa3 - { " << pessoa3->getNome ( ) << ", " << pessoa3->getFone ( ) << " }" << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
  Method03 - Testar recuperacao de dados
 */

void method03 ( )
{  
   // definir dado
      Contato     pessoa1;
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( );

   // identificar
      cout << endl << "Exemplo1309 - Method03 - v0.0\n" << endl;
   
   // testar atribuicoes
      pessoa1.setNome  ( "Pessoa_01" );
      pessoa1.setFone  ( "111" );
      pessoa3->setNome ( "Pessoa_03" );
      pessoa3->setFone ( "333" );

      cout << "pessoa1 - " << pessoa1.toString  ( ) << endl;
      cout << "pessoa3 - " << pessoa3->toString ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
  Method04 - Testar construtor alternativo
 */

void method04 ( )
{  
   // definir dado
      Contato     pessoa1 ( "Pessoa_01", "111" );
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( "Pessoa_03", "333" );

   // identificar
      cout << endl << "Exemplo1309 - Method04 - v0.0\n" << endl;
   
      cout << "pessoa1 - " << pessoa1.toString  ( ) << endl;
      cout << "pessoa3 - " << pessoa3->toString ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
  Method05 - Testar construtor alternativo
 */

void method05 ( )
{  
   // definir dado
      Contato     pessoa1 ( "Pessoa_01", "111" );
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( "", "333" );

   // identificar
      cout << endl << "Exemplo1309 - Method05 - v0.0\n" << endl;

      // cout << endl << "Result3 = " << pessoa3->getNome().empty( ) << endl;
      // cout << endl << "Result1 = " << pessoa1.getNome().empty( )  << endl;
   
      cout << "pessoa1 - " << pessoa1.toString  ( ) << " (" 
                           << pessoa1.getErro   ( ) << ") " << endl;

      cout << "pessoa3 - " << pessoa3->toString ( ) << " (" 
                           << pessoa3->getErro  ( ) << ") " << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  Method06 - Testar construtor alternativo
 */

void method06 ( )
{  
   // definir dado
      Contato     pessoa1 ( "Pessoa_01", "111" );
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( "", "333" );
    //   pessoa3->setNome ( "" );
    //   pessoa3->setFone ( "333" );

   // identificar
      cout << endl << "Exemplo1309 - Method06 - v0.0\n" << endl;

   // testar atribuicoes
      if ( ! pessoa1.hasErro( ) )
        cout << "pessoa1 - " << pessoa1.toString( ) << endl;
      else
        cout << "pessoa1 tem erro (" << pessoa1.getErro( ) << ")" << endl;
        
      if ( ! pessoa3->hasErro( ) )
        cout << "pessoa3 - " << pessoa3->toString( ) << endl;
      else
        cout << "pessoa3 tem erro (" << pessoa3->getErro( ) << ")" << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - Testar atribuicoes e tratamento de erro
 */

void method07 ( )
{  
   // definir dado
      Contato     pessoa1 ( "Pessoa_01", "111" );
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( "", "333" );
    //   pessoa3->setNome ( "" );
    //   pessoa3->setFone ( "333" );

   // identificar
      cout << endl << "Exemplo1309 - Method07 - v0.0\n" << endl;

   // testar atribuicoes
      pessoa2 = &pessoa1;
      if ( ! pessoa2->hasErro( ) )
        cout << "pessoa2 - " << pessoa2->toString( ) << endl;
      else
        cout << "pessoa2 tem erro (" << pessoa2->getErro( ) << ")" << endl;


      pessoa2 = pessoa3; 
      if ( ! pessoa2->hasErro( ) )
        cout << "pessoa2 - " << pessoa2->toString( ) << endl;
      else
        cout << "pessoa2 tem erro (" << pessoa2->getErro( ) << ")" << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - Testar atribuicoes e tratamento de erro
 */

void method08 ( )
{  
   // definir dado
      Contato     pessoa1 ( "Pessoa_01", "111" );
      ref_Contato pessoa2 = nullptr;
      ref_Contato pessoa3 = new Contato( "", "333" );
      ref_Contato pessoa4 = nullptr;

      pessoa3->setNome ( "" );
      pessoa3->setFone ( "333" );

   // identificar
      cout << endl << "Exemplo1309 - Method08 - v0.0\n" << endl;

   // testar atribuicoes
      pessoa2 = new Contato ( pessoa1 );
      if ( pessoa2 )
        cout << "pessoa2 - " << pessoa2->toString( ) << endl;
      else
        cout << "pessoa2 tem erro (" << pessoa1.getErro( ) << ")" << endl;
      
      if ( pessoa3 )
      {
          pessoa2 = new Contato ( *pessoa3 );
          if ( pessoa2 )
            cout << "pessoa2 - " << pessoa2->toString( ) << endl;
          else
            cout << "pessoa2 tem erro (" << pessoa3->getErro( ) << ")" << endl;
      } // end if

      if ( pessoa4 )
      {
          pessoa2 = new Contato ( *pessoa4 );
          if ( pessoa2 )
            cout << "pessoa2 - " << pessoa2->toString( ) << endl;
          else
            cout << "pessoa2 tem erro (" << pessoa4->getErro( ) << ")" << endl;
      } // end if

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - Testar arranjo de objetos ( 1 )
 */

void method09 ( )
{  
   // definir dados
      Contato pessoa [ 3 ];
      int x = 0;

   // identificar
      cout << endl << "Exemplo1309 - Method09 - v0.0\n" << endl;

   // testar atribuicoes
      pessoa[ 0 ].setNome ( "Pessoa_01" );
      pessoa[ 0 ].setFone ( "111" );

      pessoa[ 1 ].setNome ( "Pessoa_02" );
      pessoa[ 1 ].setFone ( "222" );

      pessoa[ 2 ].setNome ( "Pessoa_03" );
      pessoa[ 2 ].setFone ( "333" );

      for ( x = 0; x < 3; x = x+1 )
      {
          cout << x << " : " << pessoa[x].toString( ) << endl;
      } // end for

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1309 - Method10 - v0.0" << endl;
      
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
               cout << "\nExemplo1309 - Programa - v0.0\n           " << endl;

            // mostrar opcoes
               cout << "Opcoes                                      " << endl;
               cout << "0  - parar                                  " << endl;
               cout << "1  - testar definicao de contatos (objetos) " << endl;
               cout << "2  - testar atribuicoes de contatos         " << endl;
               cout << "3  - testar recuperacao de dados            " << endl;
               cout << "4  - testar construtor alternativo I        " << endl;
               cout << "5  - testar construtor alternativo II       " << endl;
               cout << "6  - testar construtor alternativo III      " << endl;
               cout << "7  - testar atribuicoes e tratamento de erro" << endl;
               cout << "8  - testar atribuicoes e tratamento de erro" << endl;
               cout << "9  - testar arranjo de objetos ( 1 )        " << endl;
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

Gravar dentro de um arranjo um objeto

E exibir os dados:

0 : { Pessoa_01, 111 }       
1 : { Pessoa_02, 222 }       
2 : { Pessoa_03, 333 } 

---------------------------------------------- historico

Versao          Data          Modificacao
0.9             26/06         esboco

---------------------------------------------- testes

Versao       Teste
0.1          01.(OK)           testar definicao  de contatos (objetos)
0.2          01.(OK)           testar atribuicao de contatos (objetos)
0.3          01.(OK)           testar recuperacao de dados
0.4          01.(OK)           testar construtor alternativo
0.5          01.(OK)           testar construtor alternativo ( set erro I )
0.6          01.(OK)           testar construtor alternativo ( set erro II)
0.7          01.(OK)           testar atribuicoes e tratamento de erro
0.8          01.(OK)           testar atribuicoes e tratamento de erro
0.9          01.(OK)           testar arranjo de objetos ( 1 )

*/