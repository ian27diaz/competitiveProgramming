#include <iostream>
#include <string>
using namespace std;

int main(){
	int T;
	string str;
	cin >> T;
	while(T--){
		cin >> str;
		int length = str.length();
		char lastDigit = str.at(length - 1);
		if(lastDigit == '0' || lastDigit == '2' || lastDigit == '4' || lastDigit == '6' || lastDigit == '8'){
			long digitSum = 0;
			for(int i = 0; i < length; i++){
				switch(str.at(i)){
					case '0': break;
					case '1': digitSum += 1;
						break;
					case '2': digitSum += 2;
						break;
					case '3': digitSum += 3;
						break;
					case '4': digitSum += 4;
						break;
					case '5': digitSum += 5;
						break;
					case '6': digitSum += 6;
						break;
					case '7': digitSum += 7;
						break;
					case '8': digitSum += 8;
						break;
					case '9': digitSum += 9;
						break;
					default: break;
				}
			}
			
			if(digitSum % 3 == 0) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
		
	}
	return 0;
}
