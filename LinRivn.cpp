//////////////////////////////////////////////////////////////////////////////
// LinRivn.cpp
#include "LinRivn.h"

using namespace std;

bool LinRivn::existence() {
    if (getA() == 0) {
        if (getB() == 0)
            cout << "Countless roots\n";
        else
            cout << "No existence\n";
        return false; // Повертаємо false, оскільки корені не існують
    }
    else {
        cout << "Root exists\n";
        return true; // Повертаємо true, оскільки корінь існує
    }
}
