#include <iostream>
#include <iomanip>
using namespace std;

int CountEvenElements(int* a, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

template <typename T>
int CountEvenElements(T* a, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end) {
    for (int i = 0; i < numberOfElements; i++) {
        a[i] = start + rand() % (end - start + 1);
    }
}

template <typename T>
void CreateArrayWithRandomElements(T* a, int numberOfElements, int start, int end) {
    for (int i = 0; i < numberOfElements; i++) {
        a[i] = start + rand() % (end - start + 1);
    }
}

void PrintArray(int* a, int size) {
    for (int i = 0; i < size; i++) {
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    }
    cout << endl;
}

template <typename T>
void PrintArray(T* a, int size) {
    for (int i = 0; i < size; i++) {
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    const int size = 10;
    int a[size];

    cout << "Create Array" << endl;
    CreateArrayWithRandomElements(a, size, -20, 34);

    cout << "Print" << endl;
    PrintArray(a, size);

    int count1 = CountEvenElements(a, size);
    cout << "CountEvenElements (function) = " << count1 << endl;

    cout << endl;

    cout << "Create Array(template)" << endl;
    CreateArrayWithRandomElements<int>(a, size, -20, 34);

    cout << "Print(template)" << endl;
    PrintArray<int>(a, size);

    int count2 = CountEvenElements<int>(a, size);
    cout << "CountEvenElements (template) = " << count2 << endl;

    return 0;
}
