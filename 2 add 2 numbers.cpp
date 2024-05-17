#include <iostream> // header
int main() // main function
{
	std::cout << "Enter two numbers:" << std::endl; /*std means standard library,
													endl means endline and is a manipulator*/
	int n1=0,n2=0;  /*variable declarations ,double colon means the 
	   	   	   	   	scope operator, cout in the scope of the standard library*/
	std::cin >> n1 >> n2; //std::cin is standard input, >> is an input operator
	std::cout << " The sum of " << n1 << " and " << n2 << " is " << n1 + n2 << std::endl;
	return 0;
} 
