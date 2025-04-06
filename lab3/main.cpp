#include <iostream>
#include "Comb.h"
#include "Sort.h"

using namespace std;

int main() {
    // Task 1

    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    cout << "A(" << n << ", " << k << ") = " << A(n, k) << endl;
    cout << "_A(" << n << ", " << k << ") = " << _A(n, k) << endl;
    cout << "C(" << n << ", " << k << ") = " << C(n, k) << endl;
    cout << "_C(" << n << ", " << k << ") = " << _C(n, k) << endl;

    // Task 2

    int n2;

    cout << "\nEnter n2: ";
    cin >> n2;

    datatype* A = new datatype[n2];
    for (int i = 0; i < n2; ++i) {
        A[i] = i + 1;
    }

    long long totalPermutations = factorial(n2);

    cout << "All permutations in lexicographic order:\n";
    printArray(A, n2);
    cout << endl;

    for (int i = 1; i < totalPermutations; ++i) {
        GenPerm(A, n2);
        printArray(A, n2);
        cout << endl;
    }

    delete[] A;

    // Task 3

    int n3, k3;
    cout << "Enter n3 and k3: ";
    cin >> n3 >> k3;

    int* A2 = new int[k3];

    for (int i = 0; i < k3; ++i) {
        A2[i] = i + 1;
    }

    long long totalCombinations = C(n3, k3);

    cout << "All combinations in lexicographic order:\n";
    printArray(A2, k3);
    cout << endl;

    for (long long i = 1; i < totalCombinations; ++i) {
        GenComb(A2, n3, k3);
        printArray(A2, k3);
        cout << endl;
    }

    delete[] A2;

    return 0;
}