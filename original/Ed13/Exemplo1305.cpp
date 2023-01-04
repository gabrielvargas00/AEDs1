/*
  Exemplo1305 - v 0.0. - 25 / 06 / 2022
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
      cout << "\nExemplo1305 - Method01 - v0.0\n" << endl;

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
      cout << endl << "Exemplo1305 - Method02 - v0.0\n" << endl;
   
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
      cout << endl << "Exemplo1305 - Method03 - v0.0\n" << endl;
   
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
      cout << endl << "Exemplo1305 - Method04 - v0.0\n" << endl;
   
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
      cout << endl << "Exemplo1305 - Method04 - v0.0\n" << endl;

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
  Method06 - 
 */

void method06 ( )
{  
   // identificar
      cout << endl << "Exemplo1305 - Method06 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - 
 */

void method07 ( )
{  
   // identificar
      cout << endl << "Exemplo1305 - Method07 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - 
 */

void method08 ( )
{  
   // identificar
      cout << endl << "Exemplo1305 - Method08 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      cout << endl << "Exemplo1305 - Method09 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1305 - Method10 - v0.0" << endl;
      
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
               cout << "\nExemplo1305 - Programa - v0.0\n           " << endl;

            // mostrar opcoes
               cout << "Opcoes                                      " << endl;
               cout << "0  - parar                                  " << endl;
               cout << "1  - testar definicao de contatos (objetos) " << endl;
               cout << "2  - testar atribuicoes de contatos         " << endl;
               cout << "3  - testar recuperacao de dados            " << endl;
               cout << "4  - testar construtor alternativo I        " << endl;
               cout << "5  - testar construtor alternativo II       " << endl;
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

Utilizando metodos de acesso,
alterar e obter nome e telefone de duas pessoas:
uma passada por objeto
outra, por referencia

Porem, por meio de um construtor alternativo,
utilizado na propria declaracao das variaveis

O erro sera' exibido como zero, porque, no construtor alternativo,
atribui-se a string sem verificar

pessoa1 - { Pessoa_01, 111 } ( 0 )
pessoa3 - { , 333 } ( 0 )

---------------------------------------------- historico

Versao          Data          Modificacao
0.5             26/06         esboco

---------------------------------------------- testes

Versao       Teste
0.1          01.(OK)           testar definicao  de contatos (objetos)
0.2          01.(OK)           testar atribuicao de contatos (objetos)
0.3          01.(OK)           testar recuperacao de dados
0.4          01.(OK)           testar construtor alternativo
0.5          01.(OK)           testar construtor alternativo ( set erro )

*/