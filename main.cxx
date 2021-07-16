#include "graphics.h"
#include <iostream>
#include <ctype.h>                      // Provides toupper
#include "LUDO/board.h"
#include <math.h>
#include <stdlib.h>                     // Provides exit
using namespace std;
#define screenSize 700
#define cellSize 45

int main()
{
	initwindow(screenSize * 2, screenSize, "First Sample");
	board myBoard;
	myBoard.printBoard();
	while (!kbhit())
	{
		myBoard.play();
		delay(200);
	}
	return 0;
}