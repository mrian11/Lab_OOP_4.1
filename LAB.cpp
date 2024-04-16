//////////////////////////////////////////////////////////////////////////////
// LAB.cpp
#include "KvadRivn.h"
#include "LinRivn.h"
#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    Rivn* equations[3];

    LinRivn linear(2, -3);
    KvadRivn quadratic(1, -4, 4);

    equations[0] = &linear;
    equations[1] = &quadratic;

    for (int i = 0; i < 2; i++) {
        equations[i]->existence();
    }

    for (int i = 0; i < 2; ++i) {
        cout << "Rivn " << i + 1 << ":" << endl;
        cout << "Type: ";

        if (typeid(*equations[i]) == typeid(LinRivn)) {
            cout << "Lin" << endl;
        }
        else if (typeid(*equations[i]) == typeid(KvadRivn)) {
            cout << "Kvad" << endl;
        }
    }

    return 0;
}