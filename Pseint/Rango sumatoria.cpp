
#include<iostream>
using namespace std;

int main() {
	int m;
	int n;
	int suma;
	suma = 0;
	do {
		cout << "Ingrese rango de 2 numeros" << endl;
		cout << "Ingrese el primer y segundo numero" << endl;
		cin >> m >> n;
		if (m<n) {
			cout << "El rango ingresado es correcto:" << endl;
		} else {
			cout << "EL PRIMER VALOR DEBE SER MAYOR QUE EL SEGUNDO" << endl;
			cout << "INGRESE NUEVAMENTE !!! " << endl;
			cout << " " << endl;
		}
	} while ((m>=n));
	while ((m<=n)) {
		suma = suma+m;
		m = m+1;
	}
	cout << "La sumatoria entre el rango ingresado es de :" << suma << endl;
	return 0;
}

