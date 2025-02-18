#include "LogCon.h"

bool NOT(bool a) {
    if (a == true) {
        return false;
    }

    return true;
}

bool AND (bool a, bool b) {
    if (a == true) {
        if (b == true) {
            return true;
        }
    }
    return false;
}

bool OR (bool a, bool b) {
    if (a) return true;

    if (b) return true;

    return false;
}

bool IMP(bool a, bool b) {
    if (a) {
        if (b == false) return false;
    }

    return true;
}

bool EQU(bool a, bool b) {
    if (a == b) return true;

    return false;
}


bool XOR (bool a, bool b) {
    if (a == false) {
        if(b) return true;
    }

    if (a) {
        if (b == false) return true;
    }

    return false;
}

bool F5(bool a, bool b, bool c) {
    return (EQU(OR(AND(a,b), c), AND(c, NOT(a))));
}
