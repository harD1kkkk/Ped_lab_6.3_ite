#include <iostream>
using namespace std;

int CountEvenElements(int* a, const int size); 
template <typename T>
int CountEvenElements(T* a, const int size); 

int main() {
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int count1 = CountEvenElements(a, n);
    cout << "CountEvenElements(a, n) = " << count1 << endl;

    int count2 = CountEvenElements<int>(a, n);
    cout << "CountEvenElements<int>(a, n) = " << count2 << endl;

    return 0;
}

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
