//_TABLE_H_
#ifndef _TABLE_H_
#define _TABLE_H_
#include "card.h"

class Table{
private:
	Card card[24];

public:
	Table();
	void showTable(int);
	void shuffle();
	void cardOpen(int,int);
	void cardClose(int, int);
	void showSolve();

	bool isSame(int, int);
	bool isEnd();
	bool isOpen(int);
};

#endif