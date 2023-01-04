/*
  MyString.hpp - v 0.0. - 26 / 06 / 2022
  Author : Gabriel Vargas Bento de Souza
*/

// --------------------------------------------------------- definicoes globais

#ifndef _MYSTRING_H_
#define _MYSTRING_H_

// dependencias

#include <iostream>
using std::cin ;     // para entrada
using std::cout;     // para saida
using std::endl;     // para mudar de linha

#include <iomanip>
using std::setw;     // para definir espacamento

#include <string>
using std::string;   // para cadeia de caracteres

#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler    arquivo

#include <math.h>    // para uso matematico

// outras dependencias

void pause ( std::string text )
{
    std::string dummy;
    std::cin.clear ( );
    std::cout << std::endl << text;
    std::cin.ignore( );
    std::getline(std::cin, dummy);
    std::cout << std::endl << std::endl;

} // end pause ( )

// incluir biblioteca de erro
#include "Erro.hpp"

/**
 * Classe para tratar do Ed14.
 */

class MyString: public Erro
{
   /**
    * Atributos privados
    */
   private:
      string conteudo;

    /**
     * Definicoes publicas.
     */
    public:
   /**
    * Destrutor
    */
   ~MyString ( )
   { }

   /**
    * Construtor padrao
    */
   MyString ( )
   {
      // tratamento de erro
         setErro ( 1 );
      
      // valor inicial
         conteudo = "";
   } // end construtor padrao

   /**
    * Construtor alternativo
    * @param texto - conteudo a ser inicializado
    */
   MyString ( std::string texto )
   {
      if ( texto.empty( ) )
      {
         // tratamento de erro
            setErro ( 1 );

         // setar conteudo
            conteudo = "";
      } // end if

      else
      {
         // tratamento de erro
            setErro ( 0 );

         // setar conteudo
            conteudo = texto;
      } // end else
   } // end construtor alternativo
   
   /**
    * Construtor alternativo por copia
    * @param origem - conteudo de origem
    */
   MyString ( MyString const &origem )
   {
      if ( origem.conteudo.empty( ) )
      {
         // tratamento de erro
            setErro ( 1 );

         // setar conteudo
            conteudo = "";
      } // end if

      else
      {
         // tratamento de erro
            setErro ( 0 );

         // setar conteudo
            conteudo = origem.conteudo;
      } // end else
   } // end construtor por copia

   /**
    * Atribuir conteudo
    * @param conteudo
    */
   void setConteudo ( std::string conteudo )
   {
      if ( conteudo.empty( ) )
      {
         // tratamento de erro
            setErro ( 1 );

         // setar conteudo
            conteudo = "";
      } // end if

      else
      {
         // tratamento de erro
            setErro ( 0 );

         // setar conteudo
            this->conteudo = conteudo;
      } // end else      
   } // end setConteudo

   /**
    * Obter conteudo
    */
   string getConteudo ( )
   {
      return ( this->conteudo );
   }

   /**
    * Converter conteudo em intiero, se possivel
    * @return valor inteiro equivalente, se valido;
              ( -1 ), caso contrario
    */
   int getInt ( )
   {
      // definir dados
         double a  = 0.0;
         double b  = 0.0;
         int    x  = 0;
         int    y  = 0;
         int    z  = 0;
         bool   OK = true;
         char   c  = '_';
         int    tmp[80];
      
      // testar se conteudo e' valido
         if ( ! conteudo.empty( ) )
         {
            y = conteudo.length( );
            for ( int i = 0; i < y; i = i+1 )
            {
               c =  conteudo[i];
               OK = OK && ( c <= '9' && '0' <= c );
               if ( OK )
               {
                  tmp[z] = ( (int)c ) - 48;
                  z = z+1;
               } // end while
            } // end for

            if ( OK )
            {
               for ( int k = z; k > 0 ; k = k-1 )
               {
                  a = a + ( 1.0 * tmp[k-1]) * pow ( 10.0 , b );
                  b = b+1.0;
               } // end for 
               x = (int)a;
            } // end if

            else
            {
               // setar resultado para ( - 1)
                   x  = -1;
  
                // mensagem de erro
                   setErro ( 2 );          
            } // end else 
         } // end if

         else
         {
            // setar resultado para ( - 1)
               x  = -1;

            // mensagem de erro
               setErro ( 1 );
         }
      // retornar valor
         return ( x );

   } // end getInt

   /**
    * Converter conteudo em real, se possivel
    * @return valor real equivalente, se valido;
              ( 0.0 ), caso contrario
    */
   double getDouble ( )
   {
      // definir dados
         double a  = 0.0;
         double b  = 0.0;
         int    i  = 0;
         int    y  = 0;
         int    z  = 0;
         bool   OK = true;
         bool   ok = true;
         char   c  = '_';
         int    tmp[80];
      
      // testar se conteudo e' valido
         if ( ! conteudo.empty( ) )
         {
            y = conteudo.length( );
            while ( ok && i < y)
            {
               // verificar se sao numeros ou ponto
               c  = conteudo[i];
               OK = OK && ( (c <= '9' && '0' <= c) || c == '.' );
               if ( OK && c != '.' )
               {
                  tmp[z] = ( (int)c ) - 48;
                  z = z+1;
               } // end while

               else
               // parar de repetir quando encontrar o ponto
               if ( OK && c == '.' )
               {
                  ok = false;
               } // end if
               i = i+1;
            } // end while

            if ( OK )
            {
               // calcular parte inteira
               for ( int k = z; k > 0 ; k = k-1 )
               {
                  a = a + ( 1.0 * tmp[k-1]) * pow ( 10.0 , b );
                  b = b+1.0;
               } // end for
               
               z = 0;
               while ( i < y )
               {
                  // continuar procurando os numeros
                  c  = conteudo[i];
                  OK = OK && ( c <= '9' && '0' <= c );
                  if ( OK )
                  {
                     tmp[z] = ( (int)c ) - 48;
                     z = z+1;
                     //cout << "\ndecimal = " << tmp[z-1] << endl;
                  } // end if
                  i = i+1;
               } // end while

               if ( OK )
               {
                  // calcular parte fracionaria
                  b = -1.0;
                  for ( int k = 0; k < z ; k = k+1 )
                  {
                     a = a + ( 1.0 * tmp[k]) * pow ( 10.0 , b );
                     b = b-1.0;
                  } // end for
               } // end if

               else
               {
                  // setar resultado para ( -0.0 )
                     a = 0.0;
  
                  // mensagem de erro
                     setErro ( 2 );                 
               } // end else
            } // end if

            else
            {
               // setar resultado para ( 0.0 )
                   a = 0.0;
  
                // mensagem de erro
                   setErro ( 2 );          
            } // end else 
         } // end if

         else
         {
            // setar resultado para ( 0.0 )
               a  = 0.0;

            // mensagem de erro
               setErro ( 1 );
         }
      // retornar valor
         return ( a );

   } // end getDouble

   /**
    * Converter conteudo em valor logico, se possivel
    * @return valor logico equivalente, se valido;
              ( -1 ), caso contrario
    */
   bool getBoolean ( )
   {
      // definir dados
         bool   x  = false;
      
      // testar se conteudo e' valido
         if ( ! conteudo.empty( ) )
         {
            // testar se true
               if ( conteudo == "true" || 
                    conteudo == "T"    || 
                    conteudo == "1"     )
                  x = true;
            
            // testar se false
               else
                  if ( conteudo == "false" || 
                       conteudo == "F"     || 
                       conteudo == "0"      )
                     x = false;
               
                  else
                     setErro ( 2 ); 
         } // end if

         else
         {
            x = false;
            setErro ( 1 );          
         } // end else

      // retornar valor
         return ( x );

   } // end getBoolean

   /**
    * Funcao para determinar se parametro esta' contido no conteudo
      AMOREIRA (AMOR)  = 1
      CELIA    (ALICE) = 0
    * @return true, se contiver ( em qualquer posicao );
              false, caso contrario
    */
   bool contains ( std::string texto )
   {
      // definir dados
         int s1  = 0;
         int s2  = 0;
         int i   = 0;
         int x   = 0;
         bool OK = false;
      
      // verificar existencia de dados
         if ( conteudo.empty( ) || 
               texto.empty( )    )
         {
            // erro de falta de dados
               OK = false;
               setErro ( 1 );
         } // end if

      // verificar se tamanhos sao validos
         else
         {
            s1 = conteudo.length( );
            s2 = texto.length( );

            if ( s1 < s2 )
            {
               // erro de tamanho invalido
                  OK = false;
                  setErro ( 3 );
            } // end if

            else
            {
               // comparar caracteres
                  while ( !OK && i < s1 )
                  {
                     OK = OK || ( conteudo[i] == texto[0] );
                     // cout << "\nconteudo[i] == texto[0]" << conteudo[i] << texto[0];
                     // pause ( "" );
                     i = i+1;
                  } // end for

                  if ( OK )
                  {
                     i = i-1;
                     while ( i < s1 && x < s2 )
                     {
                        OK = OK && ( conteudo[i] == texto[x] );
                        // cout << "\nconteudo[i] == texto[i]" << conteudo[i] << texto[x];
                        // pause ( "" );
                        i = i+1; x = x+1;
                     } // end while
                  } // end if      
            } // eld else
         } // end else
      
      // retornar
         return ( OK );
   } // end contains

   /**
    * Funcao para converter letras para maiusculas.
    * @return valor equivalente em maiusculas, se houver
              o proprio valor, caso contrario
    */
   std::string toUpperCase ( )
   {
      // definir dados
         int x = 0;
         string tmp;
      
      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         {
            // receber tamanho
               x = conteudo.length( );
               tmp = conteudo;
            
            // caso letra minuscula, trocar
               for ( int i = 0; i < x; i = i+1 )
               {
                  if ( tmp[i] >= 'a' && 'z' >= tmp[i] )
                  {
                     tmp[i] = ((char)(int)tmp[i]-32);
                  } // end if
               } // end for
         } //end else
      
      // retornar
         return ( tmp );
   } // end toUpperCase ( )

   /**
    * Funcao para converter letras para minusculas.
    * @return valor equivalente em maiusculas, se houver
              o proprio valor, caso contrario
    */
   std::string toLowerCase ( )
   {
      // definir dados
         int x = 0;
         string tmp;
      
      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         {
            // receber tamanho
               x = conteudo.length( );
               tmp = conteudo;
            
            // caso letra maiuscula, trocar
               for ( int i = 0; i < x; i = i+1 )
               {
                  if ( tmp[i] >= 'A' && 'Z' >= tmp[i] )
                  {
                     tmp[i] = ((char)(int)tmp[i]+32);
                  } // end if
               } // end for
         } //end else
      
      // retornar
         return ( tmp );
   } // end toLowerCase ( )

   /**
    * Funcao para trocar todas as ocorrencias de certo caractere por outro novo
    * @return valor com substituicoes, se houver
              o proprio valor, caso contrario
    */
   std::string replace ( char original, char novo )
   {
      // definir dados
         int x = 0;
         string tmp;
      
      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         {
            // receber tamanho
               x = conteudo.length( );
               tmp = conteudo;
            
            // caso letra, trocar
               for ( int i = 0; i < x; i = i+1 )
               {
                  if ( original == tmp[i] )
                  {
                     tmp[i] = novo;
                  } // end if
               } // end for

            // testar se trocou algo
               if ( tmp == conteudo )
               {
                  // erro de caractere nao encontrado
                     setErro ( 4 );
               }
         } //end else
      
      // retornar
         return ( tmp );
   } // end toUpperCase ( )

   /**
    * Funcao para separar todas as sequencias de caracteres separadas 
      por espaços em branco.
    * @param sequencia - arranjo para armazenar possiveis 
                         cadeias de caracteres identificadas
    * @return quantidade de sequencias de caracteres identificadas, se houver;
              zero, caso contrario
    */

   int split ( std::string sequencia [] )
   {
      // definir dados
         char c = '_';
         int  x = 0;
         int  y = 0;
         int  z = 0;

      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         { 
            // testar se ha' caracteres com espaco em branco
               y = conteudo.length ( );
               for ( int i = 0; i < y; i = i+1 )
               {
                  // copiar caractere
                     c = conteudo[i];
                     if ( c == ' ' )
                     {
                        x = x+1;
                        z = z+1;
                     } // end if
                     else
                     {
                        // copiar
                           sequencia[z] = sequencia[z] + c;
                     } // end else
               } // end for

            // testar
               if ( x == 0 )
               {
                  setErro ( 4 );
                  sequencia[0] = "";
               } // end if
               else
                  // corrgir conta, pois 1 espaco == 2 palavras
                  x = x+1;
         } // end else
      
      // retornar soma
         return ( x );
   } // end split ( )

   /**
    * Funcao para codificar o conteudo segundo a cifra de Cesar
    * @param chave - chave para codificacao
    * @return palavra codificada
    */
   std::string encrypt ( int chave )
   {
      // definir dados
         string tmp = "";
         bool   OK  = true;
         int    x   = 0;
         int    p   = 0;

      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         {
            if ( chave < 0 )
            {
               setErro ( 6 );
            } // end if

            else
            {
               x = conteudo.length( );
               int i = 0;
               while ( OK && i < x )
               {
                  OK = (OK && ( 'A' <= conteudo[i] && conteudo[i] <= 'Z' )) ||
                       (OK && ( 'a' <= conteudo[i] && conteudo[i] <= 'z' ));
                  i = i+1;
               } // end while
               
               if ( !OK )
               {
                  setErro ( 2 );
               } // end if

               else
               {
                  for ( int i = 0; i < x; i = i+1 )
                  {
                     // separar maiuscula
                     if ( 'A' <= conteudo[i] && conteudo[i] <= 'Z' )
                     {
                        p = (int)conteudo[i];
                        // cout << "\np = " << p << endl;
                        p = p + chave;
                        while ( p > 90 )
                        {
                           p = p-26;
                        } // end while
                        tmp = tmp + (char)p;
                     } // end if

                     // separar minuscula
                     else
                     {
                        p = (int)conteudo[i];
                        // cout << "\np = " << p << endl;
                        p = p + chave;
                        while ( p > 122 )
                        {
                           p = p-26;
                        } // end while
                        tmp = tmp + (char)p;
                     } // end else
                  } // end for              
               } // end else
            } // end else
         } // end else
      // retornar
         return ( tmp );

   } // end encrypt ( )

   /**
    * Funcao para decodificar o conteudo segundo a cifra de Cesar
    * @param chave - chave para decodificacao
    * @return palavra decodificada
    */
   std::string decrypt ( int chave )
   {
      // definir dados
         string tmp = "";
         bool   OK  = true;
         int    x   = 0;
         int    p   = 0;

      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         {
            if ( chave < 0 )
            {
               setErro ( 7 );
            } // end if

            else
            {
               x = conteudo.length( );
               int i = 0;
               while ( OK && i < x )
               {
                  OK = (OK && ( 'A' <= conteudo[i] && conteudo[i] <= 'Z' )) ||
                       (OK && ( 'a' <= conteudo[i] && conteudo[i] <= 'z' ));
                  i = i+1;
               } // end while
               
               if ( !OK )
               {
                  setErro ( 2 );
               } // end if

               else
               {
                  for ( int i = 0; i < x; i = i+1 )
                  {
                     // separar maiuscula
                     if ( 'A' <= conteudo[i] && conteudo[i] <= 'Z' )
                     {
                        p = (int)conteudo[i];
                        // cout << "\np = " << p << endl;
                        p = p - chave;
                        while ( p < 65 )
                        {
                           p = p+26;
                        } // end while
                        tmp = tmp + (char)p;
                     } // end if

                     // separar minuscula
                     else
                     {
                        p = (int)conteudo[i];
                        // cout << "\np = " << p << endl;
                        p = p - chave;
                        while ( p < 97 )
                        {
                           p = p+26;
                        } // end while
                        tmp = tmp + (char)p;
                     } // end else
                  } // end for              
               } // end else
            } // end else
         } // end else
      // retornar
         return ( tmp );

   } // end decrypt ( )

   /**
    * Procedimento para separar todas as sequencias de caracteres separadas
      por ponto
    * @param sequencia - arranjo para armazenar possiveis 
                         cadeias de caracteres identificadas
    */

   void fragment ( std::string sequencia [] )
   {
      // definir dados
         char c = '_';
         int  x = 0;
         int  y = 0;
         int  z = 0;

      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         { 
            // testar se ha' caracteres com ponto
               y = conteudo.length ( );
               for ( int i = 0; i < y; i = i+1 )
               {
                  // copiar caractere
                     c = conteudo[i];
                     if ( c == '.' )
                     {
                        x = x+1;
                        z = z+1;
                     } // end if
                     else
                     {
                        // copiar
                           sequencia[z] = sequencia[z] + c;
                     } // end else
               } // end for

            // testar se string somente com .
               if ( sequencia[z] == "" )
                  setErro ( 8 ); 
         } // end else
   } // end fragment ( )

   /**
    * Procedimento para inverter string do conteudo 
    */

   void invert ( )
   {
      // definir dados
         char   c   = '_';
         int    y   = 0  ;
         string tmp = "" ;

      // verificar existencia
         if ( conteudo.empty( ) )
         {
            // erro de falta de dados
               setErro ( 1 );
         } // end if

         else
         { 
            // testar se ha' caracteres com ponto
               y = conteudo.length ( );
               for ( int i = y-1; i >= 0; i = i-1 )
               {
                  // copiar caractere
                     c = conteudo[i];
                     tmp = tmp + c;
               } // end for

            // copiar conteudo invertido
               conteudo = tmp;
         } // end else
   } // end invert ( )

}; // end classe MyString
#endif