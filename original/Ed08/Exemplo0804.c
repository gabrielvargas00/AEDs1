/*
Exemplo0804 - v0.0. - 16 / 05 / 2022
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
      IO_id ( "Exemplo0804 - Method01 - v0.0" );
    
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
      IO_id ( "Exemplo0804 - Method02 - v0.0" );
   
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
      IO_id ( "Exemplo0804 - Method03 - v0.0" );
   
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
      IO_id ( "Exemplo0804 - Method04 - v0.0" );

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
 Method05 - 
 */

void method05 ( )
{  
   // identificar
      IO_id ( "Exemplo0804 - Method05 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )

/**
 Method06 - 
 */

void method06 ( )
{  
   // identificar
      IO_id ( "Exemplo0804 - Method06 - v0.0" );
       
    // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )

/**
 Method07 - 
 */

void method07 ( )
{  
   // identificar
      IO_id ( "Exemplo0804 - Method07 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )

/**
 Method08 - 
 */

void method08 ( )
{  
   // identificar
      IO_id ( "Exemplo0804 - Method08 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )

/**
 Method09 - 
 */

void method09 ( )
{  
   // identificar
      IO_id ( "Exemplo0804 - Method09 - v0.0" );
       
   // encerrar
      IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )

/**
 Method10 - 
 */

void method10 ( )
{  
   // identificar
      IO_id ( "Exemplo0804 - Method10 - v0.0" );
       
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
               IO_id ( "Exemplo0804 - Programa - v0.0" );

            // ler do teclado
               IO_println ( "Opcoes" );
               IO_println ( "0 - parar" );
               IO_println ( "1 - mostrar valores inteiros de um arranjo         " );
               IO_println ( "2 - ler e mostrar valores inteiros de um arranjo   " );
               IO_println ( "3 - gravar em arquivo arranjo com valores inteiros " );
               IO_println ( "4 - ler de arquivo arranjo com valores inteiros    " );
               // IO_println ( "5 - " );
               // IO_println ( "6 - " );
               // IO_println ( "7 - " );
               // IO_println ( "8 - " );
               // IO_println ( "9 - " );
               // IO_println ( "10 - " );
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

ler do arquivo ARRAY1.TXT:

 0: 1
 1: 2
 2: 3
 3: 4
 4: 5

 ----------------------------- historico

Versao         Data        Modificacao
0.4            16/05       esboco

------------------------------ testes

Versao         Teste       
0.1            01.(OK)       mostrar valores inteiros de um arranjo
0.2            01.(OK)       ler e mostrar valores inteiros de um arranjo
0.3            01.(OK)       gravar em arquivo arranjo com valores inteiros
0.4            01.(OK)       ler de arquivo arranjo com valores inteiros

*/
  
