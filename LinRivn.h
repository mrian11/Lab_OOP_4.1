//////////////////////////////////////////////////////////////////////////////
// LinRivn.h
#pragma once

#include "Rivn.h"
#include <iostream>

class LinRivn : public Rivn
{
public:
    LinRivn(double a, double b) : Rivn(a, b) {}

    bool existence() override; // Перевизначена функція існування коренів
};