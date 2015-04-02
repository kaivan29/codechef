// Game.cpp : Defines the entry point for the console application.
//

#include <cstdlib>
#include <iostream>
#include "Header.h"

using namespace std;

int counter = 1;

//int take_input();
//int make_box(int r, int c);

int main()
try{
	GAME a;
	//  B[3][3];
	//  int r, int c;
	//	a(B [] [], r, c);
	int count = 0;
	while (count != 9)
	{
		if (counter == 1)
		{
			cout << "\nEnter Player 1:\n";
			a.take_input(counter);
			count++;
			bool chit = a.isWin(counter);
			if (chit == true){
				cout << "Player 1 wins";
				break;
			}
			counter = -1;
		}
		else
		{
			cout << "\nEnter Player 2:\n";
			a.take_input(counter);
			count++;
			bool chit = a.isWin(counter);
			if (chit == true){
				cout << "Player 2 wins";
				break;
			}
			counter = 1;
		}
	}
}

catch (exception& e)
{
	cout << "Exception";
}