//Suma de números primos
//La suma de los números primos menores 10 es 2+3+5+7 = 17
//Encuentra la suma de todos los números primos menores de dos millones.
#include <iostream>
using namespace std;

int main(){
	
	int n=2000000;
	long long suma=0;
	for(int i=2; i<n; i++){
		bool esPrimo = true;
		for(int j=2; j*j<=i; j++){
			if(i%j==0){
				esPrimo = false;
                break;
			} 
		}
		if (esPrimo) {
            suma += i;
        }
	}
	cout << suma << endl;
	return 0;
}
