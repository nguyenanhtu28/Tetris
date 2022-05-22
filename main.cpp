#include "Tetris.h"

using namespace std;

const int M = 23;
const int N = 10;

int main(int argc, char* argv[])
{
 util *Util = new util;
 Tetris *tetris = new Tetris;
 srand((int)time(0));
 if(tetris -> init())
 {
     while(tetris -> menu())
     {
         while(tetris -> isRunning())
         {
            tetris -> setCurrentTime(SDL_GetTicks());
            tetris -> Event();
            tetris -> game();
            tetris -> checkline();
            tetris -> gameOver();
            tetris -> updateRenderer();
         }
         tetris -> reset();
     }
 }
 Util -> quitSDL(Util -> window, Util -> renderer);
 Mix_CloseAudio();
 //delete Util; Util = NULL;
 //delete tetris; tetris = NULL;
 return 0;
}
