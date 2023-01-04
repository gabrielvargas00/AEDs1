/*
Exemplo0710 - v0.0. - 04 / 05 / 2022
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
       IO_id ( "Exemplo0710 - Method01 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method02 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method03 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method04 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method05 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method06 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method07 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method08 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method09 - v0.0" );

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
       IO_id ( "Exemplo0710 - Method10 - v0.0" );

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
               IO_id ( "Exemplo0710 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0  - parar" );
               IO_println ( "1  - gravar certa quantidade de valores em arquivo             " );
               IO_println ( "2  - ler certa quantidade de valores em arquivo                " );
               IO_println ( "3  - gravar certa quantidade de valores reais em arquivo       " );
               IO_println ( "4  - ler certa quantidade de valores reais em arquivo          " );
               IO_println ( "5  - gravar certa quantidade de linhas de caracteres em arquivo" );
               IO_println ( "6  - ler certa quantidade de linhas de caracteres em arquivo   " );
               IO_println ( "7  - copiar texto de um arquivo para outro                     " );
               IO_println ( "8  - gravar certa quantidade de linhas de caracteres em arquivo" );
               IO_println ( "9  - ler palavras de arquivo                                   " );
               IO_println ( "10 - procurar palavras em arquivo                              " );
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

Pesquisar, em DADOS4.TXT, algumas palavras
e devolver resultado booleano

Procurar ("pqr") = 0
Procurar ("pqs") = 0
Procurar ("ABC") = 1
Procurar ("9") = 1
Procurar ("1") = 1
Procurar ("parar") = 1
Procurar ("PARAR") = 1

* E' esperada a palavra PARAR, pois, embora represente o fim do arquivo,
  para este metodo, e' apenas uma palavra a ser lida
 ----------------------------- historico

Versao         Data        Modificacao
1.0            05/05       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       gravar certa quantidade de valores em arquivo
0.2            01.(OK)       ler certa quantidade de valores em arquivo
0.3            01.(OK)       gravar certa quantidade de valores reais em arquivo
0.4            01.(OK)       ler certa quantidade de valores reais em arquivo
0.5            01.(OK)       gravar certa quantidade de linhas de caracteres em arquivo
0.6            01.(OK)       ler certa quantidade de linhas de caracteres em arquivo
0.7            01.(OK)       copiar texto de um arquivo para outro
0.8            01.(OK)       adicionar certa quantidade de linhas de caracteres em arquivo
0.9            01.(OK)       ler palavras de arquivo
1.0            01.(OK)       procurar palavras em arquivo

*/

