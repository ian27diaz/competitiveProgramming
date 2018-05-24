#include <iostream>

using namespace std;

void getParity(int num, int* parity){
	if(num != 1){
		getParity(num/2, parity);
		if(num % 2 == 0){
			cout << 0;	
		} 
		else{
			cout << 1;	
			*(parity) += 1;
		} 
	}
	else{
		cout << 1;
		*(parity) += 1;
	}
}

int main(){
	
	int num;
	int parity = 0;
	while(cin >> num && num != 0){
		cout <<"The parity of ";
		getParity(num, &parity);
		cout << " is " << parity << " (mod 2).\n";	
		parity = 0;
	}
	
	return 0;
}
