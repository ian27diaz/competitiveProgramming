#include <iostream>

using namespace std;

void swap(int Arr[], int index1, int index2){
	int swap = Arr[index1];
	Arr[index1] = Arr[index2];
	Arr[index2] = swap;
}

void maxHeapify(int Arr[], int index, int size){
	int leftSon = index*2 + 1;
	int rightSon = index*2 + 2;
	int auxIndex = index;
	if(leftSon <= size && Arr[auxIndex] < Arr[leftSon]){
		auxIndex = leftSon;
	}
	
	if(rightSon <= size && Arr[auxIndex] < Arr[rightSon]){
		auxIndex = rightSon;
	}
	
	if(auxIndex != index){
		swap(Arr, auxIndex, index);
		maxHeapify(Arr, auxIndex, size);
	}
}

void heapSort(int Arr[], int size){
	for(int i = (size - 1)/2; i >= 0; i--){
		maxHeapify(Arr, i, size - 1);
	}
	
	for(int i = size - 1; i >= 1; i--){
		swap(Arr, 0, i);
		maxHeapify(Arr,0, i - 1);
	}
}

int main(){
	
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	int Arr[t];
	
	for(int i = 0; i < t; i++){
		cin >> Arr[i];
	}
	heapSort(Arr, t);
	for(int i = 0; i < t; i++) cout << Arr[i]<<endl;	
	return 0;
}
