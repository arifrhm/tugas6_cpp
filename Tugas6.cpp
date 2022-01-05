#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x;
	cout<<"Inputkan Nilai x : ";
	cin>>x;
	int z;
	cout<<"Inputkan Nilai z : ";
	cin>>z;
	if(x<z){
		cout<<"Hasil : "<<x-z<<endl;
	}
	else{
		cout<<"Hasil : "<<x+z<<endl;
	}
	return 0;
}
