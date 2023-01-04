/*
Exemplo0716 - v0.0. - 06 / 05 / 2022
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
 writeInts - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void writeInts ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int y = 0;

   // repetir para a quantidade de dados
      for ( y = 1; y <= x; y = y + 1 )
      {
         // gravar valor
            fprintf ( arquivo, "%d\n", y );
      } // end for
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end writeInts ( )

/**
Method01 - Gravar certa quantidade de valores em arquivo.
*/
void method01 ( )
{
    // identificar
       IO_id ( "Exemplo0716 - Method01 - v0.0" );

   // executar o metodo auxiliar
      writeInts ( "DADOS1.TXT", 10 );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );
} // end method01 ( ) 

/**
 readInts - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void readInts ( chars fileName )
{
    // definir dados
       FILE* arquivo = fopen ( fileName, "rt" );
       int x = 0;

    // tentar ler o primeiro
       fscanf ( arquivo, "%d", &x );
    
    // repetir enquanto houver dados
       while ( ! feof ( arquivo ) )
        {
            // mostrar valor
              printf ( "%d\n", x );
            // tentar ler o proximo
              fscanf ( arquivo, "%d", &x );
        } // end while

    // fechar arquivo (RECOMENDAVEL para leitura)
       fclose ( arquivo );

} // fim readInts ( )

/**
 Method02 - Ler certa quantidade de valores em arquivo.
 */

void method02 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method02 - v0.0" );

   // executar o metodo auxiliar
      readInts ( "DADOS1.TXT" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )

/**
 writeDoubles - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void writeDoubles ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int   y       = 0;

   // gravar quantidade de valores
      IO_fprintf ( arquivo, "%d\n", x );
   
   // repetir para a quantidade de dados
      for ( y = 1; y <= x; y = y + 1 )
      {
         // gravar valor
            IO_fprintf ( arquivo, "%lf\n", (0.1*y) );
      } // end for

   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end writeDoubles ( )

/**
 Method03 - Gravar certa quantidade de valores reais em arquivo.
 */

void method03 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method03 - v0.0" );

    // executar o metodo auxiliar
       writeDoubles ( "DADOS2.TXT", 10 );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )

/**
 readDoubles - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void readDoubles ( chars fileName )
{
    // definir dados
       FILE*  arquivo = fopen ( fileName, "rt" );
       int    x       = 0 ;
       int    y       = 1 ;
       double z       = 0.0;
    
    // tentar ler a quantidade de dados
       fscanf ( arquivo, "%d", &x );
    
    // repetir enquanto houver dados e
    // quantidade nao tiver sido alcancada
       while ( ! feof ( arquivo ) && y <= x )
       {
           // tentar ler
              fscanf ( arquivo, "%lf", &z );
           // mostrar valor
              printf ( "%2d: %lf\n", y, z );
           // passar ao proximo
              y = y + 1;
       } // end while
    
    // fechar arquivo (RECOMENDAVEL para leitura)
       fclose ( arquivo );

} // end readDoubles ( )

/**
 Method04 - Ler certa quantidade de valores reais em arquivo.
 */

void method04 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method04 - v0.0" );

    // executar o metodo auxiliar
       readDoubles ( "DADOS2.TXT" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method04 ( )

/**
 writeText - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void writeText ( chars fileName )
{
    // definir dados
       FILE* arquivo = fopen ( fileName, "wt"  );
       chars linha   = IO_new_chars ( STR_SIZE );

    // repetir ate' desejar parar
       IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
       do
       {
           // ler do teclado
              strcpy ( linha, IO_readln ( "" ) );
           // gravar valor
              IO_fprintf ( arquivo, "%s\n", linha );
       } while ( strcmp ( "PARAR", linha ) != 0 );

    // fechar arquivo (INDISPENSAVEL para gravacao)
       fclose ( arquivo );

} // end writeText ( )

/**
 Method05 - Gravar certa quantidade de linhas de caracteres em arquivo.
 */

void method05 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method05 - v0.0" );

    // executar o metodo auxiliar
       writeText ( "DADOS3.TXT" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 readText - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
*/

void readText ( chars fileName )
{
    // definir dados
       FILE* arquivo = fopen ( fileName, "rt" );
       chars linha  = IO_new_chars ( STR_SIZE );
    
    // tentar ler o primeiro
       strcpy ( linha, IO_freadln ( arquivo ) );

    // repetir enquanto houver dados
       while ( ! feof (arquivo) &&
               strcmp ( "PARAR", linha ) != 0 )
        {
            // mostrar valor
               printf ( "%s\n", linha );
            // tentar ler o proximo
               strcpy ( linha, IO_freadln ( arquivo ) );
        } // end while
    
    // fechar arquivo (RECOMENDAVEL para leitura)
       fclose ( arquivo );

} // end readText ( )

/**
 Method06 - Ler certa quantidade de linhas de caracteres em arquivo.
 */

void method06 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method06 - v0.0" );

    // executar o metodo auxiliar
       readText ( "DADOS3.TXT" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 copyText - Copiar arquivo texto.
 @param fileOut - nome do arquivo de saida (destino)
 @param fileIn - nome do arquivo de entrada (origem )
*/

void copyText ( chars fileOut, chars fileIn )
{
    // definir dados
       FILE* saida    = fopen ( fileOut, "wt"   );
       FILE* entrada  = fopen ( fileIn , "rt"   );
       chars linha    = IO_new_chars ( STR_SIZE );
       int   contador = 0;
    
    // ler da origem
       strcpy ( linha, IO_freadln ( entrada ) );
    
    // repetir enquanto houver dados
       while ( ! feof ( entrada ) )
       {
           // contar linha lida
              contador = contador + 1;

           // gravar no destino,
           // EXCEPCIONALMENTE sem a ultima linha, nesse caso
              if ( strcmp ( "PARAR", linha ) != 0 )
              {
                  IO_fprintln ( saida, linha );
              } // end if
           
           // ler da origem
              strcpy ( linha, IO_freadln ( entrada ) );
          
       } // end while

    // informar total de linhas copiadas
       IO_printf ( "Lines read = %d\n", contador );

   // fechar arquivos
      fclose (  saida  );
      fclose ( entrada );
} // end copyText ( )

/**
 Method07 - Copiar texto de um arquivo para outro.
 */

void method07 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method07 - v0.0" );

    // executar o metodo auxiliar
       copyText ( "DADOS4.TXT", "DADOS3.TXT" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 appendText - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void appendText ( chars fileName )
{
    // definir dados
       FILE* arquivo = fopen ( fileName, "at"  );
       chars linha   = IO_new_chars ( STR_SIZE );

    // repetir ate' desejar parar
       IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
       do
       {
           // ler do teclado
              strcpy ( linha, IO_readln ( "" ) );
           // gravar valor
              IO_fprintln ( arquivo, linha );
       } while ( strcmp ( "PARAR", linha ) != 0 );

    // fechar arquivo (INDISPENSAVEL para gravacao)
       fclose ( arquivo );

} // end appendText ( )

/**
 Method08 - Adicionar certa quantidade de linhas de caracteres em arquivo.
 */

void method08 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method08 - v0.0" );

    // executar o metodo auxiliar
       writeText ( "DADOS4.TXT" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 readWords - Ler palavras de arquivo.
 @param fileName - nome do arquivo
*/

void readWords ( chars fileName )
{
    // definir dados
       FILE* arquivo = fopen ( fileName, "rt"  );
       chars linha   = IO_new_chars ( STR_SIZE );

    // tentar ler a primeira
       strcpy ( linha, IO_fread ( arquivo ) );

    // repetir enquanto houver dados
       while ( ! feof (arquivo) &&
                 strcmp ( "PARAR", linha ) != 0 )
        {
            // mostrar valor
               printf ( "%s\n", linha );
            // tentar ler o proximo
               strcpy ( linha, IO_fread ( arquivo ) );
        } // end while
    
    // fechar arquivo (RECOMENDAVEL para leitura)
       fclose ( arquivo );

} // end readWords ( )

/**
 Method09 - Ler palavras de arquivo.
 */

void method09 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method09 - v0.0" );

    // executar o metodo auxiliar
       readWords ( "DADOS4.TXT" );
       
    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 searchWord - Procurar palavra em arquivo.
 @return true, se encontrar; false, caso contrario
 @param fileName - nome do arquivo
 @param word - palavra a procurar
*/

bool searchWord ( chars fileName, chars word )
{
    // definir dados
       FILE* arquivo = fopen ( fileName, "rt"  );
       chars linha   = IO_new_chars ( STR_SIZE );

    // tentar ler a primeira
       strcpy ( linha, IO_fread ( arquivo ) );

    // repetir enquanto houver dados
       while ( ! feof (arquivo) &&
                 strcmp ( word, linha ) != 0 )
        {
            // tentar ler o proximo
               strcpy ( linha, IO_fread ( arquivo ) );
        } // end while

    // fechar arquivo (RECOMENDAVEL para leitura)
       fclose ( arquivo );

    // retornar resultado
       return ( strcmp ( word, linha ) == 0 );

} // end searchdWord ( )

/**
 Method10 - Procurar palavras em arquivo.
 */

void method10 ( )
{  
    // identificar
       IO_id ( "Exemplo0716 - Method10 - v0.0" );

    // procurar palavra
       IO_printf ( "Procurar (\"%s\") = %d\n", "pqr", searchWord ( "DADOS4.TXT", "pqr" ) );
       IO_printf ( "Procurar (\"%s\") = %d\n", "pqs", searchWord ( "DADOS4.TXT", "pqs" ) );
    
    // procurar palavras (extra)
       IO_printf ( "Procurar (\"%s\") = %d\n", "ABC",   searchWord ( "DADOS4.TXT", "ABC"   ) );
       IO_printf ( "Procurar (\"%s\") = %d\n", "9",     searchWord ( "DADOS4.TXT", "9"     ) );
       IO_printf ( "Procurar (\"%s\") = %d\n", "1",     searchWord ( "DADOS4.TXT", "1"     ) );
       IO_printf ( "Procurar (\"%s\") = %d\n", "parar", searchWord ( "DADOS4.TXT", "parar" ) );  
       IO_printf ( "Procurar (\"%s\") = %d\n", "PARAR", searchWord ( "DADOS4.TXT", "PARAR" ) );  

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method10 ( )

/**
 writeMultiple3Odd_a - Gravar em arquivo texto certa quantidade 
                       de valores impares e multiplos de 3.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void writeMultiple3Odd_a ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int   y       = 0;
      int   z       = 0;

   // copiar quantidade lida
      z = x;

   // repetir para a quantidade de dados
      for ( y = 1; y <= z; y = y + 1 )
      {
          if ( y % 2 != 0 )
          {
              // gravar valor
                 fprintf ( arquivo, "%d\n", 3*y );
          } // end if
          else
          {
              // garantir quantidade desejada
                 z = z + 1;
          } // end else        
      } // end for
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end writeMultiple3Odd_a ( )

/**
 writeMultiple3Odd_b - Gravar em arquivo texto certa quantidade 
                       de valores impares e multiplos de 3.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void writeMultiple3Odd_b ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int   y       = 0;

   // repetir para a quantidade de dados
      for ( y = 1; y <= x; y = y + 1 )
      {
          // gravar valor
             fprintf ( arquivo, "%d\n", 3 + (y-1)*6 );       
      } // end for
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end writeMultiple3Odd_b ( )

/**
 Method11 - gravar certa quantidade de multiplos de tres impares em arquivo
 */

void method11 ( )
{
    // definir dados
       int x = 0;

    // identificar
       IO_id ( "Exemplo0716 - Method11 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com uma quantidade: " );
    
    // testar quantidade
       while ( x <= 0)
       {
           IO_println     ( "Valor invalido! Entre com uma quantidade positiva!" );
           x = IO_readint ( "\nEntre com uma quantidade valida: " );
       } // end while

   // executar o metodo auxiliar
      writeMultiple3Odd_a ( "DADOS11A.TXT", x );
      writeMultiple3Odd_b ( "DADOS11B.TXT", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method11 ( )

/**
 writeMultiple3Even_a - Gravar em arquivo texto certa quantidade 
                        decrescente de valores pares e multiplos de 3.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void writeMultiple3Even_a ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int   y       = 0;

   // repetir para a quantidade de dados
      for ( y = 0; y < x; y = y + 1 )
      {
          // gravar valor
             fprintf ( arquivo, "%d\n", (x-y)*6 );       
      } // end for
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end writeMultiple3Even_a ( )

/**
 writeMultiple3Even_b - Gravar em arquivo texto certa quantidade 
                        decrescente de valores pares e multiplos de 3.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void writeMultiple3Even_b ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int   y       = 0;

   // repetir para a quantidade de dados
      for ( y = x; y > 0; y = y - 1 )
      {
          // gravar valor
             fprintf ( arquivo, "%d\n", 6*y );       
      } // end for
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end writeMultiple3Even_b ( )

/**
 Method12 - gravar certa quantidade de multiplos de tres pares em arquivo
 */

void method12 ( )
{
    // definir dados
       int x = 0;

    // identificar
       IO_id ( "Exemplo0716 - Method12 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com uma quantidade: " );
    
    // testar quantidade
       while ( x <= 0)
       {
           IO_println     ( "Valor invalido! Entre com uma quantidade positiva!" );
           x = IO_readint ( "\nEntre com uma quantidade valida: " );
       } // end while

   // executar o metodo auxiliar
      writeMultiple3Even_a ( "DADOS12A.TXT", x );
      writeMultiple3Even_b ( "DADOS12B.TXT", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );


} // end method12 ( )

/**
 power5_a - Gravar em arquivo texto certa quantidade 
            de potencias de cinco.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void power5_a ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int   y       = 0;

   // repetir para a quantidade de dados
      do
      {
          // gravar valor
             fprintf ( arquivo, "%d\n", (int) pow ( 5.0, (1.0*y) ) );

          // passar ao proximo
             y = y+1;    
      } while ( y < x );
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end power5_a ( )

/**
 power5_b - Gravar em arquivo texto certa quantidade 
            de potencias de cinco.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void power5_b ( chars fileName, int x )
{
   // definir dados
      FILE* arquivo = fopen ( fileName, "wt" );
      int   y       = 0;

   // repetir para a quantidade de dados
      for ( y = 0; y < x ; y = y + 1 )
      {
          // gravar valor
             fprintf ( arquivo, "%d\n", (int) pow ( 5.0, (1.0*y) ) );       
      } // end for
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end power5_b ( )

/**
 Method13 - gravar certa quantidade das potencias de cinco em arquivo
 */

void method13 ( )
{
    // definir dados
       int x = 0;

    // identificar
       IO_id ( "Exemplo0716 - Method13 - v0.0" );

    // ler do teclado
       x = IO_readint ( "Entre com uma quantidade: " );
    
    // testar quantidade
       while ( x <= 0)
       {
           IO_println     ( "Valor invalido! Entre com uma quantidade positiva!" );
           x = IO_readint ( "\nEntre com uma quantidade valida: " );
       } // end while

   // executar o metodo auxiliar
      power5_a ( "DADOS13A.TXT", x );
      power5_b ( "DADOS13B.TXT", x );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method13 ( )

/**
 powerFraction3_a - Gravar em arquivo texto certa quantidade 
                   de fracoes de potencias de tres decrescente.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void powerFraction3_a ( chars fileName, int x )
{
   // definir dados
      FILE*  arquivo = fopen ( fileName, "wt" );
      int    y       = 1;
      double z       = 0.0;        

   // repetir para a quantidade de dados
      do
      {
          // definir denominador 
             z = pow ( 3.0, (1.0*(x-y) ) );     // calcular potencia antes

          // gravar valor
             fprintf ( arquivo, "%lf\n", 1.0/z );

          // passar ao proximo
             y = y+1;
      } while ( z != 1.0 );
   
   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end powerFraction3_a ( )

/**
 powerFraction3_b - Gravar em arquivo texto certa quantidade 
                   de fracoes de potencias de tres decrescente.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/

void powerFraction3_b ( chars fileName, int x )
{
   // definir dados
      FILE*  arquivo = fopen ( fileName, "wt" );
      int    y       = 0;     

   // repetir para a quantidade de dados
      for ( y = x-1; y >= 0; y=y-1)
      {
          // gravar valor
             fprintf ( arquivo, "%lf\n", pow ( 3.0, (-1.0*y) ) );   
      } // end for

   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end powerFraction3_b ( )

/**
 Method14 - gravar certa quantidade de fracoes das potencias de tres em arquivo
 */

void method14 ( )
{
   // definir dados
      int x = 0;

   // identificar
      IO_id ( "Exemplo0716 - Method14 - v0.0" );

   // ler do teclado
      x = IO_readint ( "Entre com uma quantidade: " );
    
   // testar quantidade
      while ( x <= 0)
      {
          IO_println     ( "Valor invalido! Entre com uma quantidade positiva!" );
          x = IO_readint ( "\nEntre com uma quantidade valida: " );
      } // end while

  // executar o metodo auxiliar
     powerFraction3_a ( "DADOS14A.TXT", x );
     powerFraction3_b ( "DADOS14B.TXT", x );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method14 ( )

/**
 fraction - Gravar em arquivo texto certa quantidade 
            de fracoes de base x e potencia impar.
 @param fileName - nome do arquivo
 @param n - quantidade de valores
 @param x - base da potencia no denominador

*/

void fraction ( chars fileName, int n, double x )
{
   // definir dados
      FILE*  arquivo = fopen ( fileName, "wt" );
      int    y       = 0;     
   
   // mostrar em arquivo quantidade de valores
      fprintf ( arquivo, "%d\n", n );

   // definir n = 1
      fprintf ( arquivo, "%lf\n", 1.0 );

   // repetir para a quantidade de dados, se n > 1
      for ( y = 1; y < n; y=y+1 )
      {
          // gravar valor
             fprintf ( arquivo, "%lf\n", pow ( x, -1.0*(2*y-1) ) );   
      } // end for

   // fechar arquivo (INDISPENSAVEL para gravacao)
      fclose ( arquivo );

} // end fraction ( )

/**
 Method15 - Gravar certa quantidade de fracoes de base x e potencia impar
 */

void method15 ( )
{
   // definir dados
      int    n = 0;
      double x  = 0.0;

   // identificar
      IO_id ( "Exemplo0716 - Method15 - v0.0" );

   // ler do teclado
      n = IO_readint ( "Entre com uma quantidade: " );
    
   // testar quantidade
      while ( n <= 0)
      {
          IO_println     ( "Valor invalido! Entre com uma quantidade positiva!" );
          n = IO_readint ( "\nEntre com uma quantidade valida: " );
      } // end while

   // ler do teclado
      x = IO_readdouble ( "Entre com a base para o denominador: " );
    
   // testar denominador
      while ( x == 1)
      {
          IO_println        ( "Valor invalido! Entre com um denominador diferente de 1!" );
          x = IO_readdouble ( "\nEntre com a base para o denominador: " );
      } // end while

  // executar o metodo auxiliar
     fraction ( "DADOS15.TXT", n, x);

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method15 ( )

/**
 readAndAddUp - Ler de arquivo texto certa quantidade de valores 
                e somar os valores
 @param fileIn  - nome do arquivo para retirar valores
 @param fileOut - nome do arquivo para gravar informacoes
 @param n        - quantidade de valores a serem lidos
*/

double readAndAddUp ( chars fileIn, chars fileOut, int n )
{
    // definir dados
       FILE*  dados      = fopen ( fileIn,  "rt" );
       FILE*  resultados = fopen ( fileOut, "at" );
       int    y          = 1;
       int    w          = 0;
       double z          = 0.0;
       double soma       = 0.0;
    
    // tentar ler primeiro valor
       IO_fscanf ( dados, "%d", &w );
    
    // repetir enquanto houver dados e
    // quantidade nao tiver sido alcancada
       if ( n > 0 )
       {
            while ( ( ! feof ( dados ) ) && 
                    ( w >= n && n >= y ) )
            {
                // tentar ler
                    IO_fscanf ( dados, "%lf", &z );
                    //IO_printf ( "Dados = %2d: %lf\n", y, z );
                // somar valor
                    soma = soma + z;
                    //IO_printf ( "Soma  = %2d: %lf\n", y, soma );
                // passar ao proximo
                    y = y + 1;
            } // end while
       } // end if
    
    // salvar quantidade e resultado em arquivo
       if ( w >= n && n > 0 )
       {
           IO_fprintf ( resultados, "Quantidade = %2d\t Resultado = %lf\n", n, soma );
       } // end if
       
       else
       {
           IO_fprintf ( resultados, "Quantidade = %2d\t ERRO: Valor invalido\n", n);
       } // end else

    // fechar arquivos
       fclose (   dados    );
       fclose ( resultados );

    // retornar soma
       return ( soma );

} // end readAndAddUp ( )

/**
 Method16 - Adicionar ao arquivo soma dos (n) primeiros valores
            obtidos na opcao 15
 */

void method16 ( )
{
   // definir dados
      int    n = 0;

   // identificar
      IO_id ( "Exemplo0716 - Method16 - v0.0" );

   // ler do teclado
      n = IO_readint ( "Entre com uma quantidade: " );

  // executar o metodo auxiliar
     readAndAddUp ( "DADOS15.TXT", "RESULTADO06.TXT", n );

   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method16 ( )

/**
 Method17 -
 */

void method17 ( )
{
    // identificar
       IO_id ( "Exemplo0716 - Method17 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method17 ( )

/**
 Method18 -
 */

void method18 ( )
{
    // identificar
       IO_id ( "Exemplo0716 - Method18 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method18 ( )

/**
 Method19 -
 */

void method19 ( )
{
    // identificar
       IO_id ( "Exemplo0716 - Method19 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method19 ( )

/**
 Method20 -
 */

void method20 ( )
{
    // identificar
       IO_id ( "Exemplo0716 - Method20 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end method20 ( )

/**
 MethodE1 -
 */

void methodE1 ( )
{
    // identificar
       IO_id ( "Exemplo0716 - MethodE1 - v0.0" );

    // encerrar
       IO_pause ( "Apertar ENTER para continuar" );

} // end methodE1 ( )

/**
 MethodE2 -
 */

void methodE2 ( )
{
    // identificar
       IO_id ( "Exemplo0716 - MethodE2 - v0.0" );

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
               IO_id ( "Exemplo0716 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0  - parar" );
               IO_println ( "1  - gravar certa quantidade de valores em arquivo                        " );
               IO_println ( "2  - ler certa quantidade de valores em arquivo                           " );
               IO_println ( "3  - gravar certa quantidade de valores reais em arquivo                  " );
               IO_println ( "4  - ler certa quantidade de valores reais em arquivo                     " );
               IO_println ( "5  - gravar certa quantidade de linhas de caracteres em arquivo           " );
               IO_println ( "6  - ler certa quantidade de linhas de caracteres em arquivo              " );
               IO_println ( "7  - copiar texto de um arquivo para outro                                " );
               IO_println ( "8  - gravar certa quantidade de linhas de caracteres em arquivo           " );
               IO_println ( "9  - ler palavras de arquivo                                              " );
               IO_println ( "10 - procurar palavras em arquivo                                         " );
               IO_println ( "11 - gravar certa quantidade de multiplos de tres impares em arquivo      " );
               IO_println ( "12 - gravar certa quantidade de multiplos de tres pares em arquivo        " );
               IO_println ( "13 - gravar certa quantidade das potencias de cinco em arquivo            " );
               IO_println ( "14 - gravar certa quantidade de fracoes das potencias de tres em arquivo  " );
               IO_println ( "15 - gravar certa quantidade de fracoes de base x e potencia impar        " );
               IO_println ( "16 - adicionar ao arquivo soma dos n primeiros valores obtidos na opcao 15" );
               // IO_println ( "17 - " );
               // IO_println ( "18 - " );
               // IO_println ( "19 - " );
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
 ----------------------------- previsao de testes

Gravar em arquivo:

RESULTADOS06.TXT 

Quantidade =  1	 Resultado = 1.000000
Quantidade =  3	 Resultado = 1.625000
Quantidade =  5	 Resultado = 1.664063
Quantidade =  0	 ERRO: Valor invalido
Quantidade = -1	 ERRO: Valor invalido
Quantidade =  6	 ERRO: Valor invalido
Quantidade =  4	 Resultado = 1.656250

*/

