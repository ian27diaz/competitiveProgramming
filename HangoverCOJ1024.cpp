#include <iostream>
using namespace std;

int main(){
	
	double c;
	while(cin >> c, c){
		float cTemp = 0;
		int n = 1;
		while(cTemp < c){
			cTemp += ((float )1/(n + 1));
			n++;
		}
		cout <<n - 1<<" card(s)\n";
	}
	
	return 0;
}
