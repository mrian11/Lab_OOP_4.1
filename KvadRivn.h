//////////////////////////////////////////////////////////////////////////////
// KvadRivn.h
#pragma once

#include "Rivn.h"
#include <iostream>

class KvadRivn : public Rivn
{
private:
    double c; // ax^2 + bx + c = 0

public:
    KvadRivn(double a, double b, double c) : Rivn(a, b), c(c) {}

    bool existence() override; // Перевизначена функція існування коренів
};