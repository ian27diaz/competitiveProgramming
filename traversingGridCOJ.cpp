#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); //sin esto no jala en tiempo 
	int T, N, M;
	cin >> T;
	while(T--){
		cin >> N >> M;
		// int matriz[N][M]   , N -> Filas, M -> Columnas
		if(N > M){
			if(M % 2 == 0){ // Up or Down
				cout << "U\n";
			}
			else{
				cout << "D\n";
			}
		}
		else{
			if(N % 2 == 0){
				cout << "L\n";
			}
			else{
				cout << "R\n";
			}
		}
	}
	
	return 0;
}
