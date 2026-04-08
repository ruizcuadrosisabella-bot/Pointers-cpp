#include <iostream>
using namespace std;

int sum(int *arr, int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr [i];
}
return total;
}
 
 int main () {
    int n;

    cout << "Enter amount of numbers: ";
    cin >> n;

    int *array = new int [n];

    for(int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> array[i];
    }

    int result = sum(array, n);

    cout << "The sum is: " << result << endl;

    delete [] array;
    return 0;
 }
