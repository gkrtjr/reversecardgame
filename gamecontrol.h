//_GAMECONTROL_H_

#include "table.h"

class GameControl {
private:
	Table table;
	int point;
public:
	GameControl();
	void newGame();
};