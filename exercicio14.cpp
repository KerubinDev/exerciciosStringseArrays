#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char palavra[100];

    
    cout << "Digite uma palavra: ";
    cin.getline(palavra, 100);

    
    int tamanho = strlen(palavra);
    cout << "Palavra invertida: ";
    for(int i = tamanho - 1; i >= 0; i--) {
        cout << palavra[i];
    }
    cout << endl;

    return 0;
}