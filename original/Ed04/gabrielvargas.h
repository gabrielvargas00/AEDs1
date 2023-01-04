/**
   gabrielvargas_lib - v2022-1 - 11 /04 / 2020
   Author: Gabriel Vargas Bento de Souza

 */

// ---------------------- lista de dependencias

#include <stdio.h>     // para entradas e saidas
#include <stddef.h>    // para definicoes basicas
#include <stdlib.h>    // para a biblioteca padrao
#include <string.h>    // para cadeias de caracteres
#include <stdarg.h>    // para tratar argumentos
#include <stdbool.h>   // para definicoes logicas
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo
#include <wchar.h>     // para 16-bit characters


// FUNCAO PARA:

// --------------------- numeros inteiros

/**
 Funcao para determinar se valor inteiro e' positivo.
 @return true, se positivo; false, se zero ou negativo
 @param x - valor a ser testado
 */

bool positive ( int x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( x > 0 )
      {
         result = true;
      } // end if

      return ( result );
} // end positive ( )

/**
 Funcao para determinar se valor inteiro e' negativo.
 @return true, se negativo; false, se zero ou postivo
 @param x - valor a ser testado
 */

bool negative ( int x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( x < 0 )
      {
         result = true;
      } // end if

      return ( result );
} // end negative ( )

/**
 Funcao para determinar se valor inteiro e' nao positivo
 @return true, se nao positivo; false, se positivo
 @param x - valor a ser testado
 */

bool notPositive ( int x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( x <= 0 )
      {
         result = true;
      } // end if

      return ( result );
} // end notPositive ( )

/**
 Funcao para determinar se valor inteiro e' nao negativo
 @return true, se nao negativo; false, negativo
 @param x - valor a ser testado
 */

bool notNegative ( int x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( x >= 0 )
      {
         result = true;
      } // end if

      return ( result );
} // end notNegative ( )

/**
 Funcao para determinar se valor inteiro e' impar.
 @return true, se impar; false, se par
 @param x - valor a ser testado
 */

bool odd ( int x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( x % 2 != 0 )
      {
         result = true;
      } // end if

      return ( result );

} // end odd ( )

/**
 Funcao para determinar se valor inteiro e' par.
 @return true, se par; false, se impar
 @param x - valor a ser testado
 */

bool even ( int x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( x % 2 == 0 )
      {
         result = true;
      } // end if

      return ( result );

} // end even ( )

// --------------------- caracteres

/**
 Funcao para determinar se caractere e' letra maiuscula.
 @return true, se maiuscula; false, se nao maiuscula
 @param x - valor a ser testado
 */

bool isUpperCase ( char x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( 'A' <= x && x <= 'Z' )
      {
         result = true;
      } // end if

      return ( result );

} // end isUpperCase ( )

/**
 Funcao para determinar se caractere e' letra minuscula.
 @return true, se minuscula; false, se nao minuscula
 @param x - valor a ser testado
 */

bool isLowerCase ( char x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( 'a' <= x && x <= 'z' )
      {
         result = true;
      } // end if

      return ( result );

} // end isLowerCase ( )


/**
 Funcao para determinar se caractere e' letra.
 @return true, se letrs; false, se nao letra
 @param x - valor a ser testado
 */

bool isLetter ( char x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( ( 'a' <= x && x <= 'z' ) || ( 'A' <= x && x <= 'Z' ) )
      {
         result = true;
      } // end if

      return ( result );

} // end isLetter ( )

/**
 Funcao para determinar se caractere e' digito.
 @return true, se digito; false, caso contrario
 @param x - valor a ser testado
 */

bool isDigit ( char x )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( '0' <= x && x <= '9' )
      {
         result = true;
      } // end if

      return ( result );

} // end isDigit ( )

/**
 Funcao para determinar se caractere e' alfanumerico.
 @return true, se for; false, caso contrario
 @param x - valor a ser testado
 */

bool isAlfaNumber ( char x )
{
   // definir dado local
      bool result  = false;

   // testar a condicao
      if ( ( isDigit ( x ) ) || ( isLetter ( x ) ) )
      {
         result = true;
      } // end if

      return ( result );

} // end isAlfaNumber ( )

/**
 Funcao para determinar se caractere nao e' alfanumerico.
 @return true, se nao for; false, caso contrario
 @param x - valor a ser testado
 */

bool notAlfaNumber ( char x )
{
   // definir dado local
      bool result  = false;

   // testar a condicao
      if ( ! ( isAlfaNumber ( x ) ) )
      {
         result = true;
      } // end if

      return ( result );

} // end notAlfaNumber ( )

/**
 Funcao para determinar se caractere e' operador aritmrtico + - * / % 
 @return true, se for; false, caso contrario
 @param x - valor a ser testado
 */

bool isArithmeticOperator ( char x )
{
   // definir dado local
      bool result  = false;

   // testar a condicao
      if ( ( x == '+') ||
           ( x == '-') ||
           ( x == '*') ||
           ( x == '/') ||
           ( x == '%') )         
      {
         result = true;
      } // end if

      return ( result );

} // end isArithmeticOperator ( )

/**
 Funcao para determinar se caractere e' pontuacao . , ; : - _ ! ?
 @return true, se for; false, caso contrario
 @param x - valor a ser testado
 */

bool isPunctuation ( char x )
{
   // definir dado local
      bool result  = false;

   // testar a condicao
      if ( ( x == '.') ||
           ( x == ',') ||
           ( x == ';') ||
           ( x == ':') ||
           ( x == '-') ||
           ( x == '_') ||
           ( x == '!') ||
           ( x == '?') )         
      {
         result = true;
      } // end if

      return ( result );

} // end isPunctuation ( )

/**
 Funcao para determinar se caractere e' ( ) [ ] { }
 @return true, se for; false, caso contrario
 @param x - valor a ser testado
 */

bool isParenBrackBrace ( char x )
{
   // definir dado local
      bool result  = false;

   // testar a condicao
      if ( ( x == '(') ||
           ( x == ')') ||
           ( x == '[') ||
           ( x == ']') ||
           ( x == '{') ||
           ( x == '}') )         
      {
         result = true;
      } // end if

      return ( result );

} // end isParenBrackBrace ( )

/**
 Funcao para contar caracteres na cadeia
 @return tamanho da cadeira de caracteres
 @param text - texto a ser lido
 */

int countChars ( chars text )
{
   // definir dado local
      int  tamanho   =  0 ;

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // retornar tamanho
      return ( tamanho );

} // end countChars ( )

/**
 Funcao para ler caracteres e mostrar quantos sao digitos e pares
 @return quantidade de digitos pares
 @param text - texto a ser lido
 */

int evenChars ( chars text )
{
   // definir dado local
      int  tamanho  =  0 ;
      int  posicao  =  0 ;
      char simbolo  = '_';
      int  contador =  0 ;
      int  inteiro  =  0 ;

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];
         
         // testar se e' digito
            if ( isDigit ( simbolo ) )
            {
               // transformar caractere em inteiro
                  inteiro =  ( ( (int) simbolo ) - 48 ) ;

               // testar se e' par
                  if ( even ( inteiro ) )
                  {
                     contador = contador + 1;
                  } // end if
            } // end if

       } // end for

   // retornar tamanho
      return ( contador );

} // end evenChars ( )

/**
 Funcao para conferir se cadeia e' vazia
 @return true, se for; fase, caso contrario
 @param text - texto a ser lido
 */

bool charsIsEmpty ( chars text )
{
   // definir dado local
      int  tamanho   =  0 ;
      bool result    =  false;

      chars palavra  = IO_new_chars ( STR_SIZE );
      strcpy ( palavra, STR_EMPTY );

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );
   
   // testar se vazio
      if ( tamanho == 0 )
      {
         result = true;
      }

   // retornar resultado
      return ( result );

} // end charsIsEmpty ( )

/**
 Funcao para mostrar simbolos nao alfanumericos na cadeia
 @return cadeia formada pelos caracteres especiais
 @param text - texto a ser lido
 */

chars printNotAlfaNumbers ( chars text )
{
   // definir dado local
      int  tamanho   =  0 ;
      int  posicao   =  0 ;
      char simbolo   = '_';

      chars palavra  = IO_new_chars ( STR_SIZE );
      strcpy ( palavra, STR_EMPTY );

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar nao e' alfanumerico
            if ( notAlfaNumber ( simbolo ) )
            {
               // concatenar caractere valido
                  palavra = IO_concat ( palavra, IO_toString_c ( simbolo ) );

            } // end if

       } // end for

   // testar se "palavra" esta' vazio
      if ( charsIsEmpty ( palavra ) )
      {
         strcpy ( palavra, "NAO HA'" );
      } // end if

   // retornar resposta
      return ( palavra );

} // end printNotAlfaNumbers ( )

/**
 Funcao para mostrar simbolos alfanumericos na cadeia. Caso nao haja: "NAO HA'"
 @return cadeia formada pelos caracteres especiais
 @param text - texto a ser lido
 */

chars printAlfaNumbers ( chars text )
{
   // definir dado local
      int  tamanho   =  0 ;
      int  posicao   =  0 ;
      char simbolo   = '_';

      chars palavra  = IO_new_chars ( STR_SIZE );
      strcpy ( palavra, STR_EMPTY );

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar e' alfanumerico
            if ( isAlfaNumber ( simbolo ) )
            {
               // concatenar caractere valido
                  palavra = IO_concat ( palavra, IO_toString_c ( simbolo ) );

            } // end if

       } // end for

   // testar se "palavra" esta' vazio
      if ( charsIsEmpty ( palavra ) )
      {
         strcpy ( palavra, "NAO HA'" );
      } // end if

   // retornar resposta
      return ( palavra );

} // end printAlfaNumbers ( )

/**
 Funcao para mostrar simbolos alfanumericos na cadeia
 @return cadeia formada pelos caracteres especiais
 @param text - texto a ser lido
 */

chars printAlfaNumbers2 ( chars text )
{
   // definir dado local
      int  tamanho   =  0 ;
      int  posicao   =  0 ;
      char simbolo   = '_';

      chars palavra  = IO_new_chars ( STR_SIZE );
      strcpy ( palavra, STR_EMPTY );

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar e' alfanumerico
            if ( isAlfaNumber ( simbolo ) )
            {
               // concatenar caractere valido
                  palavra = IO_concat ( palavra, IO_toString_c ( simbolo ) );

            } // end if

       } // end for

   // retornar resposta
      return ( palavra );

} // end printAlfaNumbers2 ( )

/**
 Funcao para contar simbolos alfanumericos na cadeia
 @return cadeia formada pelos caracteres especiais
 @param text - texto a ser lido
 */

int countAlfaNumbers ( chars text )
{
   // definir dado local
      int  tamanho    =  0 ;
      int  posicao    =  0 ;
      char simbolo    = '_';
      int  quantidade =  0 ;

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar nao e' alfanumerico
            if ( isAlfaNumber ( simbolo ) )
            {
               // contar caracteres
                  quantidade = quantidade + 1;
            } // end if

       } // end for

   // retornar resposta
      return ( quantidade );

} // end countAlfaNumbers ( )

/**
 Funcao para contar os digitos na cadeia
 @return quantidade de digitos da cadeia
 @param text - texto a ser lido
 */

int countDigits ( chars text )
{
   // definir dado local
      int  tamanho    =  0 ;
      int  posicao    =  0 ;
      char simbolo    = '_';
      int  quantidade =  0 ;

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar nao e' alfanumerico
            if ( isDigit ( simbolo ) )
            {
               // contar caracteres
                  quantidade = quantidade + 1;
            } // end if

       } // end for

   // retornar resposta
      return ( quantidade );

} // end countDigits ( )

/**
 Funcao para: contar e mostrar simbolos alfanumericos na cadeia certa quantidade de vezes; 
              retornar o total de todas as palavras lidas.
 @return tamanho da cadeia formada pelos caracteres alafanumericos totais
 @param quantidade - quantidade de vezes de repetição
 */

int countAndPrintAlfaNumbers ( int quantidade )
{
   // definir dado local
       chars leitura  = IO_new_chars ( STR_SIZE );
       chars text     = IO_new_chars ( STR_SIZE );
       chars palavra  = IO_new_chars ( STR_SIZE );

       int contador   = 0;
       int inicio     = 0;
       int tamanho    = 0;

      strcpy ( leitura, STR_EMPTY );
      strcpy ( text, STR_EMPTY );
      strcpy ( palavra, STR_EMPTY );


   // repetir para a quantidade de vezes informada

      for ( inicio = 0; inicio < quantidade; quantidade = quantidade - 1 )
      {
         // contar e mostrar cada uma das cadeias
            text     = IO_readstring ( "\nEntrar com uma sequencia de caracteres: " );
            leitura  = printAlfaNumbers2 ( text );
            contador = countAlfaNumbers  ( text );
            IO_printf ( "- Ha' %d caracteres alfanumericos nesta cadeia: %s\n", contador, leitura );

         // concatenar cadeia lida à cadeia principal
            palavra = IO_concat ( palavra, leitura );

       } // end for
   
   // contar tamanho da nova cadeia
      tamanho = strlen ( palavra );

   // retornar resposta
      return ( tamanho );

} // end countAndPrintAlfaNumbers ( )


/**
 Funcao para: contar e mostrar simbolos alfanumericos na cadeia 
              certa quantidade de vezes (incluindo espacoes em branco);
              retornar o total de todas as palavras lidas.
 @return tamanho da cadeia formada pelos caracteres alafanumericos totais
 @param quantidade - quantidade de vezes de repetição
 */

int countAndPrintAlfaNumbersBlank ( int quantidade )
{
   // definir dado local
      chars leitura  = IO_new_chars ( STR_SIZE );
      chars text     = IO_new_chars ( STR_SIZE );
      chars palavra  = IO_new_chars ( STR_SIZE );

      int contador   = 0;
      int inicio     = 0;
      int tamanho    = 0;

      strcpy ( leitura, STR_EMPTY );
      strcpy ( text, STR_EMPTY );
      strcpy ( palavra, STR_EMPTY );


   // repetir para a quantidade de vezes informada

      for ( inicio = 0; inicio < quantidade; quantidade = quantidade - 1 )
      {
         // contar e mostrar cada uma das cadeias
            text     = IO_readln ( "\nEntrar com uma sequencia de caracteres: " );
            leitura  = printAlfaNumbers2 ( text );
            contador = countAlfaNumbers  ( text );
            IO_printf ( "- Ha' %d caracteres alfanumericos nesta cadeia: %s\n", contador, leitura );

         // concatenar cadeia lida à cadeia principal
            palavra = IO_concat ( palavra, leitura );

       } // end for
   
   // contar tamanho da nova cadeia
      tamanho = strlen ( palavra );

   // retornar resposta
      return ( tamanho );

} // end countAndPrintAlfaNumbersBlank ( )

/**
 Funcao para ler duas cadeias de caracteres e mostrar qual tem mais digitos
 @return - cadeia com mais digitos
 @param text1 - texto 1 a ser lido
 @param text2 - texto 2 a ser lido
 */

chars charsWithMoreDigits ( chars text1, chars text2 )
{
   // definir dado local
      int contador1  = 0;
      int contador2  = 0;

      chars resposta  = IO_new_chars ( STR_SIZE );
      strcpy ( resposta, STR_EMPTY );

   // ler e contar digitos da cadeia 1
      text1     = IO_readln ( "\nEntrar com a sequencia de caracteres 1: " );
      contador1 = countDigits ( text1 );

   // ler e contar digitos da cadeia 2
      text2 = IO_readln ( "\nEntrar com a sequencia de caracteres 2: " );
      contador2 = countDigits ( text2 );

   // testar qual valor é maior
      if ( contador1 != contador2 )
      {
         if ( contador1 > contador2 )
         {
            resposta = IO_concat ( resposta, "A sequencia 1 possui mais digitos que a 2" );
         } // end if
         else
         {
            strcpy ( resposta, "A sequencia 2 possui mais digitos que a 1" );
         } // end else
      } // end if

      else
      {
         if ( contador1 == 0)
         {
            strcpy ( resposta, "Nenhuma sequencia possui digitos" );
         } // end if
         else
         {
            resposta = IO_concat ( resposta, "Ambas as sequencias possuem a mesma quantidade de digitos" );
         } // end else
      } // end else

   // retornar resposta
      return ( resposta );

} // end charsWithMoreDigits ( )

// --------------------- pentencimento a intervalos

/**
 Funcao para determinar se valor real pertence a intervalo aberto.
 @return true, se pertencer; false, caso contrario
 @param x        - valor a ser testado
 @param inferior - limite inferior
 @param superior - limite superior
 */

bool belongsToAOpenRange_f ( double x, double inferior, double superior )
{
    // definir dado local
       bool result = false;

    // testar a condicao
       if ( ( inferior < x ) && ( x < superior ) )
       {
           result = true;
       } // end if

       return ( result );
} // end belongsToAOpenRange_f ( )

/**
 Funcao para determinar se valor real pertence a intervalo fechado.
 @return true, se pertencer; false, caso contrario
 @param x        - valor a ser testado
 @param inferior - limite inferior
 @param superior - limite superior
 */

bool belongsToAClosedRange_f ( double x, double inferior, double superior )
{
    // definir dado local
       bool result = false;

    // testar a condicao
       if ( ( inferior <= x ) && ( x <= superior ) )
       {
           result = true;
       } // end if

       return ( result );
} // end belongsToAClosedRange_f ( )

/**
 Funcao para determinar se caractere pertence a intervalo fechado.
 @return true, se positivo; false, se negativo
 @param x        - caractere a ser testado
 @param inferior - limite inferior
 @param superior - limite superior
 */

bool belongsToAClosedRange_c ( char x, char inferior, char superior )
{
   // definir dado local
      bool result = false;

   // testar a condicao
      if ( inferior <= x && x <= superior )
      {
         result = true;
      } // end if

      return ( result );

} // end belongsToAClosedRange_c ( )

/**
 Funcao para contar caracteres dentro de intervalo fechado na cadeia
 @return tamanho da cadeira de caracteres
 @param text     - texto a ser lido
 @param inferior - limite inferior
 @param superior - limite superior
 */

int countCharsIn ( chars text, char inferior, char superior)
{
   // definir dado local
      int  tamanho   =  0 ;
      int  posicao   =  0 ;
      char simbolo   = '_';
      int  contador  =  0 ;

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar e contar se caractere e' letra minuscula
            if ( belongsToAClosedRange_c ( simbolo, inferior, superior ) )
            {
               // contar
                 contador = contador + 1;
            } // end if

       } // end for

   // retornar tamanho
      return ( contador );

} // end countCharsIn ( )

/**
 Funcao para contar caracteres dentro de dois intervalos fechados na cadeia
 @return tamanho da cadeira de caracteres
 @param text      - texto a ser lido
 @param inferior1 - limite inferior 1
 @param superior1 - limite superior 2
 @param inferior2 - limite inferior 1
 @param superior2 - limite superior 2
 */

int countCharsIn2 ( chars text, char inferior1, char superior1, char inferior2, char superior2 )
{
   // definir dado local
      int  tamanho   =  0 ;
      int  posicao   =  0 ;
      char simbolo   = '_';
      int  contador  =  0 ;

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar e contar se caractere e' letra minuscula
            if ( ( belongsToAClosedRange_c ( simbolo, inferior1, superior1 ) ) ||
                 ( belongsToAClosedRange_c ( simbolo, inferior2, superior2 ) ) )
            {
               // contar
                 contador = contador + 1;
            } // end if

       } // end for

   // retornar tamanho
      return ( contador );

} // countCharsIn2 ( )

/**
 Funcao para mostrar caracteres dentro de intervalo fechado na cadeia
 @return cadeia formada pelos caracteres dentro do intervalo
 @param text     - texto a ser lido
 @param inferior - limite inferior
 @param superior - limite superior
 */

chars printCharsIn ( chars text, char inferior, char superior )
{
   // definir dado local
      int  tamanho   =  0 ;
      int  posicao   =  0 ;
      char simbolo   = '_';

      chars palavra  = IO_new_chars ( STR_SIZE );
      strcpy ( palavra, STR_EMPTY );

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar e contar se caractere e' letra minuscula
            if ( belongsToAClosedRange_c ( simbolo, inferior, superior ) )
            {
               // concatenar caractere valido
                  palavra = IO_concat ( palavra, IO_toString_c ( simbolo ) );

            } // end if

       } // end for

   // retornar tamanho
      return ( palavra );

} // end printCharsIn ( )

/**
 Funcao para mostrar caracteres dentro de dois intervalos fechados na cadeia
 @return cadeia formada pelos caracteres dentro do intervalo
 @param text - texto a ser lido
 @param inferior1 - limite inferior 1
 @param superior1 - limite superior 2
 @param inferior2 - limite inferior 1
 @param superior2 - limite superior 2
 */

chars printCharsIn2 ( chars text, char inferior1, char superior1, char inferior2, char superior2 )
{
   // definir dado local
      int  tamanho   =  0 ;
      int  posicao   =  0 ;
      char simbolo   = '_';

      chars palavra  = IO_new_chars ( STR_SIZE );
      strcpy ( palavra, STR_EMPTY );

   // determinar a quantidade de simbolos na palavra
       tamanho = strlen ( text );

   // repetir para a quantidade de vezes informada

      for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
      {
         // isolar um simbolo por vez
            simbolo = text [ posicao ];

         // testar e contar se caractere e' letra minuscula
            if ( ( belongsToAClosedRange_c ( simbolo, inferior1, superior1 ) ) ||
                 ( belongsToAClosedRange_c ( simbolo, inferior2, superior2 ) ) )
            {
               // concatenar caractere valido
                  palavra = IO_concat ( palavra, IO_toString_c ( simbolo ) );

            } // end if

       } // end for

   // retornar tamanho
      return ( palavra );

} // end printCharsIn2 ( )

// --------------------- converter valores

/**
 Funcao para converter real para caracteres.
 @return cadeia com o resultado
 @param x     - valor real (mostrando apenas 1 casa decimal)
 */
chars IO_toString_f2 ( double x )
{                               // variante do printf( )
    chars buffer = IO_new_chars ( STR_SIZE+1 );
    sprintf ( buffer, "%0.1lf", x );
    return  ( buffer );
} // fim IO_toString_f2 ( )