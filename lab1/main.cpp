#include <iostream>
#include "LogCon.h"
using namespace std;

int main() {

    cout << "a\tb\t!a\ta&b\ta|b\ta->b\ta~b\ta^b\n";

    for (int i = 1; i >= 0; i--) {
        for (int j = 0; j <= 1; j++) {
            cout << i << "\t" << j << "\t";
            cout << NOT(i) << "\t" << AND(i, j) << "\t";
            cout << OR(i, j) << "\t" << IMP(i, j) << "\t";
            cout << EQU(i, j) << "\t" << XOR(i, j) << "\n";
        }
    }

    cout << endl;

    cout << "a\tb\tc\t((a & b) | c) = (c & !a)\n";

    for (int i = 1; i >= 0; i--) {
        for (int j = 1; j >= 0; j--) {
            for (int c = 1; c >= 0; c--) {
                cout << i << "\t" << j << "\t" << c << "\t" <<  F5(i, j, c) << "\n";
            }

        }
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.