/*
  Contact2.hpp - v 0.0. - 16 / 06 / 2022
  Author : Gabriel Vargas Bento de Souza
*/

// --------------------------------------------------------- definicoes globais

#ifndef _CONTACT2_H_
#define _CONTACT2_H_

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

// incluir biblioteca de erro
#include "Erro.hpp"

// ------------------------------------------------------- definicoes de classe

/**
 * Classe para tratar contatos, derivada da classe ERRO.
 */

class Contact2: public Erro
{
    /**
     * Atributos privados
     */
    private:
       int   dados =3;
       string nome   ;
       string fone1  ;
       string fone2  ;

       string fones[10];
    
    /**
     * Definicoes publicas.
     */
    public:

    /**
     * Destutor.
     */
    ~Contact2 ( )
    { }

    /**
     * Construtor padrao.
     */
    Contact2 ( )
    {
        // tratamento de erro
           setErro ( 0 );  // nenhum erro ainda

        // atribuir valores iniciais vazios
           nome  = "";
           fone1 = "";
           fone2 = "";

           for ( int i = 0; i < 10; i = i+1 )

    } // end construtor padrao

    /**
     * Construtor alternativo
     * @param nome_inicial  - nome a ser atribuido
     * @param fone1_inicial - fone a ser atribuido 1
     * @param fone2_inicial - fone a ser atribuido 2
     */
    Contact2 ( std::string nome_inicial, std::string fone1_inicial, std::string fone2_inicial )
    {
        // tratamento de erro
           setErro ( 0 );  // nenhum erro ainda

        // atribuir valores iniciais    
           nome  = nome_inicial;
           fone1 = fone1_inicial;
           fone2 = fone2_inicial;
    } // end constutor alternativo


    /**
     * Construtor alternativo baseado em copia
     * @param another 
     */
    Contact2 ( Contact2 const &another )
    {
        // tratamento de erro
           setErro ( 0 );  // nenhum erro ainda

        // atribuir valores iniciais    
           setNome  ( another.nome );
           setFone1 ( another.fone1 );
           setFone2 ( another.fone2 );

    } // end constutor alternativo

// -------------------------------------------------------- metodos para acesso

    /**
     * Metodo para atribuir nome.
     * @param nome - nome a ser atribuido
     */
    void setNome ( std::string nome )
    {
        if ( nome.empty( ) )
           setErro ( 1 );  // nome invalido
        else
           this->nome = nome;
    } // end setNome ( )

    /**
     * Metodo para atribuir telefone.
     * @param fone1 - telefone a ser atribuido1
     */
    void setFone1 ( std::string fone1 )
    {
        if ( fone1.empty( ) )
           setErro ( 2 );  // fone invalido
        else
           this->fone1 = fone1;
    } // end setFone1 ( )

    /**
     * Metodo para atribuir telefone.
     * @param fone - telefone a ser atribuido2
     */
    void setFone2 ( std::string fone2 )
    {
        if ( fone2.empty( ) )
           setErro ( 3 );  // fone invalido
        else
           this->fone2 = fone2;
    } // end setFone2 ( )

    /**
     * Metodo para, caso tenha apenas o fone1, adicionar o segundo
     */
    void setFone2a ( )
    {
        if ( fone2.empty( ) )
        {
           // perguntar se deseja add o fone2
              int n = 0;
              cout << 
              "\nHa' apenas o telefone1 cadastrado. Deseja adicionar o segundo?" 
              << endl;
              cout << "1 - SIM\n2 - NAO\n";
              cin >> n;
           
           // testar valor
              while ( n != 1 && n != 2 )
              {
                 cout << "\nERRO: Valor invalido!\n";
                 cout << "1 - SIM\n2 - NAO\n";
                 cin >> n;
              } // end while
           
           if ( n == 1 )
           {
              string numero;
              cout << "Entre com o numero: "; cin >> numero;
              this->setFone2 ( numero );

              while ( ! this->isFone2( ) )
              {
                 cout << "ERRO: Telefone invalido!\n";
                 cout << "\nEntre com o numero: "; cin >> numero;
                 this->setFone2 ( numero );
              } // end while
           } // end if

           else
              cout << "Telefone unico mantido!\n";
        } // end if

        else
        {
           cout << "Ja' existem dois telefones cadastrados!";
        } // end else

    } // end setFone2a ( )

    /**
     * Metodo para, caso tenha o fone2, altera-lo
     */
    void setFone2b ( )
    {
        if ( (!fone2.empty( ) ) && 
             (!fone1.empty( ) ) )
        {
           // perguntar se deseja alterar fone2 
              int n = 0;
              cout << 
              "\nDeseja alterar segundo telefone?" 
              << endl;
              cout << "1 - SIM\n2 - NAO\n";
              cin >> n;
           
           // testar valor
              while ( n != 1 && n != 2 )
              {
                 cout << "\nERRO: Valor invalido!\n";
                 cout << "1 - SIM\n2 - NAO\n";
                 cin >> n;
              } // end while
           
           if ( n == 1 )
           {
              string numero;
              cout << "Entre com o numero: "; cin >> numero;
              this->setFone2 ( numero );

              while ( ! this->isFone2( ) )
              {
                 cout << "ERRO: Telefone invalido!\n";
                 cout << "\nEntre com o numero: "; cin >> numero;
                 this->setFone2 ( numero );
              } // end while
           } // end if

           else
              cout << "Segundo telefone mantido!\n";
        } // end if

        else
        {
           cout << "ERRO: Nao ha os dois telefones cadastrados!";
        } // end else

    } // end setFone2b ( )

    /**
     * Metodo para, caso tenha 2 telefones, apagar o fone2
     */
    void setFone2c ( )
    {
        if ( (!fone2.empty( ) ) && 
             (!fone1.empty( ) ) )
        {
           // perguntar se deseja apagar fone2 
              int n = 0;
              cout << 
              "\nDeseja apagar o segundo telefone?" 
              << endl;
              cout << "1 - SIM\n2 - NAO\n";
              cin >> n;
           
           // testar valor
              while ( n != 1 && n != 2 )
              {
                 cout << "\nERRO: Valor invalido!\n";
                 cout << "1 - SIM\n2 - NAO\n";
                 cin >> n;
              } // end while
           
           if ( n == 1 )
           {
            //   this->setFone2 ( "" );
              fone2 = "";
              cout << "Telefone apagado com sucesso!\n";
           } // end if

           else
              cout << "Telefones mantidos!\n";
        } // end if

        else
        {
           cout << "ERRO: Nao ha os dois telefones cadastrados!";
        } // end else

    } // end setFone2c ( )

    /**
     * Funcao para obter nome
     * @return nome armazenado.
     */
    string getNome ( )
    {
        return ( this->nome);
    } // end getNome ( )

    /**
     * Funcao para obter telefone
     * @return fone armazenado.
     */
    string getFone1 ( )
    {
        return ( this->fone1);
    } // end getFone1 ( )

    /**
     * Funcao para obter telefone
     * @return fone armazenado.
     */
    string getFone2 ( )
    {
        return ( this->fone2);
    } // end getFone2 ( )

    /**
     * Funcao para obter dados de uma pessoa.
     * @return dados de uma pessoa
     */
    string toString ( )
    {
        return ( "{ "+getNome( )+", "+getFone1( )+", "+getFone2( )+" }" );
    } // end toString

    /**
     * Funcao para indicar existencia de erro
     * @return true se tiver; false, caso contrario
     */
    bool hasErro ( )
    {
        return ( getErro() !=  0 );
    } // end hasErro ( )
    
    /**
     * Procedimento para ler nome do  do teclado
     * @param text - texto para chamar a leitura
     */
    void readNome ( std::string text )
    {
        // definir dados
           string tmp_nome;
        
        // ler nome do teclado
           cout << endl << text;
           cin  >> tmp_nome;
        
        // testar se nome vazio
           while ( tmp_nome.empty( ) )
           {
               cout<< endl << "ERRO: Nome Invalido\n\n" << text;
               cin >> tmp_nome;
           } // end while
        
        // atribuir nome
           this->setNome ( tmp_nome );
    } // end readNome

    /**
     * Procedimento para ler fone do contato do teclado
     * @param text - texto para chamar a leitura
     */
    void readFone1 ( std::string text )
    {
        // definir dados
           string tmp_fone;
        
        // ler nome do teclado
           cout << endl << text;
           cin  >> tmp_fone;
        
        // testar se nome vazio
           while ( tmp_fone.empty( ) )
           {
               cout<< endl << "ERRO: Fone Invalido\n\n" << text;
               cin >> tmp_fone;
           } // end while
        
        // atribuir nome
           this->setFone1 ( tmp_fone );
    } // end readFone

    /**
     * Procedimento para ler fone do contato do teclado
     * @param text - texto para chamar a leitura
     */
    void readFone2 ( std::string text )
    {
        // definir dados
           string tmp_fone;
        
        // ler nome do teclado
           cout << endl << text;
           cin  >> tmp_fone;
        
        // testar se nome vazio
           while ( tmp_fone.empty( ) )
           {
               cout<< endl << "ERRO: Fone Invalido\n\n" << text;
               cin >> tmp_fone;
           } // end while
        
        // atribuir nome
           this->setFone2 ( tmp_fone );
    } // end readFone

    /**
     * Funcao para dizer se caractere e digito ou "-"
     * @param c - caractere a ser testado
     * @return true, se for; false, caso contrario
     */
    bool telefone ( char c )
    {
        return ( ('0' <= c && c <= '9') || c == '-' );
    } // end telefone

    /**
     * Funcao para dizer se 1 telefone e' valido
     */
    bool isFone1 ( void )
    {
        // definir dados
           bool OK = true;
        
        // testar se telefone e' valido
           if ( ! fone1.empty( ) )
           {
               for ( int i = 0; i < fone1.length( ); i = i+1 )
               {
                   OK = OK && this->telefone( fone1[i] );
               }
           } // end if

           else
              OK = false;

        // retornar resultado
           return ( OK );

    } // end ifFone1

    /**
     * Funcao para dizer se 2 telefone e' valido
     */
    bool isFone2 ( void )
    {
        // definir dados
           bool OK = true;
        
        // testar se telefone e' valido
           if ( ! fone2.empty( ) )
           {
               for ( int i = 0; i < fone2.length( ); i = i+1 )
               {
                   OK = OK && this->telefone( fone2[i] );
               }
           } // end if

           else
              OK = false;

        // retornar resultado
           return ( OK );

    } // end ifFone1

    /**
     * Procedimento para salvar em arquivo as infromacoes de um contato
     * @param fileName - arquivo de destino
     */
    void toFile ( std::string fileName )
    {
        // definir dados
           ofstream arq_contato;
           arq_contato.open ( fileName );
        
        // gravar dados
           arq_contato << dados << endl;
           arq_contato << this->getNome ( ) << endl;
           arq_contato << this->getFone1( ) << endl;
           arq_contato << this->getFone2( ) << endl;
    } // end toFile
    
    /**
     * Procedimento para ler de arquivo as informacoes de um contato
     * @param fileName - arquivo de origem
     */
    void fromFile ( std::string fileName )
    {
        // definir dados
           int n = 0;
           string tmp;

           ifstream arq_contato;
           arq_contato.open ( fileName );

        // ler arquivo
           arq_contato >> n;

           if ( n == dados )
           {
               arq_contato >> tmp;
               this->setNome( tmp );
               arq_contato >> tmp;
               this->setFone1( tmp );
               arq_contato >> tmp;
               this->setFone2( tmp );
           } // end if

           else
           {
               this->setNome ( "" );
               this->setFone1( "" );          
               this->setFone2( "" );  
               cout << "\nERROR: Invalid dada\n";      
           }
    } // end fromFile
    
    /**
     * Funcao dizer quantos telefones estao associados a certo contato
     * @return quantidade (0, 1 ou 2) 
     */
    int telefones ( )
    {
       // definir dados
          int x = 0;
       
       // obter quantidade
          if ( !fone1.empty( ) )
          {
             x = x+1;
          } // end if

          if ( !fone2.empty( ) )
          {
             x = x+1;
          } // end if
       
       return ( x );
    } // end telefones

}; // end class Contact2

using ref_Contact2 = Contact2*; // similar a typedef Contact2* ref_Contact2

#endif