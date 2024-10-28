//Largest Prime Factor
//Los factores primos de 13195 son 5,7,13 y 29
//¿Cual es el factor primo mas grande del numero 600851475143

#include <iostream>
using namespace std;

long long largestPrimeFactor(long long n) {
    long long largestFactor = 1;
    
    // Dividir el número por 2 hasta que sea impar
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    
    // Probar con números impares a partir de 3
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    
    // Si n es un primo mayor que 2
    if (n > 2) {
        largestFactor = n;
    }
    
    return largestFactor;
}

int main() {
    long long number = 600851475143;
    cout << largestPrimeFactor(number) << endl;
    return 0;
}

