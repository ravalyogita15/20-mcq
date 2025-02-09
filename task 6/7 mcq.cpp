#include<iostream>
using namespace std ;

int main()
{
	
	int fnum=58;
	int snum=52;
	
	for(int i=1; i<=10; i++)
	{
		cout << fnum << " "<<snum << " ";
	    fnum-=12;
	    snum-=12;
	}
	return 0;
}