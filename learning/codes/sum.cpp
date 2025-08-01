#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> numeros) {
    int total_sum = 0;
    for(int number : numeros){
        total_sum += number;
    }
    return total_sum;
}

int main(){
    vector<int> numeros_soma = {2, 3, 4};
    int resultado = sum(numeros_soma);
    cout << "O resultado de 2 + 3 + 4, foi de: " << resultado << "\n";
}