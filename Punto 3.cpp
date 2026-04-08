#include <iostream>
using namespace std;

int maxElement(int *ptr, int size) {

    if (size == 0) {
        return 0;
    }

    int max = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    return max;
}

int main() {
    int size;

    cout << "Enter size: ";
    cin >> size;

    int *ptr = new int[size];

    cout << "Enter numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> *(ptr + i);
    }

    cout << "Max element: " << maxElement(ptr, size);

    delete[] ptr;

    return 0;
}
