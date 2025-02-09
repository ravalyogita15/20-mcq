#include<iostream>
using namespace std ;

int main()
{
	
	int fnum=36;
	int snum=34;
	
	for(int i=1; i<=10; i++)
	{
		cout << fnum << " "<<snum << " ";
	    fnum-=6;
	    snum-=6;
	}
	return 0;
}