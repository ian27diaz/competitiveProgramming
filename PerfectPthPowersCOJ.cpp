#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int num;
	while(cin>>num, num){
		int toPow;
		int power = 1;
		int maxPh = 0;
		int maxPow;
		double powTemp;
		if(num < 0 ){
			toPow = -2;
			maxPow = - (sqrt(abs(num)));
			while(toPow >= maxPow){
				powTemp = pow(toPow, power);
				if(powTemp < num){
					toPow--;
					power = 1;
				}
				else if(powTemp == num && power > maxPh){
					maxPh = power;
					toPow--;
					power = 1;	
				}
				else{
					power++;
				}
			}
		}
		else{
			maxPow = sqrt(num);
			toPow = 2;
			while(toPow <= maxPow){
				powTemp = pow(toPow, power);
				if(powTemp > num){
					toPow++;
					power = 1;
				}
				else if(powTemp == num && power > maxPh){
					maxPh = power;
					toPow++;
					power = 1;	
				}
				else{
					power++;
				}
			}	
		}
		
		
		if(maxPh == 0 ) cout << 1 <<"\n";
		else cout << maxPh << "\n";
	}
	
	return 0;
}
