//Triplete pitagórico especial
//Un triplete pitagórico es un conjunto de tres números naturales, a < b < c, para los cuales, 
//a2 + b2 = c2 Por ejemplo, 32 + 42 = 9 + 16 = 25 = 52. 
//Existe exactamente un triplete pitagórico para el cual a + b + c = 1000. Halla el producto abc.
#include <iostream>
using namespace std;

int main(){
	
	int n=1020;
	for(int a=0; a<n; a++){
		for(int b=0; b<n; b++){
			int c=n-a-b;
			if(c<0){
				break;
			} else if (a<b<c && a+b>c && a*a+b*b==c*c){
				cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "abc = " << a*b*c << endl;
				return 1;
			}
		}
	}
	cout << "No hay triplete pitagorico." << endl;
	return 0;
}

