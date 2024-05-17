#include <iostream>
using namespace std;

int main()
{
	unsigned int num= -1;
	int x = num;
	cout<< num << ", " << x << endl;
	return 0;
}
/*the output is a very large number that comes as a result of storing a 
negatie number in an unsigned variable type. the number is converted into its two's
complement and then to the decimal value in the output given*/