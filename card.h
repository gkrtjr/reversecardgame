//_CARD_H_
#ifndef _CARD_H_
#define _CARD_H_

#include <iostream>
using namespace std;

class Card {
private:
	char img;
	bool open;
public:
	Card();
	void setImg(int);//0~14
	void setOpen();
	void setClose();

	char getImg();
	bool isOpen();
};

#endif