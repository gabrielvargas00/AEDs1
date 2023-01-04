/*
  Erro.hpp - v 0.0. - 26 / 06 / 2022
  Author : Gabriel Vargas Bento de Souza
*/

// ----------------------------------------------------------------dependencias
#include <string.h>
#include <string>
#include "MyString.hpp"

// --------------------------------------------------------- definicoes globais

/**
 * Classe para tratar erro.
 */

#ifndef _ERRO_H_
#define _ERRO_H_

class Erro
{
   /**
    * Tratamento de erro.
    * Codgios de erro:
    * 0. Nao ha' erro.
    */

   /**
    * Atributos privados
    */
   private:
      int    erro;
      std::string mensagem;

   /**
    * Definicoes publicas.
    */
   public:

   /**
    * Destrutor.
    */
   ~Erro ( )
   { }

   /**
    * Constante da classe.
    */
   // static const std::string NO_ERROR;

   /**
    * Construtuor padrao.
    */
   Erro ( )
   {
      // atribuir valor inicial
         erro     = 0;
         this->setMensagem ( "[ERRO] Nao ha' erro." );
   } // end construtor padrao ( )

// -------------------------------------------------------- metodos para acesso

   /**
    * Funcao para obter o codigo de erro.
    * @return codigo de erro guardado
    */
   int getErro ( )
   {
      return ( erro );
   } // end getErro ( )

   /**
    * Funcao para testar se ha' erro
    * @return true, se houver;
              false, caso contrario
    */
   bool hasError ( )
   {
      return ( erro != 0 );
   }

   /**
    * Funcao para obter mensagem relativa ao codigo de erro.
    * @return mensagem sobre o erro
    */
   virtual std::string getErroMsg ( int codigo )
   {
      switch ( codigo )
      {
         case 0 : mensagem = "[ERRO] Nao ha' erro." ;                  break;
         case 1 : mensagem = "[ERRO] Nao ha' dados.";                  break;
         case 2 : mensagem = "[ERRO] Dados invalidos";                 break;
         case 3 : mensagem = "[ERRO] Tamanho invalido";                break;
         case 4 : mensagem = "[ERRO] Caractere nao encontrado";        break;
         case 5 : mensagem = "[ERRO] Nao ha' espaco em branco";        break;
         case 6 : mensagem = "[ERRO] Chave para codificar invalida";   break;
         case 7 : mensagem = "[ERRO] Chave para decodificar invalida"; break;
         case 8 : mensagem = "[ERRO] String composta apenas por '.'";  break;
         default: mensagem = "[ERRO] Erro desconhecido";               break;
      } 
      return ( mensagem );
   } // end getErroMsg

   /**
    * Definicoes de acesso restrito.
    */
   protected:

// ----------------------------------------------- metodos para acesso restrito
   
   /**
    * Metodo para esta estabelecer novo codigo de erro. 
    * @param codigo de erro a ser guardado
    */
   void setErro ( int codigo )
   {
      this->erro = codigo;
   } // end setErro ( )

   /**
    * Metodo para esta estabelecer nova mensagem 
    * @param codigo de erro a ser guardado
    */
   void setMensagem ( std::string msg )
   {
      this->mensagem = msg;
   } // end setErro ( )

   /**
    * Definicoes de acesso publico.
    */ 
   public:

   /**
    * Procedimento para mostrar mensagam de erro
    */
   void printError ( int codigo )
   {
      if ( codigo != 0 )
         cout << endl << this->getErroMsg ( codigo ) << endl;
      cout << endl;
   }

}; // end class Erro

// const std::string Erro::NO_ERROR = "[ERRO] Nao ha' erro."; 
//                            // definir o valor da constante

#endif