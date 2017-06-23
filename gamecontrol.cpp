//_GAMECONTROL_CPP_

//#include <windows.h>
#include <unistd.h>
#include "gamecontrol.h"

GameControl::GameControl() {}

void GameControl::newGame(){
	int ikey1, ikey2;
	int key;
	point = 150;
	table.shuffle();
	table.showTable(point);
	//table.showSolve();
	while (1) {
		cout << "1.CHOOSE CARD 2.END GAME >> ";
		cin >> key;
		if (key == 1) {
			cout << "Choose 2 other card ( 0 ~ 23 ) ex) 1 5 >> ";
			cin >> ikey1 >> ikey2;
			if (ikey1 > 23 || ikey1 < 0 || ikey2>23 || ikey2 < 0 || ikey1 == ikey2||table.isOpen(ikey1)||table.isOpen(ikey2)) {
				cout << "ERROR::WRONG INPUT\n";
				continue;
			}
			else {
				point-=2;
				table.cardOpen(ikey1, ikey2);
				if (table.isSame(ikey1, ikey2)) {
					table.showTable(point);
					//table.showSolve();
					if (table.isEnd()) {
						cout << "GAME CLEAR\n" << point<<" POINTS\nENTER ANY KEY";
						cin >> key;
						return;
					}
					else {
						continue;
					}
				}
				else {
					table.showTable(point);
					table.cardClose(ikey1, ikey2);
					//Sleep(3000);
					sleep(3);
					table.showTable(point);
					//table.showSolve();
				}
			}
		}
		else if (key == 2) {
			break;
		}
		else {
			cout << "ERROR::WRONG INPUT\n";
			continue;
		}
	}
}