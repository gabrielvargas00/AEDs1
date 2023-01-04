/*
  Exemplo1404 - v 0.0. - 25 / 06 / 2022
  Author: Gabriel Vargas Bento de Souza
*/

// --------------------------------------------------------------- dependencias

#include "Erro.hpp"      // classe para tratar erros
#include "MyString.hpp"  // classe para exercicio

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
  Method01 - Converter conteudo em valor inteiro
*/

void method01 ( )
{
   // definir dado
      MyString conteudo1 ( "" );
      MyString conteudo2 ( "123"  );
      MyString conteudo3 ( "123A" );
      MyString conteudo4 ( "ABC"  );
      Erro     msgErro ( );
      
      int x = 0;

   // identificar
      cout << "\nExemplo1404 - Method01 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.getInt ( );
      cout << "\nValor inteiro de ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.getInt ( );
      cout << "\nValor inteiro de ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.getInt ( );
      cout << "\nValor inteiro de ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.getInt ( );
      cout << "\nValor inteiro de ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
  Method02 - Converter conteudo em valor real
*/

void method02 ( )
{
   // definir dado
      MyString conteudo1 ( ""        );
      MyString conteudo2 ( "01.23"   );
      MyString conteudo3 ( "123.4A"  );
      MyString conteudo4 ( "ABC"     );
      MyString conteudo5 ( ".5769"   );
      MyString conteudo6 ( "848.45"   );
      
      double x = 0;

   // identificar
      cout << "\nExemplo1404 - Method02 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.getDouble ( );
      cout << "\nValor real de ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.getDouble ( );
      cout << "\nValor real de ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.getDouble ( );
      cout << "\nValor real de ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.getDouble ( );
      cout << "\nValor real de ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

      x = conteudo5.getDouble ( );
      cout << "\nValor real de ( " << conteudo5.getConteudo( ) << " ) = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );

      x = conteudo6.getDouble ( );
      cout << "\nValor real de ( " << conteudo6.getConteudo( ) << " ) = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method02 ( ) 

/**
  Method03 - Converter conteudo em valor logico
*/

void method03 ( )
{
   // definir dado
      MyString conteudo1 ( ""      );
      MyString conteudo2 ( "1"     );
      MyString conteudo3 ( "true"  );
      MyString conteudo4 ( "false" );
      MyString conteudo5 ( "123"   );
      MyString conteudo6 ( "ABC"   );
      
      bool x = 0;

   // identificar
      cout << "\nExemplo1404 - Method03 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.getBoolean ( );
      cout << "\nValor logico de ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.getBoolean ( );
      cout << "\nValor logico de ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.getBoolean ( );
      cout << "\nValor logico de ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.getBoolean ( );
      cout << "\nValor logico de ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

      x = conteudo5.getBoolean ( );
      cout << "\nValor logico de ( " << conteudo5.getConteudo( ) << " ) = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );

      x = conteudo6.getBoolean ( );
      cout << "\nValor logico de ( " << conteudo6.getConteudo( ) << " ) = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method03 ( ) 

/**
  Method04 - Converter pamaetro esta contido em conteudo
*/

void method04 ( )
{
   // definir dado
      MyString conteudo1 ( ""         );
      MyString conteudo2 ( "amoreira" );
      MyString conteudo3 ( "teste"    );
      MyString conteudo4 ( "conteudo"  );
      MyString conteudo5 ( "texto"    );
      MyString conteudo6 ( "abc"    );
      
      bool x = 0;

   // identificar
      cout << "\nExemplo1404 - Method03 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.contains ( "metodo" );
      cout << "\n[metodo] esta contido em " << conteudo1.getConteudo( ) << " = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.contains ( "amor" );
      cout << "\n[amor] esta contido em " << conteudo2.getConteudo( ) << " = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.contains ( "este" );
      cout << "\n[este] esta contido em " << conteudo3.getConteudo( ) << " = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.contains ( "teu" );
      cout << "\n[teu] esta contido em " << conteudo4.getConteudo( ) << " = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

      x = conteudo5.contains ( "" );
      cout << "\n[] esta contido em " << conteudo5.getConteudo( ) << " = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );

      x = conteudo6.contains ( "abcdef" );
      cout << "\n[abcdef] esta contido em " << conteudo6.getConteudo( ) << " = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method04 ( ) 

/**
  Method05 - 
 */

void method05 ( )
{  
   // identificar
      cout << endl << "Exemplo1404 - Method05 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
  Method06 - 
 */

void method06 ( )
{  
   // identificar
      cout << endl << "Exemplo1404 - Method06 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
  Method07 - 
 */

void method07 ( )
{  
   // identificar
      cout << endl << "Exemplo1404 - Method07 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
  Method08 - 
 */

void method08 ( )
{  
   // identificar
      cout << endl << "Exemplo1404 - Method08 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      cout << endl << "Exemplo1404 - Method09 - v0.0" << endl;
      
   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1404 - Method10 - v0.0" << endl;
      
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
               cout << "\nExemplo1404 - Programa - v0.0\n           " << endl;

            // mostrar opcoes
               cout << "Opcoes                                      " << endl;
               cout << "0  - parar                                  " << endl;
               cout << "1  - converter conteudo para inteiro        " << endl;
               cout << "2  - converter conteudo para real           " << endl;
               cout << "3  - converter conteudo para boolean        " << endl;
               cout << "4  - testar se palavra esta contida         " << endl;
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

[metodo] esta contido em  = 0      
[ERRO] Nao ha' dados.


[amor] esta contido em amoreira = 1

[este] esta contido em teste = 1   

[teu] esta contido em conteudo = 1

[] esta contido em texto = 0
[ERRO] Nao ha' dados.


[abcdef] esta contido em abc = 0
[ERRO] Tamanho invalido

Foi testado para strings declaradas no proprio metodo.
Ha' mensagem de erro que foi setada na classe MyString
E, com uma funcao na Erro, exibida na tela.

---------------------------------------------- historico

Versao          Data          Modificacao
0.4             26/06         esboco

---------------------------------------------- testes

Versao       Teste
0.4          01.(OK)           converter contido em conteudo

*/