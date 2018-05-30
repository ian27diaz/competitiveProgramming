#include <iostream>
#include <string>
using namespace std;

inline void swap(int arr[], int posA, int posB){
	int swap = arr[posA];
	arr[posA] = arr[posB];
	arr[posB] = swap;
}
void sortArray(int arr[]){
	if(arr[0] > arr[1]) swap(arr, 0, 1);
	if(arr[1] > arr[2]) swap(arr, 1, 2);
	if(arr[0] > arr[1]) swap(arr, 0, 1);
}

int main(){
	//Testing Changes 29-05-2018
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sortArray(arr);
	string str;
	cin >> str;
	//Diferentes opciones del problema
	if(str == "ABC"){
		cout << arr[0] << " " << arr[1] << " " << arr[2];
	}
	if(str == "ACB"){
		cout << arr[0] << " " << arr[2] << " " << arr[1];	
	}
	if(str == "BAC"){
		cout << arr[1] << " " << arr[0] << " " << arr[2];	
	}
	if(str == "BCA"){
		cout << arr[1] << " " << arr[2] << " " << arr[0];	
	}
	if(str == "CAB"){
		cout << arr[2] << " " << arr[0] << " " << arr[1];	
	}
	if(str == "CBA"){
		cout << arr[2] << " " << arr[1] << " " << arr[0];	
	}
	
	return 0;
}
