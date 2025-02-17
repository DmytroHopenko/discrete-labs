#include "Sort.h"

#include <iostream>
#include <ostream>
#include <set>

using namespace std;

void customSwap(datatype& a, datatype& b) {
    datatype temp = a;
    a = b;
    b = temp;
}

void minMaxValue(datatype* array, int start, int end) {
    datatype min = array[start], max = array[start];

    for (int i = start; i < end; i++) {
        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }

    cout << "Min value:" << min << "\nMax value:" << max << endl;
}

void sortBubble(datatype* array, int start, int end) {
    bool swaped;

    for (int i = start; i < end; i++) {
        swaped = false;
        for (int j = start; j < end-(i-start); j++) {
            if (array[j] > array[j+1]) {
                customSwap(array[j], array[j+1]);
                swaped = true;
            }
        }

        if (!swaped) break;
    }

    minMaxValue(array, start, end+1);
}

void sortInsertion(datatype* array, int start, int end) {

    for (int i = start + 1; i <= end; i++) {
        datatype key = array[i];
        int j = i - 1;

        while (j >= start && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    minMaxValue(array, start, end+1);
}

void sortSelection(datatype* array, int start, int end) {
    for (int i = start; i < end; i++) {
        int minIndex = i;

        for (int j = i + 1; j <= end; j++) {
            if (array[j] < array[minIndex]) minIndex = j;
        }

        customSwap(array[i], array[minIndex]);
    }

    minMaxValue(array, start, end+1);
}

void printSortedArray(datatype* array, int size) {
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}