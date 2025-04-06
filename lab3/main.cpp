#include <iostream>
#include "Comb.h"
#include "Sort.h"

using namespace std;

int main() {
    datatype arr[] = {5, 4, 12, 2, 1, 85, 0, 77, 7};
    int sizeOfArray = size(arr);

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

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.