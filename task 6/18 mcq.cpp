#include <iostream>
using namespace std;

int main(){
	
	float num=5.2;
	
	for(float i=1;i<=10;i++)
	{
		cout << num << " ";
		num-=0.4;
	}
	return 0;
}