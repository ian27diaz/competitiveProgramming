#include <iostream>
using namespace std;

int main(){
	
	int T;
	cin >> T;
	while(T--){
		int N, temp, candies = 0; 
		cin >> N;
		for(int i = 0; i < N; i++){
			cin >> temp;
			candies += temp;
		}
		if(candies % N == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
