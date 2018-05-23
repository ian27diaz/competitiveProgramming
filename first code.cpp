
#include <iostream>
#include <vector>

using namespace std;

int main(){
	//Array tamaño N
//	int N, a[1000 + 10]; //Usar malloc en concursos no es recomendable
//	int aux;
//	cin >> N;
//	for(int i = 0; i < N ; i++) cin >> a[i];
//	//Vectir oara crear arregki de tanali b
//	vector<int> v;
//		vector<int> v3(1000+10, 1); //Vector inicializado con mil10 unos
//	for(int i = 0; i < N ; i++){
//		cin>>aux;
//		v.push_back(aux);
//	}
	
	//Matriz de n por m
//
//	int a, b, intArray[1000+10][1000+10];
//	cin>>a>>b;
//	for(int i = 0; i < a; i++){
//		for(int j = 0; j < b;j++){
//			cin>>intArray[i][j];
//			cout << intArray[i][j] << "";
//			
//		}
//		cout << "\n";
//		
//	}ian se la come 
	
//	int k, a, b;
//	cin >> k;
//	while(cin >> a >> b, a || b){ // Mientras a o b sean difernete dec ero
//		cout<< a+b <<endl;
//	}
	
	//(i & 1) //Te dice si un numero es par , si da 0 bit a bit 
	
	//Leer strings , hay strings en c++
//
	char c[1000 + 10];
//	int n;
//	cin >> n;
//	cin.ignore();
//	cin.getline(c,n);
//	for(int i = 0; i < n ; i++){
//		cout<<c[i];
//	}
	
	//Leer cadenas en c++
	string s;
	getline(cin, s);
	getline(cin, s, ','); //Lee hasta encontrar una ,
	cout<<s<<endl;
	return 0;
}
