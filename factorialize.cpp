//Officialy my first code on github
#include <iostream>
using namespace std;
int main()
{
	int fact, i;
	cout<<"enter a number to factorialize\n";
	cin>>fact;
	int r = fact;
	
	
	for(i = 1; i < fact; i++)
	{
		r *= i;
	}
	cout<<"result is "<<r<<"\n";
	return 0;
}
