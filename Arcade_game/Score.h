#include<iostream>
#include "GameEntry.h"

using namespace std;

class Score
{
	private:
		GameEntry* entries;
		int numEntries;
		int capacity;
	public:
		Score():numEntries(0), capacity(10), entries(new GameEntry[capacity]){}
		void addEntry(int s, string n);
		void increaseCapacity();
		void remove(int i);
		GameEntry& at(int i);
//		get_numEntries(){return numEntries;}
//		get_capacity(){return capacity;}
};

void Score::increaseCapacity()
{
	capacity = capacity*2;
	GameEntry* temp = new GameEntry[capacity];
	for(int i=0;i<numEntries;i++)
		temp[i]=entries[i];
	delete[] entries;
	entries = temp;
}

void Score::addEntry(int s, string n)
{
	if(numEntries == capacity)
		increaseCapacity();
	for(int i=0; i<numEntries;i++)
	{
		if(s<entries->get_score())
		{
			for(int j=i;j<numEntries;j++)
				entries[i+1]=entries[i];
			entries[i] = GameEntry(s,n);
		}
	}
}

void Score::remove(int i)
{
	if(i>numEntries||i<0)
	{
		cout<<"Wrong input";
	}
	else
	{
		for(int j=i;j<numEntries-1;j++)
			entries[j]=entries[j+1];
		--numEntries;
	}
}