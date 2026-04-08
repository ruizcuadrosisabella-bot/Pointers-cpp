#include <iostream>
using namespace std;

void swapValues (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int num1 = 3;
    int num2 = 7;
    
    cout << "Before: " << num1 << "and" << num2 << endl;
    
    swapValues (&num1, &num2);

    cout << "After: " << num1 << "and" << num2 << endl;

    return 0;

}
