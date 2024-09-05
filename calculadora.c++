#include <iostream>
using namespace std;

int main(){

int somas;
float num1,num2;

cout << "CALCULADORA -- ESCOLHA QUAL DESEJA CALCULAR!";
cout << "\n1- Calcule com +";
cout << "\n2- Calcule com -";
cout << "\n3- Calcule com *";
cout << "\n4- Calcule com /";
cout << "\n5 - SAIR";
cout << "\nEscolha Numero entre (1 - 5): ";
cin >> somas;

switch (somas){

case 1:
cout << "ESCOLHA PRIMEIRO NUMERO: ";
cin >> num1;
cout << "ESCOLHA SEGUNDO NUMERO: ";
cin >> num2;

cout << "Resultado deu: " << (num1 + num2) << endl;
break;

case 2:
cout << "ESCOLHA PRIMEIRO NUMERO: ";
cin >> num1;
cout << "ESCOLHA SEGUNDO NUMERO: ";
cin >> num2;

cout << "Resultado deu: " << (num1 - num2) << endl;
break;


case 3:
cout << "ESCOLHA PRIMEIRO NUMERO: ";
cin >> num1;
cout << "ESCOLHA SEGUNDO NUMERO: ";
cin >> num2;

cout << "Resultado deu: " << (num1 * num2) << endl;
break;


case 4:
cout << "ESCOLHA PRIMEIRO NUMERO: ";
cin >> num1;
cout << "ESCOLHA SEGUNDO NUMERO: ";
cin >> num2;

cout << "Resultado deu: " << (num1 / num2) << endl;
break;

default:
cout << "VOCE SAIU DA CALCULADORA DO GOUTEX! - FUJAA";

}

    return 0;



}