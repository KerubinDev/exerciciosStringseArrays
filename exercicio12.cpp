#include <iostream>
using namespace std;

int main(){
    char palavra[20];
    int i = 0;
    int vogais = 0;

    cout << "Escreva algo: ";
    cin.getline(palavra, 20);

    while (i < sizeof(palavra))
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            vogais++;
            i++;
        }
        else
        {
            i++;
        }
    }
    cout << "Na sua frase tem: " << vogais << " vogais" << endl;
}