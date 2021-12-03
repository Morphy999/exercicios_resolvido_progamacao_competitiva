#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;




int main() {
    int renas[9], i = 0, soma = 0;
    
    while (i < 9) {
        cin >> renas[i];
        soma += renas[i];
        i++;
    }

    switch (soma % 9) {
        case 1: cout << "Dasher" << endl; break;
        case 2: cout << "Dancer" << endl; break;
        case 3: cout << "Prancer" << endl; break;
        case 4: cout << "Vixen" << endl; break;
        case 5: cout << "Comet" << endl; break;
        case 6: cout << "Cupid" << endl; break;
        case 7: cout << "Donner" << endl; break;
        case 8: cout << "Blitzen" << endl; break;
        default: cout << "Rudolph" << endl; break;
    }

    return 0;
}