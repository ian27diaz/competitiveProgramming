#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
//	cin.tie(0);
//	ios_base::sync_with_stdio(false);

//con las lineas de arriba para utilizar cin y cout

	int num;
	scanf("%d",&num);
	while(num != 42){
		printf("%d\n", num);
		scanf("%d",&num);
	}
	
	return 0;
}
