/*
  Erro.hpp - v 0.0. - 16 / 06 / 2022
  Author : Gabriel Vargas Bento de Souza
*/

// --------------------------------------------------------- definicoes globais

/**
 * Classe para tratsr erro.
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
      int erro;

   /**
    * Definicoes protegidas
    */ 
   protected:

// ----------------------------------------------- metodos para acesso restrito

   /**
    * Metodo para esta estabelecer novo codigo de erro. 
    * @param codigo de erro a ser guardado
    */
   void setErro ( int codigo )
   {
      erro = codigo;
   } // end setErro ( )
   
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
    * Construtuor padrao.
    */
   Erro ( )
   {
      // atribuir valor inicial
         erro = 0;
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

}; // end class Erro

#endif