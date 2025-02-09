#include<iostream>
using namespace std;

int main(){
	int fnum=80;
	int snum=10;
	
	for(int i=1;i<=10;i++)
	{
		cout << fnum << " " << snum << " ";
		
		fnum-=10;
		snum+=5;
	}
   return 0;	
}

  



