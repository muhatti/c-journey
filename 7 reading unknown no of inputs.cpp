#include <iostream>
using namespace std;
int main()
{
	int sum =0, value =0;
	while(cin >> value) /*using istrem as a test condition, read values as long as user enters an integer*/
	{
		sum+=value;
	}
	cout << "sum = " << sum << endl;
	return 0;
}