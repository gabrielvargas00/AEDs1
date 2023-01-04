/*
  Guia_0312 - v0.0. - 25 / 03 / 2022
  Author: Gabriel Vargas Bento de Souza

  Para compilar em uma janela de comandos (terminal):

  No Linux  :  g++ -o Guia0312   ./Guia0312.cpp
  No Windows:  g++ -o Guia0312.exe Guia0312.cpp

  Para executar em uma janela de comandos (terminal):

  No Linux  :  ./Guia0312
  No windows:    Guia0312
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

       world->set ( 1, 3, VWALL );
       world->set ( 1, 4, VWALL );
       world->set ( 1, 5, VWALL );
       world->set ( 1, 6, VWALL );
       world->set ( 1, 7, VWALL );
       world->set ( 1, 8, VWALL );
       world->set ( 2, 3, VWALL );
       world->set ( 2, 4, VWALL );
       world->set ( 2, 5, VWALL );
       world->set ( 2, 6, VWALL );
       world->set ( 2, 7, VWALL );
       world->set ( 3, 5, VWALL );
       world->set ( 3, 6, VWALL );
       world->set ( 4, 7, VWALL );
       world->set ( 5, 6, VWALL );
       world->set ( 7, 3, VWALL );
       world->set ( 7, 4, VWALL );
       world->set ( 7, 5, VWALL );
       world->set ( 7, 6, VWALL );
       world->set ( 7, 7, VWALL );

       world->set ( 2, 2, HWALL );
       world->set ( 3, 2, HWALL );
       world->set ( 4, 2, HWALL );
       world->set ( 5, 2, HWALL );
       world->set ( 6, 2, HWALL );
       world->set ( 7, 2, HWALL );
       world->set ( 4, 4, HWALL );
       world->set ( 5, 4, HWALL );
       world->set ( 6, 4, HWALL );
       world->set ( 6, 5, HWALL );
       world->set ( 4, 6, HWALL );
       world->set ( 5, 6, HWALL );
       world->set ( 3, 7, HWALL );
       world->set ( 5, 7, HWALL );
       world->set ( 6, 7, HWALL );
       world->set ( 7, 7, HWALL );
       world->set ( 2, 8, HWALL );
       world->set ( 3, 8, HWALL );
       world->set ( 4, 8, HWALL );
       world->set ( 5, 8, HWALL );
       world->set ( 6, 8, HWALL );
       world->set ( 7, 8, HWALL );

    // colocar um marcador no mundo
       world->set ( 2, 3, BEEPER );
       world->set ( 4, 6, BEEPER );
       world->set ( 4, 6, BEEPER );
       world->set ( 5, 7, BEEPER );
       world->set ( 5, 7, BEEPER );
       world->set ( 5, 7, BEEPER );

    // salvar a configuracao atual do mundo
       world->save ( fileName );
} // decorateWorld ()

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
        // testar se a quantidade de passos e' maior que zero
           for ( step = steps; step > 0; step = step - 1 )
           {
               // dar um passo
                  move();
           } // end if
    } // end moveN()

    /**
     countCommands - Metodo para contar comandos de arquivo.
     @return quantidade de comandos
     @param fileName - nome do arquivo
     */
    int countCommands( const char *fileName)
    {
       // definir dados
          int x      = 0;
          int length = 0;

       // abrir arquivo para leitura
          std::ifstream archive ( fileName );

       // repetir enquanto houver dados
          archive >> x;        // tentar ler o primeiro
          while ( ! archive.eof ( ) )
          {
             // contar mais um comando lido
                length = length + 1;

             // tentar ler o proximo
                archive >> x;
          } // end while
       // fechar arquivo
          archive.close();
       // retornar resultado
          return ( length );
    } // end countCommands()

    /**
     readCommands - Metodo para receber comandos de arquivo
     @return grupo formado por todos os comandos
     @param filename - nome do arquivo 
     */
    int readCommands ( int commands [ ], const char* fileName )
    {
       // definir dados
          int  x       = 0;
          int  action  = 0;
          int  length  = 0;
          std::ifstream archive ( fileName );

       // obter a quantidade de comandos
          length = countCommands ( fileName );

       // criar um armazenador para os comandos
          if ( length < MAX_COMMANDS)
          {
             // repetir para a quantiade de comandos
                for ( x = 0; x < length; x = x + 1 )
                {
                   // tentar ler a proxima linha
                      archive >> action;
                   // guardar um comando
                   // na posicao (x) do armazenador
                      commands [ x ] = action; 
                } // end for
             // retornar quantidade de comandos lidos
                return ( length );
         } // end if
    } // end readCommands()

    /**
     execute - Metodo para executar um comando
     @param action - comando a ser executado
     */
    void execute ( int option )
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

                case 10: // inverter a direcao do movimento
                             turnLeft();
                             turnLeft();
                         break;

                case 11: // fazer curva fechada 'a esquerda ("U")
                        if (frontIsClear())
                        {
                            move ();
                        } // end if

                        if (leftIsClear())
                        {
                           turnLeft();
                        } // end if

                        move ();

                        if (leftIsClear())
                        {
                           turnLeft();
                        } // end if

                        move ();
                        break;

                case 12: // fazer curva fechada 'a direita ("U")
                        if (frontIsClear())
                        {
                            move ();
                        } // end if

                        if (rightIsClear())
                        {
                           turnRight();
                        } // end if

                        move ();

                        if (rightIsClear())
                        {
                           turnRight();
                        } // end if

                        move ();
                        break;

                default: // nenhuma das alternativas anteriores
                         // comando invalido
                            show_Error ( "ERROR: Invalid command." );
            } // end switch
     } // end execute()
     /**
      * moveI - Metodo para mover o robot interativamente.
      * Lista de comandos disponiveis:
      * 0 -  turnOff                      
      * 1 -  turnLeft                     2 - to South
      * 3 -  turnRight                    4 - to West
      * 5 -  move                         6- to East
      * 7 -  pickBeeper                   8 - to North
      * 9 -  putBeeper                   
      * 10 - turnAround
      * 11 - turnAroundCornerLeft
      * 12 - turnAroundCornerRight
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
      e guardar a descricao da tarefa em arquivo.
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
            while (action > 0)
            {
                // testar se opcao valida
                   if ( 0<= action && action <=12 )
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
      @param fileName - nome do arquivo
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
                   if (0<= action && action<=12)
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

               case 10: // inverter a direcao do movimento
               strcpy ( word, "turnAround(); " );
               break;

               case 11: // fazer curva fechada 'a esquerda ("U")
               strcpy ( word, "turnAroundCornerLeft(); " );
               break;

              case 12: // fazer curva fechada 'a direita ("U")
              strcpy ( word, "turnAroundCornerRight(); " );
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
      metodo para executar comandos de arquivo
      @param length   - quantidade de comandos
      @param commands - quantidade de comandos para executar
     */
    void doCommands ( int length, int commands [ ] )
    {
        // definir dados
           int action = 0;
           int x      = 0;

        // repetir para a quantidade de comandos
           for ( x = 0; x < length; x = x + 1 )
           {
               // executar esse comando
                  execute ( commands [ x ] );
           } // end for
    } // end doCommands()
    
    /**
     doTask - Metodo para executar comandos de arquivo
     @param fileName - nome do arquivo 
     */
    void doTask ( const char* fileName )
    {
       // definir dados locais 
          int quantidade = 0;
          int comandos   [ MAX_COMMANDS ];
          char message   [ 80 ];

       // ler quantidade de comandos
          quantidade = readCommands  ( comandos, "Tarefa0312.txt" );
          message [ 0 ] = '\0';       // limpar a mensagem
          sprintf ( message, "Commands = %d", quantidade );
          show_Text ( message );

       // executar comandos
          doCommands ( quantidade, comandos );
    } // end doTask ()

    /**
     mapWorld - Metodo para o robot explorar o mundo e fazer um mapa
     @param map - arranjo bidimensional (matriz) onde guardar o mapa
     */
    void mapWorld( int map [ ] [ WIDTH ])
    {
        // definir dados locais
           int avenue   = 0;
           int street   = 0;
           int beepers  = 0;
           char message [ 80 ];

        // obter o tamanho do mundo se existir
           if ( world != nullptr)
           {
               // informar o tamanho do mundo
                  message [ 0 ] = '\0';         // limpar a mensagem
                  sprintf ( message, "World is %dx%d",
                            world->avenues(), world->streets());
                  show_Text ( message );

               // percorrer o mundo procurando marcadores
                  for ( street = 1; street <= world->streets(); street = street + 1 )
                  {
                      for ( avenue =  1; avenue <= world->avenues(); avenue = avenue + 1 )
                      {
                          // limpar posicao no mapa
                             map [ street - 1] [ avenue - 1 ] = 0;
                          // se proximo a um marcador
                          if ( nextToABeeper())
                          {
                              // informar marcador nessa posicao
                                 message [ 0 ] = '\0';
                                 sprintf ( message, "Beeper at (%d, %d", avenue, street);
                                 show_Text ( message );

                              // marcar posicao no mapa
                                 map [ street - 1 ] [ avenue - 1 ] = 1;

                              // encontrado mais um marcador
                                 beepers = beepers + 1;
                          } // end if
                        // mover para a posicao mais proxima
                           if ( avenue < world->avenues() )
                           {
                               move();
                           } // end if
                      } // end for
                      turnLeft();
                      turnLeft();
                      moveN ( world->avenues() - 1 );
                      if ( street < world->streets() )
                      {
                          turnRight();
                          move();
                          turnRight();
                      } // end if
                  } // end for
           } // end if
    } // end mapWolrd()

    /**
     saveMap         - metodo para guardar um mapa em arquivo
     @param filename - nome do arquivo onde guardar o mapa
     @param map      - arranjo bidimensional (matriz) com o mapa 
     */
    void saveMap ( const char* fileName, int map [ ] [ WIDTH ] )
    {
        // definir dados locais
           int avenue = 0;
           int street = 0;
        // abrir arquivo para gravacao
           std::ofstream archive ( fileName );

        // testar se ha' informacao
           if ( world != nullptr )
           {
               // guardar o tamamnho do mundo
                  archive << world->avenues() << "\n";
                  archive << world->streets() << "\n";

               // perccorrer o mundo procurando beepers
                  for ( street = 1; street <= world->streets(); street = street + 1 )
                  {
                      for ( avenue = 1; avenue <= world->avenues(); avenue = avenue + 1 )
                      {
                          // guardar informacao no arquivo
                             if ( map [ street - 1] [ avenue - 1] == 1)
                             {
                                 archive << avenue << std::endl;
                                 archive << street << std::endl;
                                 archive << map [ street - 1] [ avenue - 1 ] << std::endl;
                             } // end if
                      } // end for
                  } // end for
                  // fechar arquivo
                     archive.close();
           } // end if
    } // end saveMap()

    /**
     showMap - Metodo para ler um mapa em arquivo
     @param avenues - largura do mapa
     @param steps   - altura do mapa
     @param map     - arranjo bidimensional (matriz) com o mapa  
     */
    void showMap ( int avenues, int streets, char map [ ] [ WIDTH ] )
    {
       // definir dados
          int x = 0;
          int y = 0;

       // percorrer o mundo, procurando marcadores
          clrscr ();
          std::cout << " Mapa de marcadores\n\n";

          std::cout << " ";
          for ( x=0; x<streets; x=x+1 )
          {
               std::cout << (x+1);
          } // end for

          std::cout << std::endl;
          for ( y=0; y<streets; y=y+1 )
          {
               std::cout << (y+1);
               for ( x=0; x<avenues; x=x+1 )
               {
                  std::cout << map [ y ][ x ];
               } // end for

               std::cout << std::endl;
          } // end for
          IO_pause ( " Apertar ENTER para continuar." );
   } // end showMap()

   /**
   readMap - Metodo para ler um mapa em arquivo.
   @param fileName - nome do arquivo com o mapa
   */
 void readMap ( const char * fileName )
 {
     // definir dados
        int avenue  = 0,
            street  = 0;
        int avenues = 0,
            streets = 0;
        int x       = 0;
        int y       = 0;
        int z       = 0;

     std::ifstream archive ( fileName );

     // reservar area para guardar o maior mapa possivel
        char map [ HEIGHT ][ WIDTH ];

     // obter o tamanho do mundo
        archive >> avenues;
        archive >> streets;

     // testar configuracao do mapa
        if ( ( 0 < avenues && avenues <= world->width ) &&
             ( 0 < streets && streets <= world->height ) )
        {
            // percorrer o mundo procurando marcadores
               for ( y=0; y<streets; y=y+1 )
               {
                    for ( x=0; x<avenues; x=x+1 )
                    {
                        map [ y ][ x ] = '.';
                    } // end for
               } // end for
                
           // repetir enquanto houver dados
              archive >> avenue; // tentar ler a primeira linha
              while ( ! archive.eof( ) ) // testar se nao encontrado o fim
                  {
                  // contar mais um comando
                     archive >> street;
                     archive >> z ;

                 // testar se informacoes validas
                    if ( (1 <= avenue && avenue <= world->width ) &&
                         (1 <= street && street <= world->height ) &&
                         (z == 1) )
                   {
                       map [ street-1 ][ avenue-1 ] = 'X';
                   } // end if

                  archive >> avenue; // tentar ler a proxima linha
               } // end while

           // fechar o arquivo

           // RECOMENDAVEL para a leitura
              archive.close ( );

           // mostrar o mapa
              showMap ( avenues, streets, map );
         } // end if

  } // end readMap()

}; // end clas MyRobot

// --------------------------- acao principal

/**
  Acao principal: executar a tarefa descrita a cima. 
 */

int main()
{
    // definir o contexto

    // criar o ambiente e decorar com objetos
    // OBS.: excecutar pelo menos uma vez
    //       antes de qualquer outra coisa
    //       (depois de criado, podera' ser comentado)
       world->create ( "" );              // criar o mundo  
       decorateWorld ( "Guia0312.txt" );
       world->show   ( );
    
    // preparar o ambiente para uso
       world->reset ( );                // limpar configuracoes
       world->read  ( "Guia0312.txt" ); // ler configuracao atual para o ambiente
       world->show  ( );                // mostrar a configuracao atual
    
       set_Speed ( 3 );                 // definir velocidade padrao

    // criar robo
       MyRobot *robot = new MyRobot();

    // posicionar robo no ambiente (situacao inicial):
    // posicao (x=1, y=1), voltado para direita, com zero marcadores, nome escolhido
       robot->create ( 1, 1, EAST, 0, "Karel" );

    // definir armazenador para comandos
       int comandos [MAX_COMMANDS];

    // definir armazenador para o mapa
       int map [ HEIGHT ] [ WIDTH ];    // altura x largura

    // executar tarefas
       // robot->mapWorld      ( map );
       // robot->saveMap       ( "Mapa0311.txt", map );
       // robot->readMap       ( "Mapa0311.txt");
       robot->recordActions  ( "Tarefa0312.txt" );

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
1.2            25/03
------------------------------ testes

Versao        Teste
0.1           01.(OK)          identificacao do programa
0.2           01.(OK)          -
0.3           01.(OK)          -
0.4           01.(OK)          -
0.5           01.(OK)          -
0.6           01.(OK)          -
0.7           01.(OK)          -
0.8           01.(OK)          -
0.9           01.(OK)          -
1.0           01.(OK)          -
1.1a          02.(OK)          teste playActions
1.2           01.(OK)          -

*/
