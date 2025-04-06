#include "Comb.h"
#include <iostream>
#include <algorithm>

using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

long long A(int n, int k) {
    if (n < k) return 0;
    return factorial(n) / factorial(n - k);
}

long long _A(int n, int k) {
    long long result = 1;
    for (int i = 0; i < k; i++)
        result *= n;
    return result;
}

long long C(int n, int k) {
    if (n < k) return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

long long _C(int n, int k) {
    return C(n + k - 1, k);
}

void GenPerm(datatype* A, int n) {
    int i = n - 2;

    while (i >= 0 && A[i] >= A[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        while (A[j] <= A[i]) {
            j--;
        }

        swap(A[i], A[j]);
    }

    sort(A + i + 1, A + n);
}