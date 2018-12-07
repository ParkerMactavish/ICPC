#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int operator_Based_3(int opnd)
{
	switch((opnd+1)%3)
	{
		case 0:return 0;
		case 1:return opnd;
		case 2:
			int result=opnd*2+1;
			for(int i=0; opnd; i++)
			{
				result-=pow(3, i)*(opnd%3+
			}
	}
}

int main()
{
//	int opnd, oprt;
//	cin>>opnd>>oprt;
//	cout<<add_without_Carry_Based_3(opnd, oprt);
	int start, end;
	cin>>start>>end;
	for(int i=start; i<end; i++)
		start=add_without_Carry_Based_3(start, i+1);
	cout<<start<<endl;
	
	return 0;
}