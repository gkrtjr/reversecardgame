//_CARD_CPP_

#include <iostream>
#include "card.h"

using namespace std;

Card::Card() {
}

void Card::setImg(int i) {
	img='A'+i;
	open = false;
}

void Card::setOpen(){
	open = true;
}

void Card::setClose(){
	open = false;
}

char Card::getImg() {
	return img;
}

bool Card::isOpen(){
	return open;
}
