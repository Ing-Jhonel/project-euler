//El producto m�s grande de una serie
//Los cuatro d�gitos adyacentes, en los 1000 digitos, con mayor producto son 9x9x8x9=5832
//Encuentra los trece d�gitos adyacentes, en los 1000 digitos, que tienen el mayor producto. 
//�Cu�l es el valor de este producto?


#include <iostream>
using namespace std;

int main(){
	
	int n=13;
	string numero="73167176531330624919225119674426574742355349194934969835203127745063262395783180169848018694788518438586156078911294949545950173795833195285320880551112540698747158523863050715693290963295227443043557668966489504452445231617318564030987111217223831136222989342338030813533627661428280644448664523874930358907296290491560440772390713810515859307960866701724271218839987979087922749219016997208880937766572733300105336788122023542180975125454059475224352584907711670556013604839586446706324415722155397536978179778461740649551492908625693219784686224828397224137565705605749026140797296865241453510047482166370484403199890008895243450658541227588666881164271714799244429282308634656748139191231628245864583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int tamanio=numero.length();
	int arr[tamanio];
	for(int i=0; i<tamanio; i++){
		arr[i]=numero[i] - '0';
	}
	
	long long productoMayor=0;
	for(int i=0; i<tamanio; i++){
		long long producto=1;
		for(int j=0; j<n; j++){
			producto*=arr[i+j];
		}
		if(productoMayor<producto){
			productoMayor=producto;
		}
	}
	cout << productoMayor << endl;
	return 0;
}