#include<iostream>
#include<string>

using namespace std;

int main()
{
	int choices;
	cin>>choices;
	while(choices>0)
	{	
		int count =0;
		string name=" ";
		cin>>name;
		for(int i =0;i<name.length();i++)
		{	
			string str = name.substr(i,1);
//			cout<<str<<endl;
//			if(name[i]='A') T	:to compare a charachter of the string, we have to write it this way

			if(str=="A"||str=="D"||str=="O"||str=="P"||str=="Q"||str=="R")
				++count;
			if(str=="B")
				count = count+2;
		}
		cout<<endl<<count<<endl;
		--choices;
	}
}