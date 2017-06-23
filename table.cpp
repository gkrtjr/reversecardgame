//_TABLE_CPP_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "table.h"

#define KNRM  "\x1B[0m"
#define BRED  "\x1B[41m"
#define BGRN  "\x1B[42m"
#define BYEL  "\x1B[43m"
#define BBLU  "\x1B[44m"
#define BMAG  "\x1B[45m"
#define BCYN  "\x1B[46m"
#define BWHT  "\x1B[47m"
// text color
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

using namespace std;

Table::Table() {
}

void Table::showTable(int c) {
	//system("cls");
	system("clear");
	cout << "Reverse Card Game\nCOUNT : "<<c<<"\n\n";
	for (int i = 0; i < 4; i++) {
		for (int j = i * 6; j < (i + 1) * 6; j++) {
			char chj = card[j].getImg();
			if (card[j].isOpen()) {
				printf(" %s%s%c%c%c%c%s", BMAG, KWHT, chj, chj, chj, chj, KNRM);
			}
			else printf(" %s%s    %s", BWHT, KMAG, KNRM);
		}
		cout << endl;
		for (int j = i * 6; j < (i + 1) * 6; j++) {
			char chj = card[j].getImg();
			if (card[j].isOpen()) {
				printf(" %s%s%c%c%c%c%s", BMAG, KWHT, chj, chj, chj, chj, KNRM);
			}
			else printf(" %s%s %2d %s", BWHT, KMAG, j, KNRM);
		}
		cout << endl;
		for (int j = i * 6; j < (i + 1) * 6; j++) {
			char chj = card[j].getImg();
			if (card[j].isOpen()) {
				printf(" %s%s%c%c%c%c%s", BMAG, KWHT, chj, chj, chj, chj, KNRM);
			}
			else printf(" %s%s    %s", BWHT, KMAG, KNRM);
		}
		cout << "\n\n";
	}
}

void Table::shuffle(){
	for (int i = 0; i < 12; i++) {
		card[i * 2].setImg(i);
		card[i * 2 + 1].setImg(i);
	}
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 1000; i++) {
		int a = rand() % 24;
		int b = rand() % 24;
		Card c;
		c = card[a];
		card[a] = card[b];
		card[b] = c;
	}
}

void Table::cardOpen(int a,int b){
	card[a].setOpen();
	card[b].setOpen();
}

void Table::cardClose(int a, int b){
	card[a].setClose();
	card[b].setClose();
}

void Table::showSolve(){
	for (int i = 0; i < 24; i++) {
		cout <<i<<" "<< card[i].getImg()<<" ";
	}
	cout << endl;
}

bool Table::isSame(int a, int b){
	return card[a].getImg() == card[b].getImg();
}

bool Table::isEnd(){
	for (int i = 0; i < 24; i++) {
		if (!card[i].isOpen())return false;
	}
	return true;
}

bool Table::isOpen(int i){
	return card[i].isOpen();
}
