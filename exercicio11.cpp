#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char palavra1[10];
    char palavra2[10];

    cout << "Escreva a primeira palavra: ";
    cin >> palavra1;

    cout << "Escreva a segunda palavra: ";
    cin >> palavra2;

    int resultado = strcmp(palavra1, palavra2);

    if (resultado > 0){
    cout << "A palavra 1 é maior que a Palavra 2" << endl;
    }
    else if (resultado == 0){
        cout << "A Palavra 1 e a 2 são iguas" << endl;
    }
    else{
        cout << "A Palavra 2 é maior que a Palavra 1" << endl;
    }

    return 0;
}