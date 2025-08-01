#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;

    cout << "Valor de x: " << x << endl;       // 10
    cout << "Endereço de x: " << &x << endl;   // ex: 0x7ffabc
    cout << "Valor de p: " << p << endl;       // mesmo endereço: 0x7ffabc
    cout << "Valor apontado por p: " << *p << endl;  // 10

    *p = 20;  // altera o valor de x via ponteiro

    cout << "Novo valor de x: " << x << endl;  // 20
}
