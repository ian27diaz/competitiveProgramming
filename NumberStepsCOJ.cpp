#include <iostream>
using namespace std;

int main(){
	
	int T, x, y;
	cin >> T;
	while(T--){
		cin >> x >> y;
		int tempX = 0, tempY = 0;
		int counter = 0;
		int direction = 0; //0 diagonal derecha sup, 1 diagonal derecha inf, 2 diagonal izquierda superior
		bool aux = true; // true -> Se va a 1, false -> se va 2
		while(tempX <= x || tempY <= y){
			if(tempX == x && tempY == y) {
				break;
			}
			counter++;
			switch(direction){
				case 0:
					tempX++;
					tempY++;
					if(aux == true) direction = 1;
					else 			direction = 2;
					aux = !aux;
					break;
				case 1:
					tempX++;
					tempY--;
					direction = 0;
					break;
				case 2:
					tempX--;
					tempY++;	
					direction = 0;
					break;		
			}
			
		}
		if(tempX == x && tempY == y) {
			cout <<counter << "\n";
		}
		else{
			cout << "No Number\n";
		} 
	}
	
	return 0;
}
