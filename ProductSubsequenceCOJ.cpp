#include <iostream>
using namespace std;

int main(){
	
	int T, a, b;
	cin >> T;
	while(T--){
		cin >> a >> b;
		int totalSum = 0;
		if(a == b) cout << ((((a)%100)*((a + 1)%100)*((a + 2)%100))%100)%100 << "\n";
		else{
			while(a <= b){
			totalSum += (((a)%100)*((a + 1)%100)*((a + 2)%100))%100;
			a++;   
			}
			cout << totalSum%100<<"\n";
		}
		
	}
	
	return 0;
}
