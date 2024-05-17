#include <iostream> // header
using namespace std; // namespace declaration of std
int main() // main function
{
	int count = 1, sum = 0; 
	while(count<=100) 
	{
	sum = sum + count; //add sum to count, store value in sum
    count = count++;
	}
    cout <<"sum of 1 to 100 = "<<sum << endl; //statement to execute
	return 0;
}