/*
Exemplo0819 - v0.0. - 22 / 05 / 2022
Author: Gabriel Vargas Bento de Souza
*/

// dependencias
   #include "io.h"

/**
 Method00 - Nao faz nada.
 */

void method00 ( )
{
    // nao faz nada
} // end method00 ( )

/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param n      - quantidade de valores
 @param array  - grupo de valores inteiros
*/

void printIntArray ( int n, int array [ ] )
{
   // definir dado local
      int x = 0;
   
   // mostrar valores no arranjo
      for ( x=0; x<n; x=x+1 )
      {
         // mostrar valor
            IO_printf ( "%2d: %d\n", x, array [ x ] );
      } // end for

} // end printIntArray ( )

/**
Method01 - Mostrar valores inteiros de um arranjo
*/
void method01 ( )
{
   // definir dado
      int array [ ] = {1, 2, 3, 4, 5};

   // identificar
      IO_id ( "Exemplo0819 - Method01 - v0.0" );
    
   // executar metodo auxiliar
      printIntArray ( 5, array );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( ) 

/**
 readIntArray - Ler arranjo com valores inteiros.
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/

void readIntArray ( int n, int array [ ] )
{
    // definir dados locais
       int   x    = 0;
       int   y    = 0;
       chars text = IO_new_chars ( STR_SIZE );
    
    // ler e guardar valores em arranjo
       for ( x=0; x<n; x=x+1 )
       {
           // ler valor
              strcpy ( text, STR_EMPTY );
              y = IO_readint ( IO_concat (
                               IO_concat ( text, IO_toString_d ( x ) ), " : " ) );
          
           // guardar valor
              array [ x ] = y;
       } // end for

} // end readIntArray ( )

/**
 Method02 - Ler e mostrar valores inteiros de um arranjo
 */

void method02 ( )
{
   // definir dados
      int n     =  5 ;
      int array [ n ]; 

   // identificar
      IO_id ( "Exemplo0819 - Method02 - v0.0" );
   
   // ler dados
      readIntArray  ( n, array );

   // mostrar dados
      IO_printf     (   "\n"   );
      printIntArray ( n, array );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 fprintIntArray  - Gravar arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param n        - quantidade de valores
 @param array    - grupo de valores inteiros
*/

void fprintIntArray ( chars fileName, int n, int array [ ] )
{
    // definir dados locais
       FILE* arquivo = fopen ( fileName, "wt" );
       int   x       = 0;

    // gravar quantidade de dados
       IO_fprintf ( arquivo, "%d\n", n );
    
    // gravar valores no arranjo
       for ( x=0; x<n; x=x+1 )
       {
           // gravar valor
              IO_fprintf ( arquivo, "%d\n", array [ x ] );
       } // end for
    
    // fechar arquivo
       fclose ( arquivo );

} // end fprintIntArray ( )

/**
 Method03 - Gravar em arquivo arranjo com valores inteiros
 */

void method03 ( )
{  
   // definir dados
      int n     =  5 ;
      int array [ n ]; 

   // identificar
      IO_id ( "Exemplo0819 - Method03 - v0.0" );
   
   // ler dados
      readIntArray  ( n, array );

   // mostrar dados
      IO_printf      ( "\n" );
      fprintIntArray ( "ARRAY1.TXT", n, array );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 freadArraySize  - Ler tamanho do arranjo com valores inteiros.
 @return quantidade de valores lidos
 @param fileName - nome do arquivo
*/

int freadArraySize ( chars fileName )
{
    // definir dados locais
       int   n       = 0;
       FILE* arquivo = fopen ( fileName, "rt" );

    // ler a quantidade de dados
       IO_fscanf ( arquivo, "%d", &n );
       if ( n <= 0 )
       {
           IO_println ( "ERRO: Valor invalido." );
           n = 0;
       } // end if

   // retornar dado lido
      return ( n );

} // end freadArraySize ( ) 

/**
 freadIntArray   - Ler arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param n        - quantidade de valores
 @param array    - grupo de valores inteiros
*/

void freadIntArray ( chars fileName, int n, int array [ ] )
{
    // definir dados locais
       int   x       = 0;
       int   y       = 0;
       FILE* arquivo = fopen ( fileName, "rt" );

    // ler a quantidade de dados
       IO_fscanf ( arquivo, "%d", &x );
       if ( n <= 0 || n > x )
       {
           IO_println ( "ERRO: Valor invalido." );
       } // end if

       else
       {
           // ler e guardar valores em arranjo
              x = 0;
              while ( ! feof ( arquivo ) && x < n )
              {
                  // ler valor
                     IO_fscanf ( arquivo, "%d", &y );
                  // guardar valor
                     array [ x ] = y;
                  // passar ao proximo
                     x = x+1;
               } // end while
       } // end else

} // end freadIntArray ( )

/**
 Method04 - Ler de arquivo arranjo com valores inteiros
 */

void method04 ( )
{ 
   // definir dados
      int n = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method04 - v0.0" );

   // ler dados
      n = freadArraySize ( "ARRAY1.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
          // ler dados
             freadIntArray ( "ARRAY1.TXT", n, array );
          // mostrar dados
             IO_printf ( "\n" );
             printIntArray ( n, array );
      } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 copyIntArray - Copiar arranjo com valores inteiros.
 @param n     - quantidade de valores
 @param copy  - copia do grupo de valores inteiros
 @param array - grupo de valores inteiros
*/

void copyIntArray ( int n, int copy [ ], int array [ ] )
{
    // definir dados locais
       int x = 0;
       int y = 0;

    // testar quantidade recebida
       if ( n <= 0 )
       {
           IO_println ( "ERRO: Valor invalido." );
           n = 0;
       } // end if

       else
       {
           // copiar valores em arranjo
              for ( x = 0; x < n; x = x + 1 )
              {
                  // copiar valor
                     copy [ x ] = array [ x ];
              } // end for
       } // end else

} // end copyIntArray ( )

/**
 Method05 - copiar arranjo com valores inteiros
 */

void method05 ( )
{  
   // definir dados
      int n = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method05 - v0.0" );

   // ler a quantidade de dados
      n = freadArraySize ( "ARRAY1.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
             int other [ n ];

          // ler dados
             freadIntArray ( "ARRAY1.TXT", n, array );

          // copiar dados
             copyIntArray  ( n, other, array );

          // mostrar dados (original)
             IO_printf     ( "\nOriginal\n" );
             printIntArray (    n, array    );

          // mostrar dados (copia)
             IO_printf     ( "\nCopia\n" );
             printIntArray (   n, other  );

      } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 sumIntArray  - Somar valores em arranjo com inteiros.
 @return      - soma dos valores
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/

int sumIntArray ( int n, int array [ ] )
{
    // definir dados locais
       int soma = 0;
       int x    = 0;

    // mostrar valores no arranjo
       for ( x=0; x<n; x=x+1 )
       {
           // somar valor
              soma = soma + array [ x ];
       } // end for

   // retornar resposta
      return ( soma );

} // end sumIntArray ( )

/**
 Method06 - Somar valores em arranjo com inteiros
 */

void method06 ( )
{  
   // definir dados
      int n = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method06 - v0.0" );

   // ler a quantidade de dados
      n = freadArraySize ( "ARRAY1.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];

          // ler dados
             freadIntArray ( "ARRAY1.TXT", n, array );

          // mostrar a soma dos valores no arranjo
             IO_printf ( "\nSoma = %d\n", sumIntArray ( n, array ) );

      } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 isAllZeros   - Testar valores inteiros em arranjo.
 @return      - true, se todos os dados forem iguais a zero;
                false, caso contrario
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/

bool isAllZeros ( int n, int array [ ] )
{
    // definir dados locais
       bool result = true;
       int  x      = 0;

    // mostrar valores no arranjo
       x=0;
       while ( x<n && result )
       {
           // testar valor
              result = result && ( array [ x ] == 0 );
           // passar ao proximo
              x = x + 1;
       } // end while
   // retornar resposta
      return ( result );

} // isAllZeros ( )

/**
 Method07 - testar se todos dados do arranjo sao zeros
 */

void method07 ( )
{  
   // definir dados
      int n          = 5;
      int array1 [ ] = { 0,0,0,0,0 };
      int array2 [ ] = { 1,2,3,4,5 };
      int array3 [ ] = { 1,2,0,4,5 };

   // identificar
      IO_id ( "Exemplo0819 - Method07 - v0.0" );

   // testar dados
      IO_println    ( "\nArray1:" );
      printIntArray ( n, array1  );
      IO_printf     ( "isAllZeros (array1) = %d\n", isAllZeros (n, array1) );

      IO_println    ( "\nArray2:" );
      printIntArray ( n, array2  );
      IO_printf     ( "isAllZeros (array2) = %d\n", isAllZeros (n, array2) );

      IO_println    ( "\nArray3:" );
      printIntArray ( n, array3  );
      IO_printf     ( "isAllZeros (array3) = %d\n", isAllZeros (n, array3) );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 addIntArray   - Somar arranjos com inteiros.
 @return       - arranjo com a soma resultante
 @param n      - quantidade de valores
 @param array3 - soma de grupo de valores inteiros
 @param array1 - grupo de valores inteiros (1)
 @param k      - constante para multiplicar o segundo arranjo
 @param array2 - grupo de valores inteiros (2)
*/

void addIntArray ( int n, int array3 [ ],
                   int array1 [ ], int k, int array2 [ ] )
{
   // definir dados locais
      int x = 0;

   // mostrar valores no arranjo
      for ( x=0; x<n; x=x+1 )
      {
          // somar valor
             array3 [ x ]= array1 [ x ] + k * array2 [ x ];
      } // end for

} // end addIntArray ( ) 

/**
 Method08 - somar arranjos com inteiros
 */

void method08 ( )
{  
   // definir dados
      int n = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method08 - v0.0" );

   // ler a quantidade de dados
      n = freadArraySize ( "ARRAY1.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
             int other [ n ];
             int sum   [ n ];

          // ler dados
             freadIntArray ( "ARRAY1.TXT", n, array );

          // copiar dados
             copyIntArray  ( n, other, array );

          // mostrar dados
             IO_printf     ( "\nOriginal\n" );
             printIntArray ( n, array );

          // mostrar dados
             IO_printf     ( "\nCopia\n" );
             printIntArray ( n, other );

          // operar soma de arranjos
             addIntArray   ( n, sum, array, (-2), other );

          // mostrar resultados
             IO_printf     ( "\nSoma\n" );
             printIntArray ( n, sum );
      } // end else   
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 isEqual       - Testar se arranjos com inteiros sao iguais.
 @return       - true, se todos os dados forem iguais;
                 false, caso contrario
 @param n      - quantidade de valores
 @param array1 - grupo de valores inteiros (1)
 @param array2 - grupo de valores inteiros (2)
*/

bool isEqual ( int n, int array1 [ ], int array2 [ ] )
{
    // definir dados locais
       bool result = true;
       int  x      = 0;

   // obter valores no arranjo
      x = 0;
      while ( x<n && result )
      {
          // testar valor
             result = result && ( array1 [ x ] == array2 [ x ] );
          // passar ao proximo
             x = x + 1;
       } // end while

   // retornar resposta
      return ( result );

} // isEqual ( )

/**
 Method09 - testar se arranjos com inteiros sao iguais
 */

void method09 ( )
{  
   // definir dados
      int n = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method09 - v0.0" );

   // ler a quantidade de dados
      n = freadArraySize ( "ARRAY1.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
             int other [ n ];

          // ler dados
             freadIntArray ( "ARRAY1.TXT", n, array );

          // copiar dados
             copyIntArray  ( n, other, array );

          // mostrar dados
             IO_printf     ( "\nOriginal\n" );
             printIntArray ( n, array );

          // mostrar dados
             IO_printf     ( "\nCopia\n" );
             printIntArray ( n, other );

          // mostrar resultado da comparacao
             IO_printf ( "\nIguais = %d\n", isEqual ( n, array, other ) );

          // modificar um valor
             other [ 0 ] = (-1) * other [ 0 ];
          
          // mostrar dados
             IO_printf ( "\nCopia alterada\n" );
             printIntArray ( n, other );

          // mostrar resultado da comparacao
             IO_printf ( "\nIguais = %d\n", isEqual ( n, array, other ) );

      } // end else 

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 searchArray  - Procurar valor em arranjo com inteiros.
 @return      - true, se encontrar;
                false, caso contrario
 @param value - valor a ser procurado
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/

bool searchArray ( int value, int n, int array [ ] )
{
    // definir dados locais
       bool result = false;
       int x = 0;

   // mostrar valores no arranjo
      x = 0;
      while ( x<n && ! result )
      {
          // testar valor
             result = ( value == array [ x ] );
          // passar ao proximo
             x = x + 1;
       } // end while

   // retornar resposta
      return ( result );

} // end searchArray ( )

/**
 Method10 - procurar valor em arranjo com inteiros
 */

void method10 ( )
{  
   // definir dados
      int n     = 0;
      int value = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method09 - v0.0" );

   // ler a quantidade de dados
      n = freadArraySize ( "ARRAY1.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];

          // ler dados
             freadIntArray ( "ARRAY1.TXT", n, array );

          // mostrar dados
             IO_printf     ( "\nOriginal\n" );
             printIntArray ( n, array );

          // mostrar resultado de procuras
             value = array [ 0 ];
             IO_printf ( "\nProcurar por (%d) = %d\n",
                         value, searchArray ( value, n, array ) );

             value = array [ n / 2 ];
             IO_printf ( "\nProcurar por (%d) = %d\n",
                         value, searchArray ( value, n, array ) );

             value = array [ n - 1 ];
             IO_printf ( "\nProcurar por (%d) = %d\n",
                         value, searchArray ( value, n, array ) );

             value = (-1);
             IO_printf ( "\nProcurar por (%d) = %d\n",
                         value, searchArray ( value, n, array ) );

      } // end else 

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );
} // end method10 ( )

/**
 readPositiveEvenArray - ler tamanho de arranjo e, nele,
                         guardar valores pares positivos
 */

void readPositiveEvenArray ( )
{
    // definir dados
       int n = 0;
       int x = 0;
       int y = 0;

    // ler tamanho do arranjo
       n = IO_readint ( "Entre com tamanho do arranjo: " );

    // verificar se tamanho valido
       while ( n <= 0 )
       {
           IO_println ( "ERRO: Tamanho invalido!" );
           n = IO_readint ( "\nEntre com um tamanho positivo para o arranjo: " );
       } // end while
    
    // ler e guardar valores em arranjo
       int array [ n ];
       
       IO_println ( "\nDigite valores positivos e pares para o arranjo\n" );
       for ( x=0; x<n; x=x+1 )
       {
           // ler valor
              y = IO_readint ( IO_concat ( IO_toString_d ( x ), ": ") );

          // verificar se valor positivo e par
             while ( y <= 0  ||  !(y%2 == 0) )
             {
                 IO_println ( "ERRO: Valor invalido! Entre com um valor par e positivo.\n" );
                 y = IO_readint ( IO_concat ( IO_toString_d ( x ), ": ") );
             } // end while

           // guardar valor
              array [ x ] = y;
       } // end for

    // mostrar arranjo
       IO_println ( "\nArranjo lido:\n" );
       printIntArray ( n, array );

} // end readPositiveEvenArray

/**
 Method11 - ler tamanho do arranjo e guardar valores pares e positivos
 */

void method11 ( )
{   
    // identificar
       IO_id ( "Exemplo0819 - Method11 - v0.0" );

    // chamar metodo auxiliar
       readPositiveEvenArray ( );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 isPositiveEven - Funcao para testar se valor e' par e positivo
 @param x       - valor a ser testado
 @return        - true, se for par e positivo;
                  false, caso contrario
*/

bool isPositiveEven ( int x )
{
    // definir dado
       bool result = false;

    // testar valor
       if ( x > 0  &&  (x%2 == 0) )
       {
           // alterar resultado
              result = true;
       } // end if
    // retornar resultado
       return ( result );

} // end isPositiveEven

/**
 fprintError     - Gravar em arquivo mensagem de erro.
 @param fileName - nome do arquivo
 @param text     - mensagem de erro
*/

void fprintError ( chars fileName, chars text )
{
    // definir dados locais
       FILE* arquivo = fopen ( fileName, "wt" );

    // gravar mensagem
       IO_fprintf ( arquivo, text );
    
    // fechar arquivo
       fclose ( arquivo );

} // end fprintError ( )

/**
 Method12a - Metodo auxiliar para ler arranjo de arquivo,
             separar os valores pares positivos e
             gavar em novo arquivo
 @param fileIn  - arquivo do array de origem
 @param fileOut - arquivo do array de saida 
 @param array[] - arranjo de inteiros
 */

void method12a ( chars fileIn, chars fileOut, int array [ ] )
{
   // definir dados
      int n = 0;
      int y = 0;
      int k = 0;

   // ler dados
      n = freadArraySize ( fileIn );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Tamanho lido invalido.\n" );
      } // end if

      else
      {
          IO_printf ( "\nArquivo lido com sucesso.\n" );
          // definir armazenador
             int copy  [ n ];
          // ler dados
             freadIntArray ( fileIn, n, array );
          // descartar valores negativos e impares
             for ( int x=0; x<n; x=x+1 )
             {
                 // testar valor
                    y = array[x];
                    if ( isPositiveEven ( y ) )
                    {
                        // copiar cadeia e contar
                           copy [k] = y;
                           k = k+1;
                    } // end if
             } // end for
          // testar se arranjo valido
             if ( k > 0 )
             {
                 // novo armazenador
                    int correct [ k ];
                 // mostrar dados
                    for ( int x=0; x<k; x=x+1 )
                    {
                        correct [x] = copy [x];
                    } // end for
                    fprintIntArray ( fileOut, k, correct );
                    IO_printf ( "\nNovo arquivo gravado com sucesso.\n" );
             } // end if
             else
             {
                 fprintError ( fileOut, "ERRO: Nao ha' valores pares positivos no arranjo.\n" );
                 IO_printf   ( "\nNovo arquivo gravado com erro.\n" );
             } // end else
          
      } // end else

} // end method12a ( )

/**
 Method12 - copiar e gravar em arquivo valores positivos pares
 */

void method12 ( )
{
    // identificar1
       IO_id ( "Exemplo0819 - Method12 - v0.0" );
    
    // chamar metodo auxiliar
       int array1 [100];
       IO_println     ( "\nTeste 1:\n");
       readIntArray   (                  5,              array1 );
       fprintIntArray ( "ARRAY12_A.TXT", 5,              array1 );
       method12a      ( "ARRAY12_A.TXT", "ARRAY12A.TXT", array1 );
       
       int array2 [100];
       IO_println     ( "\nTeste 2:\n");
       readIntArray   (                  7,              array2 );
       fprintIntArray ( "ARRAY12_B.TXT", 7,              array2 );
       method12a      ( "ARRAY12_B.TXT", "ARRAY12B.TXT", array2 );

       int array3 [100];
       IO_println     ( "\nTeste 3:\n");
       readIntArray   (                  10,             array3 );
       fprintIntArray ( "ARRAY12_C.TXT", 10,             array3 );
       method12a      ( "ARRAY12_C.TXT", "ARRAY12C.TXT", array3 );

       int array4 [100];
       IO_println     ( "\nTeste 4:\n");
       readIntArray   (                  3,              array4 );
       fprintIntArray ( "ARRAY12_D.TXT", 3,              array4 );
       method12a      ( "ARRAY12_D.TXT", "ARRAY12D.TXT", array4 );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method12 ( )

/**
 gerarInt        - Funcao para gerar valor inteiro aleatoriamente
                   dentro de determinado intervalo
 @param inferior - limite inferior
 @param superior - limite superior
 @return         - valor inteiro gerado
*/

int gerarInt ( int inferior, int superior )
{
    // definir dado
       int valor = 0;

    // gerar valor
       valor = rand ( )%(superior+1);
    
    // testar limite inferior
       while ( valor < inferior )
       {
           valor = rand ( )%superior;
       } // end while
       
    // retornar resultado
       return ( valor );

} // end gerarInt

/**
 Method13 - gerar arranjo de valores delimitados em um intervalo fechado
 */

void method13 ( )
{
    // definir dados
       int n     = 0;
       int x     = 0;
       int y     = 0;
       int valor = 0;
       
    // identificar
       IO_id ( "Exemplo0819 - Method13 - v0.0" );

    // ler tamanho do arranjo
       n = IO_readint ( "Entre com tamanho do arranjo: " );

    // verificar se tamanho valido
       while ( n <= 0 )
       {
           IO_println ( "ERRO: Tamanho invalido!" );
           n = IO_readint ( "\nEntre com um tamanho positivo para o arranjo: " );
       } // end while

    // ler intervalo
       x = IO_readint ( "\nEntre com limite inferior para o arranjo: " );
       y = IO_readint ( "Entre com limite superior para o arranjo: "   );

    // verificar se intervalo valido
       while ( !( x<y ) )
       {
           IO_println     ( "ERRO: Intervalo invalido!" );
           x = IO_readint ( "\nEntre com limite inferior para o arranjo: " );
           y = IO_readint ( "Entre com limite superior para o arranjo: "   );       
       } // end while

    // gerar arranjo
       int array [ n ];

    // gerar valores randomizados
       for ( int i = 0; i<n; i = i+1 )
       {
           // gerar valor
              valor = gerarInt ( x, y );
              
           // adicionar ao arranjo
              array [i] = valor;
       } // end for

    // gravar em arquivo
       fprintIntArray ( "DADOS.TXT", n, array );
       IO_printf      ( "\nForam gravados %d valores pertencentes ao intervalo [%d;%d]\n", n, x, y );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 acharMenor   - Funcao para encontrar menor valor em um arranjo
 @param n     - tamanho do arranjo
 @param array - arranjo a ser testado
 @return      - maior valor dentre ambos
*/

int acharMenor ( int n, int array [ ] )
{
   // definir dados
      int valor1 = 0;
      int valor2 = 0;
      int y      = 0;
      int menor  = 0;
   
   // encontrar valores
      if ( n > 1 )
      {
         menor = array[0];
         for ( int x = 0; x<(n-1); x = x+1 )
         {
            // separar valores
               valor1 = array[x];
               valor2 = array[x+1];
            
            // encontrar menor
               if ( valor1 < valor2 )
               {
                  y = valor1;
               } // end if

               else
               {
                  y = valor2;
               } // end else
            // comparar menor
               if ( y < menor ) { menor = y; }
         } // end for
      } // enf if
      else
      {
         if ( n == 1 ) { menor = array[0]; }
         else IO_printf ( "\n[acharMenor] ERRO: quantidade invalida\n" );
      }
    // retornar resultado
       return ( menor );

} // end acharMenor

/**
 Method14 - ler arranjo de arquivo e mostrar menor valor
 */

void method14 ( )
{
   // definir dados
      int n     = 0;
      int menor = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method14 - v0.0" );

   // ler dados
      n = freadArraySize ( "DADOS.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
          // ler dados
             freadIntArray      ( "DADOS.TXT", n, array );
          // encontrar menor
             menor = acharMenor ( n, array );
             IO_printf          ( "O menor valor e' %d", menor );
      } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 acharMenor   - Funcao para encontrar maior valor em um arranjo
 @param n     - tamanho do arranjo
 @param array - arranjo a ser testado
 @return      - maior valor dentre ambos
*/

int acharMaior ( int n, int array [ ] )
{
   // definir dados
      int valor1 = 0;
      int valor2 = 0;
      int y      = 0;
      int maior  = 0;
   
   // encontrar valores
      if ( n > 1 )
      {
         maior = array[0];
         for ( int x = 0; x<(n-1); x = x+1 )
         {
            // separar valores
               valor1 = array[x];
               valor2 = array[x+1];
            
            // encontrar maior
               if ( valor1 > valor2 )
               {
                  y = valor1;
               } // end if

               else
               {
                  y = valor2;
               } // end else
            // comparar maior
               if ( y > maior ) { maior = y; }
         } // end for
      } // enf if
      else
      {
         if ( n == 1 ) { maior = array[0]; }
         else IO_printf ( "\n[acharMaior] ERRO: quantidade invalida\n" );
      } // end else

    // retornar resultado
       return ( maior );

} // end acharMaior

/**
 Method15 - ler arranjo de arquivo e mostrar maior valor
 */

void method15 ( )
{
   // definir dados
      int n     = 0;
      int maior = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method14 - v0.0" );

   // ler dados
      n = freadArraySize ( "DADOS.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
          // ler dados
             freadIntArray      ( "DADOS.TXT", n, array );
          // encontrar maior
             maior = acharMaior ( n, array );
             IO_printf          ( "O maior valor e' %d", maior );
      } // end else

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 acharMedia   - Funcao para encontrar media de valores em um arranjo
 @param n     - tamanho do arranjo
 @param array - arranjo a ser testado
 @return      - media dos valores
*/

double acharMedia ( int n, int array [ ] )
{
   // definir dados
      double media = 0.0;
   
   // encontrar media
      if ( n >= 1 )
      {
         // somar valores e calcular media
            media = (1.0 * sumIntArray ( n , array )) / (1.0 * n) ;
      } // enf if
      else
      {
         IO_printf ( "\n[acharMedia] ERRO: quantidade invalida\n" );
      } // end else

    // retornar resultado
       return ( media );

} // end acharMedia

/**
 Method16 - ler arranjo de arquivo 
            calcular media e 
            separar valores acima e abaixo dela
 */

void method16 ( )
{
   // definir dados
      int    n     = 0;
      int    y     = 0;
      int    k     = 0;
      int    i     = 0;
      double media = 0.0;

      chars fileName1 = IO_new_chars ( STR_SIZE );
      chars fileName2 = IO_new_chars ( STR_SIZE );

      FILE* fmaiores = fopen ( fileName1, "wt" );
      FILE* fmenores = fopen ( fileName2, "wt" );

   // identificar
      IO_id ( "Exemplo0819 - Method16 - v0.0" );

   // ler a quantidade de dados
      n = freadArraySize ( "DADOS.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];

          // ler dados
             freadIntArray ( "DADOS.TXT", n, array );

          // obter media dos valores no arranjo
             media = acharMedia ( n, array );
             IO_printf ( "\nMedia = %lf\n", media );

          // obter armazenador
             int maiores [ n ];
             int menores [ n ];

          // separar valores
             for ( int x=0; x<n; x=x+1 )
             {
                 // testar valor
                    y = array[x];
                    if ( y > media )
                    {
                        // copiar cadeia e contar
                           maiores [k] = y;
                           k = k+1;
                    } // end if
                    else
                    {
                        // copiar cadeia e contar
                           menores [i] = y;
                           i = i+1;
                    } // end else
             } // end for
          // gravar arranjo maior
             // novo armazenador
                int maioresOk [ k ];
             // mostrar dados
                for ( int x=0; x<k; x=x+1 )
                {
                    maioresOk [x] = maiores [x];
                } // end for
                fprintIntArray ( "MAIORES.TXT", k, maiores );
                IO_printf ( "\nArquivo \"MAIORES.TXT\" gravado com sucesso.\n" );

          // testar se arranjo dos menores e' valido
             if ( k > 0 )
             {
                 // novo armazenador
                    int menoresOk [ i ];
                 // mostrar dados
                    for ( int x=0; x<i; x=x+1 )
                    {
                        menoresOk [x] = menores [x];
                    } // end for
                    fprintIntArray ( "MENORES.TXT", i, menores );
                    IO_printf ( "\nArquivo \"MENORES.TXT\" gravado com sucesso.\n" );
             } // end if
             else
             {
                 fprintError ( menores, "ERRO: Nao ha' valores menores que a media no arranjo.\n" );
                 IO_printf   ( "\nArquivo \"MENORES.TXT\" gravado com erro.\n" );
             } // end else
      } // end else
   
    // fechar arquivo
       fclose ( fmenores );
       fclose ( fmaiores );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 estaOrdenado   - Funcao determinar se arranjo esta ordenado decrescente
 @param n       - tamanho arranjo 
 @param arranjo - arranjo a ser testado
 @return        - true, se for par e positivo;
                  false, caso contrario
*/

bool estaOrdenado ( int n, int array [ ] )
{
    // definir dados locais
       bool result = true;
       int x = 0;

   // mostrar valores no arranjo
      if ( n > 1 )
      {
        while ( x<(n-1) && result )
        {
            // testar valor
                result = ( array [x] > array [x+1] );
            // passar ao proximo
                x = x + 1;
        } // end while
       } // end if

       else if ( n == 1 ) { result = true; }
            else          {result = false; }

   // retornar resposta
      return ( result );

} // end estaOrdenado

/**
 Method17 - ler arranjo de arquivo e dizer se esta' em ordem decrescente
 */

void method17 ( )
{
   // definir dados
      int n     = 0;
      int menor = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method17 - v0.0" );

   // ler dados
      n = freadArraySize ( "DADOS.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
          // ler dados
             freadIntArray      ( "DADOS.TXT", n, array );
          // testar ordem e mostrar resultado
             if ( estaOrdenado ( n, array ) )
             {
                 IO_printf ( "\nO arranjo esta' em ordem decrescente.\n" );
             } // end if
             else
             {
                 IO_printf ( "\nO arranjo nao esta' ordenado decrescentemente.\n" );
             } //
      } // end else
    
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
 acharValor   - Procurar valor em arranjo com inteiros.
 @return      - true, se encontrar;
                false, caso contrario
 @param value - valor a ser procurado
 @param start - posicao a se iniciar a busca
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/

bool acharValor ( int value, int start, int n, int array [ ] )
{
    // definir dados locais
       bool result = false;
       int x = 0;

   // mostrar valores no arranjo
      x = 0;
      while ( x<n && ! result )
      {
          // testar valor
             result = ( value == array [ x+start ] );
          // passar ao proximo
             x = x + 1;
       } // end while

   // retornar resposta
      return ( result );

} // end acharValor ( )

/**
 Method18 - ler arranjo de arquivo e procurar determinado valor
 */

void method18 ( )
{
   // definir dados
      int n         = 0;
      int procurado = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method17 - v0.0" );

   // ler valor a ser procurado
      procurado = IO_readint ( "\nValor a ser procurado: " );

   // ler dados
      n = freadArraySize ( "DADOS.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
          // ler dados
             freadIntArray      ( "DADOS.TXT", n, array );
          // testar ordem e mostrar resultado
             if ( acharValor ( procurado, 0, n, array ) )
             {
                 IO_printf ( "\nO valor %d se encontra no arranjo.\n", procurado );
             } // end if
             else
             {
                 IO_printf ( "\nO valor nao %d se encontra no arranjo.\n", procurado );
             } //
      } // end else
    
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

/**
 acharPosicao - Procurar posicao de valor em arranjo com inteiros.
 @return      - posicao do valor
 @param value - valor a ser procurado
 @param start - posicao a se iniciar a busca
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/

int acharPosicao ( int value, int start, int n, int array [ ] )
{
    // definir dados locais
       bool result = false;
       int  onde   = -1;
       int  x      = 0;

   // mostrar valores no arranjo
      x = 0;
      while ( x<n && ! result )
      {
          // testar valor
             result = ( value == array [ x+start ] );
          // passar ao proximo
             x = x + 1;
       } // end while
   
   // encontrar posicao
      if ( result == true )
      {
         onde = x-1;
      } // end if
      

   // retornar resposta
      return ( onde );

} // end acharPosicao ( )

/**
 Method19 - ler arranjo de arquivo e procurar posicao determinado valor
 */

void method19 ( )
{
   // definir dados
      int n         = 0;
      int procurado = 0;
      int onde      = 0;

   // identificar
      IO_id ( "Exemplo0819 - Method19 - v0.0" );

   // ler valor a ser procurado
      procurado = IO_readint ( "\nValor a ser procurado: " );

   // ler dados
      n = freadArraySize ( "DADOS.TXT" );  

      if ( n <= 0 )
      {
          IO_printf ( "\nERRO: Valor invalido.\n" );
      } // end if

      else
      {
          // definir armazenador
             int array [ n ];
          // ler dados
             freadIntArray       ( "DADOS.TXT", n, array );
          // achar posicao
             onde = acharPosicao ( procurado, 0, n, array );

             if ( onde >= 0 )
             {
                 IO_printf ( "\nO valor %d se encontra da posicao %d no arranjo.\n", procurado, onde );
             } // end if
             else
             {
                 IO_printf ( "\nO valor nao %d se encontra no arranjo.\n", procurado );
             } //
      } // end else
    
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method19 ( )

/**
 Method20 -
 */

void method20 ( )
{
    // identificar
       IO_id ( "Exemplo0819 - Method20 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method20 ( )

/**
 MethodE1 -
 */

void methodE1 ( )
{
    // identificar
       IO_id ( "Exemplo0819 - MethodE1 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE1 ( )

/**
 MethodE2 -
 */

void methodE2 ( )
{
    // identificar
       IO_id ( "Exemplo0819 - MethodE2 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE2 ( )

/*
 Funcao principal.
 @return codigo de encerramento
*/

int main ( )
{
    // definir dado
       int x = 0;
    
    // repetir ate desejar parar
       do
       {
            // identificar
               IO_id ( "Exemplo0819 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0  - parar" );
               IO_println ( "1  - mostrar valores inteiros de um arranjo                        " );
               IO_println ( "2  - ler e mostrar valores inteiros de um arranjo                  " );
               IO_println ( "3  - gravar em arquivo arranjo com valores inteiros                " );
               IO_println ( "4  - ler de arquivo arranjo com valores inteiros                   " );
               IO_println ( "5  - copiar arranjo com valores inteiros                           " );
               IO_println ( "6  - somar valores em arranjo com inteiros                         " );
               IO_println ( "7  - testar se todos dados do arranjo sao zeros                    " );
               IO_println ( "8  - somar arranjos com inteiros                                   " );
               IO_println ( "9  - testar se arranjos com inteiros sao iguais                    " );
               IO_println ( "10 - procurar valor em arranjo com inteiros                        " );
               IO_println ( "11 - ler tamanho do arranjo e guardar valores pares e positivos    " );
               IO_println ( "12 - copiar e gravar em arquivo arranjo com valores positivos pares" );
               IO_println ( "13 - gerar arranjo de valores delimitados em um intervalo fechado  " );
               IO_println ( "14 - ler arranjo de arquivo e mostrar menor valor                  " );
               IO_println ( "15 - ler arranjo de arquivo e mostrar maior valor                  " );
               IO_println ( "16 - ler arranjo de arquivo, calcular media e separar valores      " );
               IO_println ( "17 - ler arranjo de arquivo e dizer se esta' em ordem decrescente  " );
               IO_println ( "18 - ler arranjo de arquivo e procurar determinado valor           " );
               IO_println ( "19 - ler arranjo de arquivo e procurar posicao de determinado valor" );
               // IO_println ( "20 - " );
               // IO_println ( "21 - " );
               // IO_println ( "22 - " );
               IO_println ( " " );

               x =  IO_readint ( "Entrar com uma opcao: " );
            
            // testar valor
               switch ( x )
               {
               case 0:
                   method00 ( );
                   break;

                case 1:
                   method01 ( );
                   break;

                case 2:
                   method02 ( );
                   break;

                case 3:
                   method03 ( );
                   break;

                case 4:
                   method04 ( );
                   break;

                case 5:
                   method05 ( );
                   break;

                case 6:
                   method06 ( );
                   break;

                case 7:
                   method07 ( );
                   break;

                case 8:
                   method08 ( );
                   break;

                case 9:
                   method09 ( );
                   break;

                case 10:
                   method10 ( );
                   break;
                                
                case 11:
                   method11 ( );
                   break;

                case 12:
                   method12 ( );
                   break;

                case 13:
                   method13 ( );
                   break;

                case 14:
                   method14 ( );
                   break;

                case 15:
                   method15 ( );
                   break;

                case 16:
                   method16 ( );
                   break;

                case 17:
                   method17 ( );
                   break;

                case 18:
                   method18 ( );
                   break;

                case 19:
                   method19 ( );
                   break;

                case 20:
                   method20 ( );
                   break;

                case 21:
                   methodE1 ( );
                   break;

                case 22:
                   methodE2 ( );
                   break;

               default:
                   IO_pause ( "ERRO: Valor invalido!" );
                   break;
               } // end switch

       } while ( x != 0 );
    
    // encerrar
       IO_pause ( "Apertar ENTER para terminar" );
       return ( 0 );
       
} // end main ( )

/*
 ----------------------------- documentacao complementar
 ----------------------------- notas / observacoes / comentarios
 ----------------------------- previsao de testes e testes

Ler arquivo DADOS.TXT e procurar valor vindo do teclado

Valor a ser procurado: 41

O valor 41 se encontra da posicao 0 no arranjo.


Valor a ser procurado: 100

O valor nao 100 se encontra no arranjo.


Valor a ser procurado: 64

O valor 64 se encontra da posicao 22 no arranjo.


Valor a ser procurado: -1

O valor nao -1 se encontra no arranjo.


Valor a ser procurado: 22

O valor 22 se encontra da posicao 9 no arranjo.

*/