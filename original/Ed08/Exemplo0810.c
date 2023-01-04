/*
Exemplo0810 - v0.0. - 16 / 05 / 2022
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
      IO_id ( "Exemplo0810 - Method01 - v0.0" );
    
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
      IO_id ( "Exemplo0810 - Method02 - v0.0" );
   
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
      IO_id ( "Exemplo0810 - Method03 - v0.0" );
   
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
      IO_id ( "Exemplo0810 - Method04 - v0.0" );

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
      IO_id ( "Exemplo0810 - Method05 - v0.0" );

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
      IO_id ( "Exemplo0810 - Method06 - v0.0" );

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
      IO_id ( "Exemplo0810 - Method07 - v0.0" );

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
      IO_id ( "Exemplo0810 - Method08 - v0.0" );

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
      IO_id ( "Exemplo0810 - Method09 - v0.0" );

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
      IO_id ( "Exemplo0810 - Method09 - v0.0" );

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
               IO_id ( "Exemplo0810 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0  - parar" );
               IO_println ( "1  - mostrar valores inteiros de um arranjo         " );
               IO_println ( "2  - ler e mostrar valores inteiros de um arranjo   " );
               IO_println ( "3  - gravar em arquivo arranjo com valores inteiros " );
               IO_println ( "4  - ler de arquivo arranjo com valores inteiros    " );
               IO_println ( "5  - copiar arranjo com valores inteiros            " );
               IO_println ( "6  - somar valores em arranjo com inteiros          " );
               IO_println ( "7  - testar se todos dados do arranjo sao zeros     " );
               IO_println ( "8  - somar arranjos com inteiros                    " );
               IO_println ( "9  - testar se arranjos com inteiros sao iguais     " );
               IO_println ( "10 - procurar valor em arranjo com inteiros        " );
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
 ----------------------------- previsao de testes

ler do arquivo ARRAY1.TXT e
mostrar valores:

Original
 0: 1
 1: 2
 2: 3
 3: 4
 4: 5

mostar resultado dos testes de existencia

Procurar por (1) = 1      // existe

Procurar por (3) = 1      // existe

Procurar por (5) = 1      // existe

Procurar por (-1) = 0     // nao existe

 ----------------------------- historico

Versao         Data        Modificacao
1.0            16/05       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       mostrar valores inteiros de um arranjo
0.2            01.(OK)       ler e mostrar valores inteiros de um arranjo
0.3            01.(OK)       gravar em arquivo arranjo com valores inteiros
0.4            01.(OK)       ler de arquivo arranjo com valores inteiros
0.5            01.(OK)       copiar arranjo com valores inteiros
0.6            01.(OK)       somar valores em arranjo com inteiros
0.7            01.(OK)       testar se todos dados do arranjo sao zeros
0.8            01.(OK)       somar arranjos com inteiros
0.9            01.(OK)       testar se arranjos com inteiros sao iguais
1.0            01.(OK)       procurar valor em arranjo com inteiros

*/