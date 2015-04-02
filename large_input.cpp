#include <iostream>

using namespace std;

int main()
{
	unsigned long long int k,t;
	int n,i=0;
	cin>>n>>k;
	cout<<endl;
	while(--n)
	{
		scanf("%llu", &t); //why scanf worked here instead of cout?
	//	cin>>("%llu", t);			//why &t? before that it gave a runtime exceeded
		if(t%k==0)
			i++;
	}
	cout<<i;
	return 0;
}