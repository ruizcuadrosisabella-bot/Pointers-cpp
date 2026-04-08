#include <iostream>

void printIntValue(int *ptr) {
    std::cout << "Integer reinterpretation: " << *ptr << std::endl;
    std::cout << "Address (int*): " << ptr << std::endl;
}

void printBytes(char *ptr) {
    std::cout << "Bytes in memory: " << std::endl;

    for (int i = 0; i < sizeof(float); i++) {
        std::cout << "Byte " << i << ": "
                  << (int)*(ptr + i)
                  << " Address: "
                  << (void*)(ptr + i)
                  << std::endl;
    }
}

int main() {
    float value;

    std::cout << "Enter a float value: ";
    std::cin >> value;

    float *floatPtr = &value;

    int *intPtr = (int*)floatPtr;
    char *charPtr = (char*)floatPtr;

    std::cout << "Float value: " << value << std::endl;
    std::cout << "Address (float*): " << floatPtr << std::endl;

    printIntValue(intPtr);
    printBytes(charPtr);

    return 0;
}
