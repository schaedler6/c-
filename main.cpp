#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "VOCÊ PODE SER PRESO" << endl;  
    } else {
        cout << "VOCÊ VAI PARA A FASE" << endl;  
    }

    return 0;
}

