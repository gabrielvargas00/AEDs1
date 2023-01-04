/*
  Exemplo1317 - v 0.0. - 25 / 06 / 2022
  Author: Gabriel Vargas Bento de Souza
*/

// ---------------------------------------------------------- classes / pacotes

#include "Contato.hpp"  // classe para tratar dados de pessoas
#include "Contact.hpp" // classe de contatos com nome, fone1 e fone2

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
      cout << "\nExemplo1317 - Method01 - v0.0\n" << endl;

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
      cout << endl << "Exemplo1317 - Method02 - v0.0\n" << endl;
   
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
      cout << endl << "Exemplo1317 - Method03 - v0.0\n" << endl;
   
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
      cout << endl << "Exemplo1317 - Method04 - v0.0\n" << endl;
   
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
      cout << endl << "Exemplo1317 - Method05 - v0.0\n" << endl;

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
      cout << endl << "Exemplo1317 - Method06 - v0.0\n" << endl;

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
      cout << endl << "Exemplo1317 - Method07 - v0.0\n" << endl;

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
      cout << endl << "Exemplo1317 - Method08 - v0.0\n" << endl;

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
      cout << endl << "Exemplo1317 - Method09 - v0.0\n" << endl;

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
 Method10 - Testar arranjo de referencias para objetos (2)
 */

void method10 ( )
{  
   // definir dados
      Contato *pessoa [ 3 ];
      int x = 0;

   // identificar
      cout << endl << "Exemplo1317 - Method10 - v0.0\n" << endl;

   // testar atribuicoes
      pessoa[ 0 ] = new Contato ( "Pessoa_01", "111" );

      pessoa[ 1 ] = new Contato ( "Pessoa_02", "222" );

      pessoa[ 2 ] = new Contato ( "Pessoa_03", "333" );

      for ( x = 0; x < 3; x = x+1 )
      {
          cout << x << " : " << pessoa[x]->toString( ) << endl;
      } // end for

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method110 ( )

/**
 Method11 - Ler nome do contato 
 */

void method11 ( )
{  
   // definir dados
      Contato contato1;

   // identificar
      cout << endl << "Exemplo1317 - Method11 - v0.0\n" << endl;

   // ler nome
      contato1.readNome ( "Nome: " );
   
   // mostrar nome lido
      cout << "contato1 - nome: " << contato1.getNome ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 Method12 - Ler fone do contato 
 */

void method12 ( )
{  
   // definir dados
      Contato contato1;

   // identificar
      cout << endl << "Exemplo1317 - Method12 - v0.0\n" << endl;

   // ler nome
      contato1.readFone ( "Fone: " );
   
   // mostrar nome lido
      cout << "contato1 - fone: " << contato1.getFone ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
 Method13 - Testar se telefone e' valido
 */

void method13 ( )
{  
   // definir dados
      Contato contato1 ( "Gabriel", "1234-5678" );

   // identificar
      cout << endl << "Exemplo1317 - Method12 - v0.0\n" << endl;
   
   // mostrar infos e testes
      cout << "\ncontato1 - " << contato1.toString  ( ) << endl;
      cout << "Telefone valido = " << contato1.isFone ( ) << endl;

      contato1.setFone ( "12E4-5678" );
      cout << "\ncontato1 - " << contato1.toString  ( ) << endl;
      cout << "Telefone valido = " << contato1.isFone ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 Method14 - Ler de arquivo dados de um contato
 */

void method14 ( )
{  
   // definir dados
      Contato contato1;

   // identificar
      cout << endl << "Exemplo1317 - Method12 - v0.0\n" << endl;
   
   // ler dados
      contato1.fromFile ( "PESSOA1.TXT" );

   // mostrar infos e testes
      cout << "\ncontato1 - " << contato1.toString  ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 Method15 - Gravar em arquivo dados de um contato
 */

void method15 ( )
{  
   // definir dados
      Contato contato1 ( "Gabriel", "1234-5678" );

   // identificar
      cout << endl << "Exemplo1317 - Method12 - v0.0\n" << endl;
   
   // gravar dados
      contato1.toFile   ( "PESSOA1.TXT" );

   // ler dados
      contato1.fromFile ( "PESSOA1.TXT" );

   // mostrar infos e testes
      cout << "\ncontato1 - " << contato1.toString  ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 Method16 - Teste classe com none, fone1 e fone2
 */

void method16 ( )
{  
   // definir dados
      Contact contato1 ( "Gabriel", "1111-1111", "2222-2222" );

   // identificar
      cout << endl << "Exemplo1317 - Method12 - v0.0\n" << endl;

   // mostrar infos
      cout << "\ncontato1 - " << contato1.toString  ( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 Method17 - Teste para dizer quantos telefones associados a certa pessoa
 */

void method17 ( )
{  
   // definir dados
      Contact contato1 ( "Pessoa1", "1111-1111", "2222-2222" );
      Contact contato2 ( "Pessoa2", ""         , "2222-2222" );
      Contact contato3 ( "Pessoa3", "1111-1111", ""          );
      Contact contato4 ( "Pessoa4", ""         , ""          );

   // identificar
      cout << endl << "Exemplo1317 - Method12 - v0.0\n" << endl;

   // mostrar infos
      cout << "\nTelefones contato1 = " << contato1.telefones( ) << endl;
      cout << "\nTelefones contato2 = " << contato2.telefones( ) << endl;
      cout << "\nTelefones contato3 = " << contato3.telefones( ) << endl;
      cout << "\nTelefones contato4 = " << contato4.telefones( ) << endl;

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method17 ( )


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
               cout << "\nExemplo1317 - Programa - v0.0\n           " << endl;

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
               cout << "9  - testar arranjo de objetos              " << endl;
               cout << "10 - testar arranjo de referencias          " << endl;
               cout << "11 - ler nome do contato                    " << endl;
               cout << "12 - ler fone do contato                    " << endl;
               cout << "13 - testar se telefone e' valido           " << endl;
               cout << "14 - ler contato de arquivo                 " << endl;
               cout << "15 - gravar contato em arquivo              " << endl;
               cout << "16 - teste novo telefone                    " << endl;
               cout << "17 - dizer numero de telefones de um contato" << endl;

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

Teste para os 4 cenarios possiveis:

Telefones contato1 = 2

Telefones contato2 = 1

Telefones contato3 = 1

Telefones contato4 = 0

---------------------------------------------- historico

Versao          Data          Modificacao
1.7             26/06         esboco

---------------------------------------------- testes

*/