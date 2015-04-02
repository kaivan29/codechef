#include<iostream>

using namespace std;

long long fact(long long num)
{
	if(num==0)
		return 1;
	return num*fact(num-1);
}

int main()
{
	int length;
	cin>>length;
	long long number[length];//new long long int[length];
	int i =0;
	while(length>0)
	{
		scanf("%lld",&number[i]);
		--length;
		++i;
	}
	for(int j=0;j<i;j++)
	{	
			cout<<fact(number[j]);
//		long long int fact = 1;
//		for(int i=1;i<=number[j];i++)
//			fact = fact*i;

//		printf("%ld",number[j]);
		cout<<endl;
	}
	return 0;
}