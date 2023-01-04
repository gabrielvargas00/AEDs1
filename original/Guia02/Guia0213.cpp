/*
  Guia_0213 - v0.0. - 19 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em uma janela de comandos (terminal):

  No Linux  :  g++ -o Guia0213   ./Guia0213.cpp
  No Windows:  g++ -o Guia0213.exe Guia0213.cpp

  Para executar em uma janela de comandos (terminal):

  No Linux  :  ./Guia0213
  No windows:    Guia0213
 */

// lista de dependencias
#include "karel.hpp"
#include "io.hpp"              // para entradas e saidas

// --------------------------- definicoes de metodos

/**
  decorateWorld - Metodo para preparar o cenario.
  @param fileName - nome do arquivo para guardar a descricao.
 */
void decorateWorld ( const char* fileName )
{
    // colocar paredes no mundo
       world->set ( 2, 3, VWALL );
       world->set ( 2, 4, VWALL );
       world->set ( 2, 5, VWALL );
       world->set ( 2, 6, VWALL );
       world->set ( 2, 7, VWALL );
       world->set ( 2, 8, VWALL );
       world->set ( 3, 3, VWALL );
       world->set ( 3, 4, VWALL );
       world->set ( 3, 5, VWALL );
       world->set ( 3, 6, VWALL );
       world->set ( 3, 7, VWALL );
       world->set ( 4, 3, VWALL );
       world->set ( 4, 4, VWALL );
       world->set ( 4, 5, VWALL );
       world->set ( 4, 6, VWALL );
       world->set ( 4, 7, VWALL );
       world->set ( 5, 3, VWALL );
       world->set ( 5, 4, VWALL );
       world->set ( 5, 5, VWALL );
       world->set ( 5, 6, VWALL );
       world->set ( 5, 7, VWALL );
       world->set ( 5, 8, VWALL );

       world->set ( 3, 2, HWALL );
       world->set ( 3, 8, HWALL );
       world->set ( 4, 2, HWALL );
       world->set ( 5, 2, HWALL );
       world->set ( 5, 8, HWALL );

    // colocar um marcador no mundo
       world->set ( 3, 3, BEEPER );
       world->set ( 4, 3, BEEPER );
       world->set ( 4, 3, BEEPER );
       world->set ( 5, 3, BEEPER );
       world->set ( 5, 3, BEEPER );
       world->set ( 5, 3, BEEPER );
       
    // salvar a configuracao atual do mundo
       world->save ( fileName );
} //decorateWorld ()

/**
  Classe para definifr robo particular (MyRobot),
  a partir do modelo generico (Robot).

  Nota: Todas as definicoes irao valer para qualquer outro robo
        criado a partir dessa nova descricao de modelo.
 */
class MyRobot : public Robot
{
    public:

    /**
      turnRight - Procedimento para virar 'a direita. 
     */
    void turnRight ()
    {
        // definir dado local
           int step = 0;
        
        // testar se o robo esta' ativo
           if ( checkStatus () )
           {
               // o agente que executar esse metodo
               // devera' virar tres vezes 'a esquerda
                  for ( step = 1; step <= 3; step = step + 1 )
                  {
                      turnLeft();  
                  } // end for
           } // end if
    }; // end turnRight()

    /**
      moveN - Metodo para mover certa quantidade de passos.
      @param steps - passos a serem dados. 
     */
    void moveN ( int steps )
    {
        // definir dado local
           int step =0;
           for ( step = steps; step > 0; step = step - 1 )
           {
               // dar um passo
                  move();
           } // end if
    } // end moveN()

    /**
      doPartialTask - Metodo para especificar parte de uma tarefa. 
     */
    void doPartialTask()
    {
        // especificar aoes dessa parte da tarefa
           moveN ( 3 );
           turnLeft();
    } // end doPartialTask()

    /**
     * pickBeepers - Funcao para coletar marcadores.
     * @return quantidade de marcadores coletados
     */
    int pickBeepers()
    {
        // definir dado local
           int n = 0;
        // repetir (com teste no inicio)
        // enquanto houver marcador proximo
           while (nextToABeeper());
           {
               // coletar um marcador
                  pickBeepers();
               // contar mais um marcador coletado
                  n = n + 1;
           } // end while
           // retornar a quantidade de marcadores coletados
           return ( n );
    } // end pickBeepers()

     /**
       do Square - Metodo para especificar outro percurso.
     */
    void doSquare()
    {
        // definir dado local
           int step = 1;
           int n = 0;
           char msg [80];

        // especificar acoes da tarefa
           while ( step <= 4 )
           {
               // realizar uma parte da tarefa
                  moveN(3);
                  n = pickBeepers();
               // testar se quantidade maior que zero
                  if ( n>0 )
                  {
                      // montar a mensagem de saida
                         sprintf ( msg, "Recolhidos = %d", n);
                      // solicitar a exibicao da mensagem
                         show_Text ( msg );
                  } // end if
                       turnRight();
               // tentar passar 'a proxima
                  step = step + 1;
           }  // end while
        // encerrar
           turnOff();
    }  // end doSquare()

     /**
      * execute - Metodo para executar um comando
      * @param action - comando a ser executado
      */
     void execute ( int option)
     {
         // executar a opcao de comando
            switch ( option )
            {
                case 0: // terminar
                        // nao fazer nada
                        break;

                case 1: // virar para a esquerda
                        if (leftIsClear())
                        {
                            turnLeft();
                        } // end if
                        break;

                case 2: // virar para o sul
                        while (!facingSouth())
                        {
                            turnLeft();
                        } // end while
                        break;

                case 3: // virar para a direita
                        if (rightIsClear())
                        {
                           turnRight(); 
                        } // end if
                        break;
                case 4: // virar para o oeste
                        while (!facingWest())
                        {
                            turnLeft();
                        } // end while
                        break;

                case 5: // mover
                        if (frontIsClear())
                        {
                            move ();
                        } // end if
                        break;    

                case 6: // virar para o leste
                        while (!facingEast())
                        {
                            turnLeft();
                        } // end while
                        break;
                
                case 7: // pegar marcador
                        if (nextToABeeper())
                        {
                            pickBeeper();
                        } // end if
                        break;
                
                case 8: // virar para o norte
                        while (!facingNorth())
                        {
                            turnLeft();
                        } // end while
                        break;

                case 9: // colocar marcador
                        if (beepersInBag())
                        {
                            putBeeper();
                        } // end if
                        break;

                default: // nenhuma das alternativas anteriores
                         // comando invalido
                            show_Error ( "ERROR: Invalid command." );
            } // end switch
     } // end execute()

     /**
      * moveI - Metodo para mover o robot interativamente.
      * Lista de comandos disponiveis:
      * 0 - turnOff                      
      * 1 - turnLeft                     2 - to South
      * 3 - turnRight                    4 - to West
      * 5 - move                         6- to East
      * 7 - pickBeeper                   8 - to North
      * 9 - putBeeper
      */

     void moveI()
     {
        // definir dados
           int action;

        // repetir (com testes no fim)
        // enquanto opcao diferente de zero
           do
           {
               // ler opcao
                  action = IO_readint ( "Command?" );

                // executar acao dependente da opcao
                   execute ( action );
           } while (action !=0);   
     } // end moveI()

     /**
      recordActions - Metodo para mover o robot interativamente 
      e quardar a descricao da tarefa em arquivo.
      @param fileName - nome do arquivo
      */
     void recordActions ( const char *fileName )
     {
         // definir dados
            int action;

         // definir arquivo onde gravar comandos
            std::ofstream archive ( fileName );

         // ler acao
            action = IO_readint ( "Command?" );
         
         // repetir enquanto acao maior ou igual a zero
            while (action >= 0)
            {
                // testar se opcao valida
                   if ( 0<= action && action <=9 )
                   {
                       // executar comando
                          execute (action);
                       // guardar o comando em arquivo
                          archive << action << "\n";
                   } // end if
                // ler acao
                   action = IO_readint ("Command?");
            } // end while
              // fechar o arquivo
              // INDISPENSAVEL para a gravacao
                 archive.close ();
        } // end recordActions()

     /**
      appendActions - metodo para acrescentar comandos ao arquivo
      @param filename - nome do arquivo
      */
     void appendActions ( const char *fileName )
     {
         // definir dados
            int action;
         // definir arquivo para receber acrescimos ao final
            std::fstream archive ( fileName, std::ios::app );

         // repetir enquanto acao diferente de zero
            do
            {
                // ler acao
                   action = IO_readint ( "Command?" );

                // testar se opcao valida
                   if (0<= action && action<=9)
                   {
                       // executar comando
                          execute (action);
                       // gaurdar comando em arquivo
                          archive << action << std::endl;
                   } // end if
            } while (action !=0);
        // fechar arquivo
        // INDISPENSAVEL para a gravao
           archive.close();
     } // end appendActions()

     /**
      playActions - Metodo para receber comandos de arquivo.
      @param fileName - nome do arquivo
      * 
      */
     void playActions ( const char *fileName)
     {
         // definir dados
            int action;

         // definir arquivos de onde ler dados
            std::ifstream archive (fileName);

         // repetir enquanto houver dados
            archive >> action;       // tentar ler a primeira linha
            while(!archive.eof())    // testar se nao encontrado o fim
            {
                // mostrar mais um comando
                   IO_print(IO_toString (action));
                   delay (stepDelay);

                // executar mais um comando
                   execute (action);
                
                // tentar ler a proxima linha
                   archive >> action;
            } // end for
        // fechar o arquivo
        // RECOMENDAVEL para a leitura
           archive.close ();
     } // end playActions ()

     /**
      * dictionary - Metodo para traduzir um comando
      * @param action - comando a ser traduzido
      */
    chars dictionary(int action)
    {
        // definir dado
           static char word [80];
           strcpy ( word, "" );  //palavra vazia
        // identificar comando
           switch (action)
           {
               case 1: // virar para a esquerda
               strcpy ( word, "turnLeft(); " );
               break;

               case 2: // virar para o sul
               strcpy ( word, "faceSouth(); " );
               break;

               case 3: // virar para a direita
               strcpy ( word, "turnRight(); " );
               break;

               case 4: // virar para o oeste
               strcpy ( word, "faceWest(); " );
               break;

               case 5: // mover
               strcpy ( word, "move(); " );
               break;

               case 6: // virar para o leste
               strcpy ( word, "faceEast(); " );
               break;

               case 7: // pegar marcador
               strcpy ( word, "pickBeeper(); " );
               break;

               case 8: // virar para o norte
               strcpy ( word, "faceNorth(); " );
               break;

               case 9: // colocar marcador
               strcpy ( word, "putBeeper(); " );
               break;
           } // end switch

        // retornar palavra equivalente
            return ( &(word[0]) );
    } // end dictionaty()

     /**
      translateActions - Metodo para receber comandos de arquivo e traduzi-los
      @param fileName - nome do arquivo 
      */
     void translateActions ( const char *fileName )
     {
         // definir dados
            int action;

         // definir arquivo de onde ler dados
            std::ifstream archive ( fileName );

         // repetir enquanto houver dados
            archive >> action;           // tentar ler a primeira linha
            while(!archive.eof())        // testar se nao encontrado o fim
            {
                // tentar traduzir um comando
                   IO_print ( dictionary (action) );
                   getchar();
                
                // guardar mais um comando
                   execute (action);

                // tentar ler a proxima linha
                   archive >> action;    // tentar ler a proxima linha
            } // end for
        // fechar o arquivo
        // RECOMENDAVEL para a leitura
           archive.close ();
     } // end translateActions()

     /**
       stepUpRight - Metodo para subir um degrau e virar 'a direita
      */
     void stepUpRight()
     {
         // acoes para subir um degrau
            faceNorth();
            moveN(1);
         // acoes para virar 'a direita
            faceEast();
            moveN(1);
     } // end setpUpRight()

     /**
       stepDownRight - Metodo para descer um degrau e virar 'a direita
      */
     void stepDownRight()
     {
         // acoes para virar 'a direita
            faceEast();
            moveN(1);
         // acoes para descer um degrau
            faceSouth();
            moveN(1);
     } // end setpDownRight()

     /**
       stepUpLeft - Metodo para subir um degrau e virar 'a esquerda
      */
     void stepUpLeft()
     {
         // acoes para subir um degrau
            faceNorth();
            moveN(1);
         // acoes para virar 'a esquerda
            faceWest();
            moveN(1);
     } // end setpUpLeft()

     /**
       stepDownLeft - Metodo para descer um degrau e virar 'a esquerda
      */
     void stepDownLeft()
     {
         // acoes para virar 'a esquerda
            faceWest();
            moveN(1);
         // acoes para descer um degrau
            faceSouth();
            moveN(1);
     } // end setpDownLeft()


     /**
       doTaskA - Relacao de acoes para o robo executar horizontalmente
      */
     void doTaskA()
     {
        // especificar acoes da tarefa
           moveN(3);
           turnLeft();
           moveN(2);
           pickBeeper();
           turnLeft();
           turnLeft();
           moveN(2);
           turnLeft();
           moveN(3);
           turnLeft();
           moveN(1);
        
     } // end doTaskA
     
     /**
       doTaskB - Relacao de acoes para o robo executar verticalmente
      */
     void doTaskB()
     {
        // especificar acoes da tarefa
           moveN(3);
           turnLeft();
           moveN(2);
           pickBeeper();
           turnLeft();
           turnLeft();
           moveN(2);
           turnLeft();
           moveN(4);
           turnLeft();
         
     } // end doTaskB
    
     /**
      doTaskC - Metodo para verificar se esta' na posicao correta e depositar os beepers
      */
     void doTaskC()
     {
         // especificar acoes da tarefa
        
         // testar se esta' na posicao desejada...
           if ( areYouHere(9,1))
           {
               // ... antes de fazer algo
                  while (beepersInBag())     // esta' portando marcadores?
                  {
                      //  colocar marcadores
                          putBeeper();
                  } // end while
           } // end if
     }


     /**
       doTask - Relacao de acoes para o robo executar 
      */
     void doTask()
     {
        // especificar acoes da tarefa
           faceNorth();
           moveN(8);
           faceEast();
           moveN(3);
           faceSouth();
           moveN(1);
           faceWest();
           moveN(1);
           turnLeft();
           moveN(5);
           pickBeeper();
           faceNorth();
           moveN(5);
           faceEast();
           moveN(1);
           faceSouth();
           moveN(5);
           pickBeeper();
           pickBeeper();
           faceNorth();
           moveN(5);
           faceEast();
           moveN(1);
           faceSouth();
           moveN(5);
           pickBeeper();
           pickBeeper();
           pickBeeper();
           faceNorth();
           moveN(5);
           turnLeft();
           moveN(1);
           faceNorth();
           moveN(1);
           faceEast();
           moveN(5);
           faceSouth();
           moveN(8);
           doTaskC();
           faceWest();
           moveN(8);
           faceEast();
           turnOff();        

     } // end doTask
}; // end clas MyRobot

// --------------------------- acao principal

/**
  Acao principal: executar a tarefa descrita a cima. 
 */

int main()
{
    // definir o contexto

    // preparar o ambiente para uso
       world->reset ();                   // limpar configuracoes
       world->read  ( "Guia0213.txt" );   // ler configuracao atual para o ambiente
       world->show  ();                   // mostrar a configuracao atual

    // criar o ambiente e decorar com objetos
    // OBS.: excecutar pelo menos uma vez
    //       antes de qualquer outra coisa
    //       (depois de criado, podera' ser comentado)
       world->create ("");                // criar o mundo  
       decorateWorld ( "Guia0213.txt" );
       world->show   ();

       set_Speed ( 3 );                   // definir velocidade padrao

    // criar robo
       MyRobot *robot = new MyRobot();

    // posicionar robo no ambiente (situacao inicial):
    // posicao (x=1, y=1), voltado para direita, com zero marcadores, nome escolhido
       robot->create ( 1, 1, EAST, 0, "Karel" );

    // executar tarefa e gravar acoes
       robot->doTask();

       robot->recordActions     ("Tarefa0213.txt");
       robot->playActions       ("Tarefa0213.txt");
       robot->recordActions     ("Tarefa0213.txt");
       robot->translateActions  ("Tarefa0213.txt");
       robot->recordActions     ("Tarefa0213.txt");

    // dar uma pausa na entrada de comandos
       show_Text                ("Pause on recording");

    // mostrar configuracao atual do mundo
       world->show ();

    // retomar a entrada de comandos
       robot->appendActions     ("Tarefa0213.txt");
    
    // reproduzir todos os comandos
       robot->playActions       ("Tarefa0213.txt");

    // encerrar operacoes no ambiente
       world->close ();

    // encerrar programa
       getchar ();
       return (0);

} // end main ()

// --------------------------- testes

/*
------------------------------ documentacao complementar
------------------------------ notas / observacoes / comentarios
------------------------------ previsao de testes
------------------------------ historico

Versao         Data        Modificacao
1.3            19/03       esboco

------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa
0.2           01.(OK)          teste repeticao virar 'a direita    
0.3           01.(OK)          teste da repeticao para percorrer um quadrado
0.4           01.(OK)          teste pickBeepers
0.5           01.(OK)          teste mensagem
0.6           01.(OK)          teste switch
0.7           01.(OK)          teste recordActions
0.8           01.(OK)          teste playActions
0.9           01.(OK)          teste translateActions
1.0           01.(OK)          teste recordActions
1.1           01.(OK)          exercicio 01
1.2           01.(OK)          exercicio 02
1.3           01.(OK)          exercicio 03

*/