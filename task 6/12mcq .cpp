#include<iostream>
using namespace std;
int main(){
	
	int fnum=14;
	int snum=28;
	int n1=6;
	int n2=12;
	
	for(int i=0;i<=10; i++){
		cout << fnum << ", " << snum << ", ";
		fnum=fnum+n1;
		snum=snum+n2;
		n1*=2;
		n2*=2;
	}
	
	
	return 0;
}