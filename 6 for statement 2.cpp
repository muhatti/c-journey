#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for(int i = 1; i<=10; i++)
	{
		sum+= i; // same as sum=sum +i
	}
	cout << "the sum of 1 to 10 is " << sum << endl;	
	return 0;
}