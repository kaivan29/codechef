#include<iostream>

using namespace std;

int main()
{
	int X; double Y;
	cin>>X>>Y;
	if(X%5==0&&0.5<=Y-X)
		Y = Y-X-0.50;	
	cout<<Y<<endl;
	return 0;
}