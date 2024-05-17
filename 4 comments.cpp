#include <iostream>
using namespace std;
int main()
{
	cout << "/*" <<endl;
	cout << "*/" <<endl;
	cout << /*"*/"*/" <<endl; /* the original script didnt have the ending 
								quotation mark and so the line on its own is 
								error*/
	cout << /*"*/"*/" /*"*/ <<endl;
	
	return 0;
}