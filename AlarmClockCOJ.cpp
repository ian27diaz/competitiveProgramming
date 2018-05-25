#include <iostream>
using namespace std;

int main(){
	int H1, M1, H2, M2;
	while(cin >> H1 >> M1 >> H2 >> M2 , H1 || M1 || H2 || M2){
		int minCounter = 0;
		bool anHourLess = false;
		if(M1 <= M2){
			minCounter += (M2 - M1);
		}
		else{
			minCounter += (60 - M1) + M2;
			anHourLess = true;
		}
		
		if(H1 < H2){
			if(anHourLess == true){
				minCounter += (60* (H2 - H1 - 1));
			}
			else{
				minCounter += (60* (H2 - H1));
			}
			
		}
		else{
			
			if(anHourLess == true){
				minCounter += (60* ((24 - H1) + H2 - 1));
			}
			else{
				if(H1 != H2){
					minCounter += (60* ((24 - H1) + H2));
				}

			}
		}
		
		cout << minCounter << "\n";
	}
	
	
	return 0;
}
