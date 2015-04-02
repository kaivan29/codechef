#include <iostream>
#include<math.h>

using namespace std;

int check(long long int num)
{
	int power=1;
	int sum=0,m=1;
	if (num==0)
		return 0;
	while(!(m<1))
	{
		m = num/(pow(5,power));
		sum=sum+m; 
		power++;
	}
	return sum;
}

int main()
{
	int length;
	cin>>length;
	long long int number[length];//new long long int[length];
	int i =0;
	while(length>0)
	{
		scanf("%lld",&number[i]);
		--length;
		++i;
	}
	for(int j=0;j<i;j++)
	{
		number[j]=check(number[j]);
		printf("%lld",number[j]);
		cout<<endl;
	}
	return 0;
}