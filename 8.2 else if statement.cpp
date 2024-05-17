#include <iostream>
using namespace std;
int main()
{
	int num =0;
	cout<< "enter a number:";
	cin>> num;
	if(num > 10)
		cout<< num << " is greater than 10 " << endl;
	else if(num < 10)
		cout<< num << " is less than 10"<< endl;
	else
		cout<< num << " = 10 "<< endl;
	return 0;
}