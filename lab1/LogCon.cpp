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
    if (a == true) return true;

    if (b == true) return true;

    return false;
}

bool IMP(bool a, bool b) {
    if (a == true) {
        if (b == false) return false;
    }

    return true;
}

bool EQU(bool a, bool b) {
    if (a == true && b == true) return true;
    if (a == false && b == false) return true;

    return false;
}


bool XOR (bool a, bool b) {
    if (a == false) {
        if(b == true) return true;
    }

    if (a == true) {
        if (b == false) return true;
    }

    return false;
}

bool F5(bool a, bool b, bool c) {
    return (EQU(OR(AND(a,b), c), AND(c, NOT(a))));
}
