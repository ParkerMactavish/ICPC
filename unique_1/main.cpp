#include <iostream>

using namespace std;

int main()
{
	int numOfInput, inputBuffer, result=0;
	long long int  lastInput=-2147483649;
	
	cin>>numOfInput;
	
	for(int i=0; i<numOfInput; i++)
	{
		cin>>inputBuffer;
		if(inputBuffer!=lastInput)
		{
			lastInput=inputBuffer;
			result++;
		}
	}
	
	cout<<result<<endl;
	
	return 0;
}