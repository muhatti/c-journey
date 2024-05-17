#include <iostream>
using namespace std;
int main()
{
	int currval=0, val=0;//two variables, current value and next value
	if(cin>> currval)/*istream used as condition, if input is current value
						initialize count ariable cnt as 1*/
	{
		int cnt= 1;/*one is stored in the variable count*/
		while(cin>>val)/*while user enters input*/
		{
		if(val==currval)/*if new value is equal to preceding value...*/
			++cnt;/*... add one to the variable cnt and it will be two*/
		else
		{
			cout<< currval << " occurs " << cnt << " times. "<<endl;
			currval=val;//remember the new value,val
			cnt=1;//reset the counter to 1
		}
		}//while loop ends here
		//the line below prints the count for the last value in the file
		cout << currval << " occurs " << cnt << " times. "<<endl;
	}//if statement ends here.
	return 0;
}