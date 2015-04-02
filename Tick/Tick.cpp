// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include <cstdlib>
#include <iostream>

using namespace std;


void draw_tick(int t_length)
{	
	for(int i=0;i<t_length;i++)
		cout << "- ";
	cout << "\n";
}

void acc_of_ticks(int t_length)
{
	if(t_length>0)
	{
//		cout<<"\n Step 1:"<<t_length<<endl;
		acc_of_ticks(t_length - 1);
//		cout<<endl<<t_length;		
		draw_tick(t_length);
		acc_of_ticks(t_length - 1);
//		cout<<"\n Step 3:"<<t_length<<endl;	
	}
}

void out_ticks();

int main()
{
	cout << "\nEnter the type of ruler scale you want to print:";
	int tick_length = 0;
	cin >> tick_length;
	draw_tick(tick_length);
	acc_of_ticks(tick_length-1);
	draw_tick(tick_length);

}