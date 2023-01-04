/*
  Contato.hpp - v 0.0. - 16 / 06 / 2022
  Author : Gabriel Vargas Bento de Souza
*/

// --------------------------------------------------------- definicoes globais

#ifndef _CONTATO_H_
#define _CONTATO_H_

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

// ------------------------------------------------------- definicoes de classe

/**
 * Classe para tratar contatos, derivada da classe ERRO.
 */

class Contato: public Erro
{
    /**
     * Atributos privados
     */
    private:
       string nome;
       string fone;
    
    /**
     * Definicoes publicas.
     */
    public:

    /**
     * Destutor.
     */
    ~Contato ( )
    { }

    /**
     * Construtor padrao.
     */
    Contato ( )
    {
        // tratamento de erro
           setErro ( 0 );  // nenhum erro ainda

        // atribuir valores iniciais vazios
           nome = "";
           fone = "";
    } // end construtor padrao

    /**
     * Construtor alternativo
     * @param nome_inicial - nome a ser atribuido
     * @param fone_inicial - fone a ser atribuido
     */
    Contato ( std::string nome_inicial, std::string fone_inicial )
    {
        // tratamento de erro
           setErro ( 0 );  // nenhum erro ainda

        // atribuir valores iniciais    
           nome = nome_inicial;
           fone = fone_inicial;
    } // end constutor alternativo


    /**
     * Construtor alternativo baseado em copia
     * @param another 
     */
    Contato ( Contato const &another )
    {
        // tratamento de erro
           setErro ( 0 );  // nenhum erro ainda

        // atribuir valores iniciais    
           setNome ( another.nome );
           setFone ( another.fone );

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
     * @param fone - telefone a ser atribuido
     */
    void setFone ( std::string fone )
    {
        if ( fone.empty( ) )
           setErro ( 2 );  // fone invalido
        else
           this->fone = fone;
    } // end setFone ( )
    
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
    string getFone ( )
    {
        return ( this->fone);
    } // end getFone ( )

    /**
     * Funcao para obter dados de uma pessoa.
     * @return dados de uma pessoa
     */
    string toString ( )
    {
        return ( "{ "+getNome( )+", "+getFone( )+" }" );
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
     * Procedimento para ler nome do contato do teclado
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
    void readFone ( std::string text )
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
           this->setFone ( tmp_fone );
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
     * Funcao para dizer se telefone e' valido
     */
    bool isFone ( void )
    {
        // definir dados
           bool OK = true;
        
        // testar se telefone e' valido
           if ( ! fone.empty( ) )
           {
               for ( int i = 0; i < fone.length( ); i = i+1 )
               {
                   OK = OK && this->telefone( fone[i] );
               }
           } // end if

           else
              OK = false;

        // retornar resultado
           return ( OK );

    } // end ifFone
    
    /**
     * Procedimento para salvar em arquivo as infromacoes de um contato
     * @param fileName - arquivo de destino
     */
    void toFile ( std::string fileName )
    {
        // definir dados
           int n = 2; // nome e fone
           ofstream arq_contato;
           arq_contato.open ( fileName );
        
        // gravar dados
           arq_contato << n << endl;
           arq_contato << this->getNome( ) << endl;
           arq_contato << this->getFone( ) << endl;
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

           if ( n == 2 )
           {
               arq_contato >> tmp;
               this->setNome( tmp );
               arq_contato >> tmp;
               this->setFone( tmp );
           } // end if

           else
           {
               this->setNome( "" );
               this->setFone( "" );          
           }
    }

}; // end class Contato

using ref_Contato = Contato*; // similar a typedef Contato* ref_Contato

#endif