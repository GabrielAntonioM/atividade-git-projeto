#include <bits/stdc++.h>

using namespace std;

int main() {
	string sexo;
	int cervejas, refrigerantes, espetinhos;
	double consumo, couvert = 4.0, ing, total;
	//Leitura
	cout << "Sexo: ";
	cin >> sexo;
	cout << "Quantidade de cervejas: ";
	cin >> cervejas;
	cout << "Quantidade de refrigerantes: ";
	cin >> refrigerantes;
	cout << "Quantidade de espetinhos: ";
	cin >> espetinhos;
	//Calculos
	
	if(sexo == "F"){
		ing = 8.0;
	}else {
		ing = 10.0;
	}
	consumo = (5.0*cervejas) + (3.0*refrigerantes) + (7.0*espetinhos);
	if(consumo >= 30.0){
		total = consumo+ing;
	} else{
		total = consumo+ing+couvert;
	}
	cout << endl;
	
	//saida
	cout << "RELATORIO:" << endl;
	cout << fixed << setprecision(2);
	
	cout << "Consumo = R$ " << consumo << endl;
	
	if(consumo>=30){
		cout << "Isento de Couvert" << endl;
	}else {
		cout << "Couvert = R$ 4.00" << endl;
	}
	
	cout << "Ingresso = R$ " << ing << endl;
	cout << endl;
	cout << "Valor a pagar = R$ "<< total << endl;
	
	return 0;
}
