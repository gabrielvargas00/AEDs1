/*
  Exemplo1409 - v 0.0. - 25 / 06 / 2022
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
      
      int x = 0;

   // identificar
      cout << "\nExemplo1409 - Method01 - v0.0\n" << endl;
   
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
      cout << "\nExemplo1409 - Method02 - v0.0\n" << endl;
   
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
      cout << "\nExemplo1409 - Method03 - v0.0\n" << endl;
   
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
      cout << "\nExemplo1409 - Method04 - v0.0\n" << endl;
   
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
  Method05 - Converter minuscula para maiuscula
*/

void method05 ( )
{
   // definir dado
      MyString conteudo1 ( ""            );
      MyString conteudo2 ( "TESTE"       );
      MyString conteudo3 ( "teste"       );
      MyString conteudo4 ( "PaLaVrA"     );
      MyString conteudo5 ( "123!@#abcDEF");
      MyString conteudo6 ( "1a2b3c"      );
      
      string x;

   // identificar
      cout << "\nExemplo1409 - Method05 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.toUpperCase ( );
      cout << "\nEm letras maiusculas ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.toUpperCase ( );
      cout << "\nEm letras maiusculas ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.toUpperCase ( );
      cout << "\nEm letras maiusculas ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.toUpperCase ( );
      cout << "\nEm letras maiusculas ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

      x = conteudo5.toUpperCase ( );
      cout << "\nEm letras maiusculas ( " << conteudo5.getConteudo( ) << " ) = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );

      x = conteudo6.toUpperCase ( );
      cout << "\nEm letras maiusculas ( " << conteudo6.getConteudo( ) << " ) = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method05 ( ) 

/**
  Method06 - Converter maiuscula para minuscula
*/

void method06 ( )
{
   // definir dado
      MyString conteudo1 ( ""            );
      MyString conteudo2 ( "TESTE"       );
      MyString conteudo3 ( "teste"       );
      MyString conteudo4 ( "PaLaVrA"     );
      MyString conteudo5 ( "123!@#abcDEF");
      MyString conteudo6 ( "1a2b3C"      );
      
      string x;

   // identificar
      cout << "\nExemplo1409 - Method06 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.toLowerCase ( );
      cout << "\nEm letras minusculas ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.toLowerCase ( );
      cout << "\nEm letras minusculas ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.toLowerCase ( );
      cout << "\nEm letras minusculas ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.toLowerCase ( );
      cout << "\nEm letras minusculas ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

      x = conteudo5.toLowerCase ( );
      cout << "\nEm letras minusculas ( " << conteudo5.getConteudo( ) << " ) = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );

      x = conteudo6.toLowerCase ( );
      cout << "\nEm letras minusculas ( " << conteudo6.getConteudo( ) << " ) = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method06 ( ) 

/**
  Method07 - Trocar caractere por outro
*/

void method07 ( )
{
   // definir dado
      MyString conteudo1 ( ""            );
      MyString conteudo2 ( "Arara"       );
      MyString conteudo3 ( "teste"       );
      MyString conteudo4 ( "PaLaVRa"     );
      MyString conteudo5 ( "123!@#abcDEF");
      MyString conteudo6 ( "1a2b3C"      );
      
      string x;

   // identificar
      cout << "\nExemplo1409 - Method07 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.replace ( 'a', 'b' );
      cout << "\nTrocar a por b ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.replace ( 'r', 'l' );
      cout << "\nTrocar r por l ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.replace ( 'e', 'i' );
      cout << "\nTrocar e por i ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.replace ( 'a', '4' );
      cout << "\nTrocar a por 4 ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

      x = conteudo5.replace ( '0', '1' ); 
      cout << "\nTrocar 0 por 1 ( " << conteudo5.getConteudo( ) << " ) = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );

      x = conteudo6.replace ( 'C', 'c');
      cout << "\nTrocar C por c ( " << conteudo6.getConteudo( ) << " ) = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method07 ( ) 

/**
  Method08 - Contar cadeias de caracteres em uma string
*/

void method08 ( )
{
   // definir dado
      MyString conteudo1 ( "" );
      MyString conteudo2 ( "Palvra1 Palavra2 Palavra3" );
      MyString conteudo3 ( "teste"                     );
      MyString conteudo4 ( "1 2 3 4 5 6 7 8 9"         );
      MyString conteudo5 ( "123 !@# abc DEF"           );
      MyString conteudo6 ( "1a2 b3C"                   );
      
      int x;

      string sequencia[10];

   // identificar
      cout << "\nExemplo1409 - Method08 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.split ( sequencia );
      cout << "\n\n\nPalavras espacadas ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );
      cout << "\nSequencia" << conteudo1.getConteudo( );
      for ( int i = 0; i < x; i = i+1 )
      {
          cout << "\n" << i << " : " << sequencia[i];
          sequencia[i] = "";
      } // end for

      x = conteudo2.split ( sequencia );
      cout << "\n\n\nPalavras espacadas ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );
      cout << "\nSequencia" << conteudo1.getConteudo( );
      for ( int i = 0; i < x; i = i+1 )
      {
          cout << "\n" << i << " : " << sequencia[i];
          sequencia[i] = "";
      } // end for

      x = conteudo3.split ( sequencia );
      cout << "\n\n\nPalavras espacadas ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );
      cout << "\nSequencia" << conteudo1.getConteudo( );
      for ( int i = 0; i < x; i = i+1 )
      {
          cout << "\n" << i << " : " << sequencia[i];
          sequencia[i] = "";
      } // end for

      x = conteudo4.split ( sequencia );
      cout << "\n\n\nPalavras espacadas ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );
      cout << "\nSequencia" << conteudo4.getConteudo( );
      for ( int i = 0; i < x; i = i+1 )
      {
          cout << "\n" << i << " : " << sequencia[i];
          sequencia[i] = "";
      } // end for

      x = conteudo5.split ( sequencia ); 
      cout << "\n\n\nPalavras espacadas ( " << conteudo5.getConteudo( ) << " ) = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );
      cout << "\nSequencia" << conteudo5.getConteudo( );
      for ( int i = 0; i < x; i = i+1 )
      {
          cout << "\n" << i << " : " << sequencia[i];
          sequencia[i] = "";
      } // end for

      x = conteudo6.split ( sequencia );
      cout << "\n\n\nPalavras espacadas ( " << conteudo6.getConteudo( ) << " ) = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );
      cout << "\nSequencia" << conteudo6.getConteudo( );

      for ( int i = 0; i < x; i = i+1 )
      {
          cout << "\n" << i << " : " << sequencia[i];
          sequencia[i] = "";
      } // end for

   // encerrar
      pause ( "Apertar ENTER para continuar" );
} // end method08

/**
  Method09 - Encriptografar Cifra de Cesar
*/

void method09 ( )
{
   // definir dado
      MyString conteudo1 ( ""              );
      MyString conteudo2 ( "WXYZABCDE"     );
      MyString conteudo3 ( "teste"         );
      MyString conteudo4 ( "TeStEMetodo"   );
      MyString conteudo5 ( "CriptografiA"  );
      MyString conteudo6 ( "123!@#"        );
      
      string x;

   // identificar
      cout << "\nExemplo1409 - Method09 - v0.0\n" << endl;
   
   // converter conteudo
      x = conteudo1.encrypt ( 3 );
      cout << "\nEncriptografar [3]  ( " << conteudo1.getConteudo( ) << " ) = " << x;
      conteudo1.printError ( conteudo1.getErro( ) );

      x = conteudo2.encrypt ( 5 );
      cout << "\nEncriptografar [5]  ( " << conteudo2.getConteudo( ) << " ) = " << x;
      conteudo2.printError ( conteudo2.getErro( ) );

      x = conteudo3.encrypt ( -2 );
      cout << "\nEncriptografar [-2] ( " << conteudo3.getConteudo( ) << " ) = " << x;
      conteudo3.printError ( conteudo3.getErro( ) );

      x = conteudo4.encrypt ( 6 );
      cout << "\nEncriptografar [6]  ( " << conteudo4.getConteudo( ) << " ) = " << x;
      conteudo4.printError ( conteudo4.getErro( ) );

      x = conteudo5.encrypt ( 27 ); 
      cout << "\nEncriptografar [27] ( " << conteudo5.getConteudo( ) << " ) = " << x;
      conteudo5.printError ( conteudo5.getErro( ) );

      x = conteudo6.encrypt ( 10 );
      cout << "\nEncriptografar [10] ( " << conteudo6.getConteudo( ) << " ) = " << x;
      conteudo6.printError ( conteudo6.getErro( ) );

   // encerrar
      pause ( "Apertar ENTER para continuar" );

} // end method09 ( ) 

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      cout << endl << "Exemplo1409 - Method10 - v0.0" << endl;
      
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
               cout << "\nExemplo1409 - Programa - v0.0\n           " << endl;

            // mostrar opcoes
               cout << "Opcoes                                      " << endl;
               cout << "0  - parar                                  " << endl;
               cout << "1  - converter conteudo para inteiro        " << endl;
               cout << "2  - converter conteudo para real           " << endl;
               cout << "3  - converter conteudo para boolean        " << endl;
               cout << "4  - testar se palavra esta contida         " << endl;
               cout << "5  - converter letras para maiusculas       " << endl;
               cout << "6  - converter letras para minusculas       " << endl;
               cout << "7  - trocar caractere por outro             " << endl;
               cout << "8  - separar string pelos espacoes em branco" << endl;
               cout << "9  - encriptografar Cira de Cesar           " << endl;
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

Encriptografar [3]  (  ) =   
[ERRO] Nao ha' dados.        


Encriptografar [5]  ( WXYZABCDE ) = BCDEFGHIJ

Encriptografar [-2] ( teste ) =
[ERRO] Chave para codificar invalida


Encriptografar [6]  ( TeStEMetodo ) = ZkYzKSkzuju

Encriptografar [27] ( CriptografiA ) = DsjquphsbgjB

Encriptografar [10] ( 123!@# ) =
[ERRO] Dados invalidos

Foi testado para strings declaradas no proprio metodo.
Ha' mensagem de erro que foi setada na classe MyString
E, com uma funcao na Erro, exibida na tela.

---------------------------------------------- historico

Versao          Data          Modificacao
0.9             27/06         esboco

---------------------------------------------- testes

Versao       Teste
0.9          01.(OK)           separando string

*/