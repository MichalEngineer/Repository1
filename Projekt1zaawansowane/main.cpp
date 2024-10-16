#include <iostream>
#include "kom.h"
using namespace std;

int main()
{
    listadk a(5);
    a.dodajglowa(4);
    a.dodajglowa(3);
    a.dodajglowa(2);
    a.wypisz();
    a.minusglowa();
    a.wypisz();
    a.minusogon();
    a.wypisz();
}
