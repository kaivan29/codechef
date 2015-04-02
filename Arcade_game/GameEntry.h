#include<iostream>

using namespace std;

class GameEntry
{
	private:
		int score;
		string name;
	public:
		GameEntry()
		{
			score = 0;
			name = " ";
		}
		GameEntry(int s, string n):score(s),name(n){}
	/*	~GameEntry()
		{
			delete score;
			delete name;
		}*/
		int get_score(){return score;}
		string get_name(){return name;}
};