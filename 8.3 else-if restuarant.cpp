#include <iostream>
using namespace std;
int main()
{
	int choice =0;
	cout<< "Enter: "<<endl<<" 1 for coffee."<<endl<<" 2 for tea."<<endl;
	cin>>choice;
	if(choice ==1)
		cout<<"Your coffee is on your way."<< endl;
	else if(choice ==2)
		cout<<"Your tea is on its way."<<endl;
	else
		cout<<"Please try again. You hae entered the wrong choice."<<endl;
	return 0;
}