//Diferencia de la suma del cuadrado
//La suma de los cuadrados de los primeros diez números naturales es,
//		1^2 + 2^2 + ... 10^2 = 385
//El cuadrado de la suma de los primeros diez números naturales es,
//		(1+2+...+10)^2 = 55^2 = 3025
//Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es
// 3025 - 385 = 2640
//Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.

#include <iostream>
using namespace std;

int main(){
	
	int n=100;
	int resultado=1, sumaCuadrados=0;
	for(int i=0; i<n; i++){
		sumaCuadrados += resultado*resultado;
		resultado++;
	}
	
	int suma=0, cuadradoSumas;
	for(int i=1; i<=n; i++){
		suma += i;
	}
	cuadradoSumas=suma*suma;
	int diferencia=cuadradoSumas-sumaCuadrados;
	cout << diferencia << endl;
	return 0;
}
