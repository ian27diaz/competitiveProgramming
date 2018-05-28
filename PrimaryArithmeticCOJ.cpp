#include <iostream>
using namespace std;

int main(){
	long a, b;
	while(cin >> a >> b, a || b){
		int div = 1;
		int mod = 10;
		int carry = 0;
		int carryCounter = 0;
		for(int i = 0; i < 10; i++){
			int a2 = (a % mod)/ div;
			int b2 = (b % mod)/ div;
			if(a2 + b2 + carry >= 10){
				carry = 1;
				carryCounter++;
			}
			else carry = 0;
			mod*=10;
			div*=10;
		}
		if(carryCounter == 0) cout << "No carry operation.\n";
		else if(carryCounter == 1) cout << carryCounter << " carry operation.\n";
		else cout << carryCounter << " carry operations.\n";
		
	}
}
