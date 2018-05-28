#include <iostream>
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
	int arr[3];
	while(cin >> arr[0] >> arr[1] >> arr[2], arr[0] || arr[1] || arr[2]){
		sortArray(arr);
		if((arr[0]*arr[0]) + (arr[1]*arr[1]) == (arr[2]*arr[2])) cout << "right\n";
		else cout << "wrong\n";
	}
	
	return 0;
}
