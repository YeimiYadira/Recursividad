// Recursividad 
//Factorial de un numero
#include <iostream>
using namespace std;
int Factorial(int);
int main(){
	int n;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	cout << "El factorial de " << n << " es: "<< Factorial(n) << endl;
	return 0;
}
int Factorial (int n){
	if (n==0){
		n=1;
	}
	else{
		n = n * Factorial(n-1);
	}
	return n;
}
