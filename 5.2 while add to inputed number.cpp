#include <iostream>
using namespace std;
int main()
{
	int count=1,sum=0, val;
	cout << "Enter number till which the sum is to be calculated";
	cin >> val; //input the number you want to sum to
	while(count<=val)
	{sum+= count; // same as sum=sum + count
		count+= 1; //same as count=count++ or count=copunt
	}
	cout << "the sum of 1 to " << val <<" = " << sum << endl;
	return 0;
}