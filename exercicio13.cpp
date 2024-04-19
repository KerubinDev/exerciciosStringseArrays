#include <iostream>
using namespace std;

int main(){
    char texto[200];
    int i = 0;

    cout << "Escreva algo: ";
    cin.getline(texto, 200);

    while (i < sizeof(texto))
    {
        if (texto[i] == 'a' || texto[i] == 'A'){
           break;
        }
        else
        {
            i++;
        }
    }
     if (i < 199){
    cout << "O primeiro 'a' esta na posição: " << (i + 1) << endl;
     }
     else
     {
        cout << "Seu texto não tem 'a' ;-;" << endl;
     }
}