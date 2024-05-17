#include <iostream> // header
using namespace std; // namespace declaration of std
int main() // main function
{
	int count = 1; // initialization, the value to start from is 1
	while(count<=10) /* as long as the value is from 1 to 10 print the statement
						in the next line*/
	{cout <<"hello komu and shantie"<< endl; //statement to execute
	count = count + 1;	//incrementation, you can also use count=count++
	}
	count=11;
	while(count<=20)
	{cout<<"eugene"<< endl;
	count= count + 1;		
	}
	return 0; /*returns 0 when count equals 10, the statement 
	will be printed 10 times*/
}