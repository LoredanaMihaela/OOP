#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;
class Dreptunghi {
    int L, l;
public:
    void daValori(int, int);
    int aria() { return L * l; }
};

void Dreptunghi::daValori(int x, int y) {
    L = x;
    l = y;
}

int main() {
    Dreptunghi drept1;
    drept1.daValori(3, 4);
    cout << "aria lui drept: " << drept1.aria() << endl;
    return 0;
}