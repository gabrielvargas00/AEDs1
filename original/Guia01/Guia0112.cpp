/*
    Guia0111 - v0.0. - 11 / 03 / 2022
    Author: Gabriel Vargas Bento de Souza

    Para compilar em uma janela de comandos (terminal):

    No Linux  : g++ -o Guia0111   ./Guia0111.cpp
    No Windows: g++ -o Guia0111.exe Guia0111.cpp

    Para executar em uma janela de comandos (terminal):

    No Linux  : ./Guia0111
    No Windows:   Guia0111

*/
// lista de dependencias
#include "karel.hpp"

// ------------------- definicoes de metodos

/**
   decorateWorld - Metodo para preparar o cenario.
   @param fileName - nome do arquivo para guardar a descricao.
 */
void decorateWorld ( const char* fileName )
{
 //colocar paredes no mundo
world->set ( 6, 6, HWALL); //horizontal
world->set ( 6, 6, VWALL); //vertical

//colocar um marcador no mundo
world->set ( 3, 3, BEEPER);
world->set ( 6, 3, BEEPER);
world->set ( 6, 6, BEEPER);

 //salvar a configuracao atual do mundo
world->save( fileName );
} //decorateWorld ()

/**
  Classe para definir robo particular (MyRobot),
  a partir do modelo generico (Robot)

  Nota: Todas as definicoes irao valer para qualquer outro robo
        criado a partir dessa nova descricao de modelo

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

   void pickbepers()
   {
      // testar se ha' marcador antes ...
       if ( nextToABeeper())
       {
        //... de tentar carrega-lo
          pickBeeper();  
       } // end if
     }

    /**
    Putbepers - Metodo para descrever o descarregamento
    */

   void putBeepers()
   {
      // testar se carrega marcador antes...
       if (nbeepers()>0)
       {
        //... de tentar descarrega-lo
          putBeeper();
       } // end if
   }

   /**
    doTask - Relacao de acoes para qualquer robo executar 
   */
   void doTask ()
   {
    // especificar acoes da tarefa
    turnLeft();
    moveN(5);
    turnRight();
    moveN(5);
    pickbepers();
    turnRight();
    moveN(3);
    pickbepers();
    turnRight();
    moveN(3);
    pickbepers();
    moveN(2);
    turnLeft();
    moveN(2);
    turnLeft();

 // encerrar
    turnOff();                    // desligar-se
}// end doTask()

};// end class MyRobot


// ---------------------------- acao principal

/**
    Acao principal: executar a tarefa descrita acima.
 */

int main ()
{
 // definir o contexto

 // criar o ambiente e decorar com objetos
 // OBS.: executar pelo menos uma vez,
 //       antes de qualquer outra coisa
 //       (depois de criado, podera' ser comentado)
    world->create  ("");          // criar mundo
    decorateWorld ("Guia0111.txt");
    world->show   ();

 //preparar o ambiente para uso
   world->reset  ();              // limpar configuracoes
   world->read   ("Guia0111.txt");// ler configuracao atual para o ambiente
   world->show   ();              // mostrar a configuracao atual

   set_Speed ( 3 );               // definir velocidade padrao

 // criar robo
    MyRobot *robot = new MyRobot();

 // posicionar robo no ambiente (situacao inicial):
 // posicao(x=1,y=1), voltado para a direita, com zero marcadores, nome escolhido )
    robot->create ( 1, 1, EAST, 0, "Karel" );

 //executar tarefa
   robot->doTask ();

 // encerrar operacoes no ambiente
    world->close ();

 // encerrar programa
    getchar ();
    return ( 0 );

} // end main ()

 // -------------------------- testes

 /*
 ----------------------------- documentacao complementar

 ----------------------------- notas / observacoes / comentarios
 


 ----------------------------- previsao de testes



 ----------------------------- historico

 Versao        Data        Modificacao
  0.1          11/03       esboco

 ----------------------------- testes

Versao        Teste
  0.1          01. (OK)          teste inicial
  0.2          01. (OK)          teste da tarefa
  0.3          01. (OK)          teste da tarefa inicial
  0.4          01. (OK)          teste do apanhados marcador
  0.5          01. (OK)          teste do colocar marcador
  0.6          01. (OK)          teste da repeticao do movimento
  0.7          01. (OK)          teste com marcador na posicao (4,4)
               02. (OK)          teste sem marcador na posicao (4,4)
  0.8          01. (OK)          teste com a quantidade de marcadores
  0.9          01. (OK)          teste com outra forma de repeticao
  1.0          01. (OK)          teste com outra forma de alternativa
  1.1          01. (OK)          movimento robo com descarregamento de beepers
  1.2          01. (OK)          movimento robo com carregamento de beepers

 */