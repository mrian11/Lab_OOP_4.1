//////////////////////////////////////////////////////////////////////////////
// KvadRivn.cpp
#include "KvadRivn.h"
#include <cmath>

using namespace std;

bool KvadRivn::existence() {
    double discriminant = getB() * getB() - 4 * getA() * c;
    if (discriminant > 0 || discriminant == 0) {
        cout << "Root(s) exist\n";
        return true; // корінь існує
    }
    else {
        cout << "No real root\n";
        return false; //  корінь не існує
    }
}
