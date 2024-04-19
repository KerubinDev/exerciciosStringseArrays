#include <iostream>
using namespace std;

int main(){
    string dia[] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sabado"};
    int numero;

    cout << "Digite um numero de 1 a 7: ";
    cin >> numero;

    cout << "Dia da semana correspondente com o numero selecionado: " << dia[numero - 1] << endl;
}