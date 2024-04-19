#include <iostream>
using namespace std;

int main(){
    int num[10] = {1, 2, 3, 4, 5 ,6 ,7, 8, 9, 10};

    cout << num[1] << ", " << num[3] << ", " << num[5] << ", " << num[7] << ", " << num[9] << endl;
    cout << num[0] << ", " << num[2] << ", " << num[4] << ", " << num[6] << ", " << num[8] << endl;

    return 0;
}