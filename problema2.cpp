//Números pares de Fibonacci
//Cada nuevo término en la secuencia de Fibonacci se genera sumando los dos términos anteriores. Al comenzar con 1 y 2, los primeros 10 terminos seran:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
//Considerando los términos de la secuencia de Fibonacci cuyos valores no superan los cuatro millones, encuentre la suma de los términos pares.

#include <iostream>
using namespace std;

int main(){
	
	int limite=4000000, s=0;
	
	int a=1, b=2, c=0;
	while(a<limite){ //es el minimo, desde ahi se cuenta, por eso si a es el primero en llegar al limite, el mientras termina
		if(a%2==0){
			s+=a;
		}
		c=a+b;
		a=b;
		b=c;
	}
	cout << s << endl;
	return 0;
}
