#include "LogCon.h"

bool NOT(bool a) {
    if (!a) return true;

    return false;
}

bool AND (bool a, bool b) {
    if (a && b) return true;

    return false;
}

bool OR (bool a, bool b) {
    if (a || b) return true;

    return false;
}

bool IMP(bool a, bool b) {
    if (a && !b) return false;

    return true;
}

bool EQU(bool a, bool b) {
    if (a == b) return true;

    return false;
}


bool XOR (bool a, bool b) {
    if ((!a && b) || (a && !b)) return true;

    return false;
}

bool F5(bool a, bool b, bool c) {
    return (EQU(OR(AND(a,b), c), AND(c, NOT(a))));
}