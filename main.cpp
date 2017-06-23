//_MAIN_CPP_

#include <iostream>
#include <stdlib.h>
#include "card.h"
#include "table.h"
#include "gamecontrol.h"

using namespace std;

int main() {
	int key;
	GameControl game;
	while (1) {
		//system("cls");
		system("clear");
		cout << "Reverse Card Game\n\n1.NEW GAME 2.EXIT >> ";
		cin >> key;
		if (key == 1) {
			game.newGame();
		}
		else if (key == 2) {
			break;
		}
	}
	return 0;
}