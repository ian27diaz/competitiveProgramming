#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string str;
	cin >> str;
	
	int A, B;

	
	if(str.length() != 0){
		if(str == "square"){
			cin >> A;
			
			cout << A*A;
		}
		else{
			cin >> A >> B;
			
			cout << (A*B);
		}
	}
	
	return 0;
}
