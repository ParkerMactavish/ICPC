#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long int start, end, result=0;
	cin>>start>>end;
	for(int i=1; i<=sqrt(end); i++)
	{
		for(long long int j=start; j<=end; j++)
		{
			if(j%i) result++;
			if(i*i!=j)result++;
			cout<<i<<", "<<j<<", "<<result<<endl;
		}
	}
	cout<<result;
	return 0;
}