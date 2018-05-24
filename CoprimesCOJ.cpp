#include <iostream>
using namespace std;

int main(){
	unsigned short N, totalFactors = 0, totalCoprimes = 0;
	unsigned short factores [100];
	cin >> N;
	for(int i = 2; i <= N/2; i++){
		if(N % i == 0) factores[totalFactors++] = i; 
	}
	bool approves = true;
	for(int i = N - 1; i >= 1; i--){
		for(int j = 0; j < totalFactors; j++){
			if(i % factores[j] == 0){
				approves = false;
				break;
			}
		}
		if(approves == true){
			totalCoprimes++;
		}
		approves = true;
	}
	cout <<totalCoprimes;
	
	return 0;
}
