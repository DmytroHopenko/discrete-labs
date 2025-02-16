#include <iostream>
#include "LogCon.h"
using namespace std;

int main() {
    cout << "a\tb\t!a\ta&b\ta|b\ta->b\ta~b\ta^b\n";

    cout << "1\t1\t";
    cout << NOT(true) << "\t" << AND(true, true) << "\t";
    cout << OR(true, true) << "\t" << IMP(true, true) << "\t";
    cout << EQU(true, true) << "\t" << XOR(true, true) << "\n";

    cout << "1\t0\t";
    cout << NOT(true) << "\t" << AND(true, false) << "\t";
    cout << OR(true, false) << "\t" << IMP(true, false) << "\t";
    cout << EQU(true, false) << "\t" << XOR(true, false) << "\n";

    cout << "0\t1\t";
    cout << NOT(false) << "\t" << AND(false, true) << "\t";
    cout << OR(false, true) << "\t" << IMP(false, true) << "\t";
    cout << EQU(false, true) << "\t" << XOR(false, true) << "\n";

    cout << "0\t0\t";
    cout << NOT(false) << "\t" << AND(false, false) << "\t";
    cout << OR(false, false) << "\t" << IMP(false, false) << "\t";
    cout << EQU(false, false) << "\t" << XOR(false, false) << "\n";

    cout << endl;

    cout << "a\tb\tc\t((a & b) | c) = (c & !a)\n";

    cout << "1\t1\t1\t";
    cout << F5(true, true, true) << "\n";

    cout << "1\t1\t0\t";
    cout << F5(true, true, false) << "\n";

    cout << "1\t0\t1\t";
    cout << F5(true, false, true) << "\n";

    cout << "1\t0\t0\t";
    cout << F5(true, false, false) << "\n";

    cout << "0\t1\t1\t";
    cout << F5(false, true, true) << "\n";

    cout << "0\t1\t0\t";
    cout << F5(false, true, false) << "\n";

    cout << "0\t0\t1\t";
    cout << F5(false, false, true) << "\n";

    cout << "0\t0\t0\t";
    cout << F5(false, false, false) << "\n";

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.