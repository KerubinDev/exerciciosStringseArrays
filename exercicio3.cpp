#include <iostream>
using namespace std;

int main(){
    string letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u")
    cout << "Essa letra é uma vogal." << endl;
    else
    cout << "Essa letra é uma consoante" << endl;

    return 0;
}