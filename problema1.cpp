//Multiples of 3 or 5
//Si enumeramos todos los n�meros naturales menores de 10 que son m�ltiplos de 3 o 5, obtenemos 3,5,6 y 9. La suma de estos m�ltiplos es 23.
//Encuentra la suma de todos los m�ltiplos de 3 o 5 por debajo de 1000

#include <iostream>
using namespace std;

int main(){
	
	int n=1000, s=0;
	
	for(int i=0; i<n; i++){
		if(i%3==0 or i%5==0){
			s+=i;
		}
	}
	cout << s << endl;
	return 0;
}

