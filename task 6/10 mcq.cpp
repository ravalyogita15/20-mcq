#include<iostream>
using namespace std ;

int main()
{
	
	int fnum=31;
	int snum=29;
	
	for(int i=1; i<=10; i++)
	{
		cout << fnum << " "<<snum << " ";
		
	    fnum-=7;
	    snum-=7;
	}
	return 0;
}