#include <iostream>
using namespace std;

int doubleValue(int x) {
    return x * 2;
}

int tripleValue(int x) {
    return x * 3;
}

void applyOperation(int *ptr, int size, int (*operation)(int)) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) = operation(*(ptr + i));
    }
}

int main() {
    int size = 5;

    int *ptr = new int[size];

    cout << "Enter numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> *(ptr + i);
    }

    applyOperation(ptr, size, doubleValue);

    cout << "Result:" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }

    delete[] ptr;

    return 0;
}
