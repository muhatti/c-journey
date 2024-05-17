#include <iostream>
using namespace std;
int main()
{
	int sum=0,val;
	cout << "enter end value:"<< endl;
	cin >> val;
	for(int i=1;i<=val;i++)
	{sum+=i;

	}
	cout << "the sum of 1 - " << val << " is " << sum << endl;
	return 0;
}