/*#include <iostream>
#include <vector>

using namespace std;

void display(vector <string> no);

int main()
{	
	vector <int> num(0);
	cout<<"To start entering numbers type Y, and when done insert N\n";
	int a;
	cout<<"Please enter the number you want to insert, one by one"<<endl;
	while(cin)
	{	
		cin>>a;
		num.push_back(a);
	}
	for(int i=0;i<num.size();i++)
	{
		if(num[i]==42)
			break;
			cout<<num[i]<<endl;
	}
	return 1;
}
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	int i=0;
	for(;cin>>i&&i!=42;cout<<i<<endl);
	return 0;
}
	
//Runtime: 0.01s; Memory 3.2Mb