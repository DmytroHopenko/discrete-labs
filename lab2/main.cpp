#include <iostream>
#include "Sort.h"

using namespace std;

int main() {
    datatype arr[] = {5, 4, 12, 2, 1, 85};
    int sizeOfArray = size(arr);
    cout << sizeOfArray << endl;
    int methodId, start, end;

    cout << "To start choose one of sorting with ID: \n";
    cout << "1. - Bubble method \n";
    cout << "2. - Insertion method \n";
    cout << "3. - Selection method \n";
    cout << "Enter the method ID: ";
    cin >> methodId;

    switch (methodId) {
        case 1:
            cout << "Enter point of sorting start: ";
            cin >> start;

            cout << "Enter point of sorting end: ";
            cin >> end;

            sortBubble(arr, start, end-1);
            printSortedArray(arr, sizeOfArray);
            break;
        case 2:
            cout << "Enter point of sorting start: ";
            cin >> start;

            cout << "Enter point of sorting end: ";
            cin >> end;

            sortInsertion(arr, start, end-1);
            printSortedArray(arr, sizeOfArray);

            break;
        case 3:
            cout << "Enter point of sorting start: ";
            cin >> start;

            cout << "Enter point of sorting end: ";
            cin >> end;

            sortSelection(arr, start, end-1);
            printSortedArray(arr, sizeOfArray);

            break;
        default:
            cout << "Default methodId is null" << endl;
    }

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.