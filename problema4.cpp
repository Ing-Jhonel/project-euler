//El producto Palíndromo más grande
//Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande formado por el producto de dos numeros
//de 2 digitos es 9009=91x99. Encuentra el palíndromo más grande formado a partir del producto de dos numeros de 3 digitos
//xyz*abc=kjghgjk
#include <iostream>
using namespace std;

int main(){
	
	int n=3;
	int limiteSuperior=1;
	for(int i=0; i<n; i++){
		limiteSuperior=limiteSuperior*10;
	}
	limiteSuperior--;
	int limiteInferior=limiteSuperior/10;
	int palMayor=0;
	for(int i=limiteInferior; i<=limiteSuperior; i++){
		for(int j=limiteInferior; j<=limiteSuperior; j++){
			int num=j*i;
			int invertido=0, aux=num;
			while(aux!=0){
				int b=aux%10;
				invertido=invertido*10+b;
				aux=aux/10;
			}
			if(invertido==num and palMayor<invertido){
				palMayor=invertido;
			}
		}
	}
	cout << palMayor;
	return 0;
}
