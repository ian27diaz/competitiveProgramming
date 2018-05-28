#include <iostream>
#include <cmath>
using namespace std;

int numberOfSides(long long diag){
	return ceil((1.5 + sqrt(2.25 + (4*0.5*diag))));	
}

int main(){
	long long num;
	unsigned short caseCounter = 1;
	while(cin >> num, num){
		cout << "Case " << caseCounter << ": "<< numberOfSides(num)<< "\n";
		caseCounter++;
	}
	
}
