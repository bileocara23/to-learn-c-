//this code uses if and && to examplify
//and this code can show the output for true or false of c++

#include <iostream>
using namespace std;

int main(){
    int x = 1;
    int y = 2;

    if ((x <= y) && (y >= x)) {
        cout << "x value is <= y and y >= x\n";
    }
    else {
        cout << "x value is >= y and y <= x \n";
    }
    //OR
    //condition in line -> ternary operator
    cout << (((x >= y) && (y <= x)) ? "x is >= y AND x is <= x" : "x is not >= y AND x is not <= x\n");
}