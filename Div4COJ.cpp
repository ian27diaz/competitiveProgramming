#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int t;
	unsigned int num = 0;
	cin >> t;
	for(int i = 0; i <= t; i++){
		string str;
		getline(cin, str);
		int sLen = str.length();
		if(sLen == 1){
			if(str == "0" || str == "4" || str == "8"){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" <<endl;
			}
		}
		else if(sLen != 0){
				if(sLen == 2){
				num = atoi(str.substr(0, 2).c_str());
				//cout << num << endl;	
				}
				else{
					num = atoi(str.substr(sLen - 2, sLen - 1).c_str());
				}
				if(num % 4 == 0){
					cout << "YES" <<endl;
				}
				else{
					cout << "NO" <<endl;
				}
		}
	}
	return 0;
}
