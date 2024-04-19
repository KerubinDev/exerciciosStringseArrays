#include <iostream>
using namespace std;

int main(){
    string color[] = {"red", "blue", "gren", "black", "purple", "yellow", "silver"};
    int n;
    
    cout << "Digite um número: ";
    cin >> n;

    if (n < 7 && n > 0)
    cout << "Cor escolhida: " << color[n] << endl;
    else
    cout << "Cara... tu errou" << endl;
   
   
    return 0;
}