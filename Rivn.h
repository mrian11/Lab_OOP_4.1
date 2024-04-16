//////////////////////////////////////////////////////////////////////////////
// Rivn.h
#pragma once

class Rivn
{
protected:
    double a, b;

public:
    Rivn() : a(0), b(0) {};
    Rivn(double x, double y) : a(x), b(y) {};

    double getA() { return a; };
    double getB() { return b; };

    void setA(double a) { this->a = a; }
    void setB(double b) { this->b = b; }

    virtual bool existence() = 0; // Віртуальна функція для визначення існування коренів
};