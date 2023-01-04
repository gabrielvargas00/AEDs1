/*
    Guia01E3 - v0.0. - 12 / 03 / 2022
    Author: Gabriel Vargas Bento de Souza

    Para compilar em uma janela de comandos (terminal):

    No Linux  : g++ -o Guia01E3   ./Guia01E3.cpp
    No Windows: g++ -o Guia01E3.exe Guia01E3.cpp

    Para executar em uma janela de comandos (terminal):

    No Linux  : ./Guia01E3
    No Windows:   Guia01E3

*/
// lista de dependencias
#include "karel.hpp"

// ------------------- definicoes de metodos

 */
class MyRobot : public Robot
{
 public:

  /**
   turnRight -Procedimento para virar 'a direita.
  */
  void turnRight ()
  {
   // testar se o robo esta' ativo
     if (checkStatus ())
     {
      // o agente que executar esse metodo
      // devera' virar tres vezes 'a esquerda
         turnLeft ();
         turnLeft ();
         turnLeft ();  
     } // end if
  } // end turnRight ()

 /**
    moveN - Metodo para mover certa quantidade de passos
    @param steps - passos a seres dados
  */
  void moveN( int steps )
  {
    // definir dado local
       int step = 0;
    // repetir contando e testando ate' atingir a quantidade de passos
       for (step = 1; step <= steps; step = step + 1)  //outra forma de repetir
    {
       // dar um passo por vez
          move();    
    }// end if
  }// end moveN()

    /**
    Pickbepers - Metodo para descrever o carregamento
    */

   void pickBeeper( int n)
   {
      // incluir comandos extras
      // testar se ha' marcador antes ...
       if ( nextToABeeper())
       {
        //... de tentar carrega-lo
          pickBeeper (n);  
       } // end if
     } // end pickBeepers()

    /**
    Putbepers - Metodo para descrever o descarregamento
    */

   void putBeeper( int n)
   {
      // incluir comandos extras
      // testar se ha' marcador antes ...
       if (nbeepers()>0)
       {
        //... de tentar descarrega-lo
          putBeeper (n);
       } // end if
   } // end putBeepers()