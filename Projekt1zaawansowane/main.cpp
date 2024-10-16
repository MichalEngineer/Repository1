#include <iostream>
#include "kom.h"
using namespace std;

int main()
{
    listadk a(5);
    a.wypisz();
    a.dodajogon(1);
    a.wypisznext(0);
    a.wypiszprev(1);
    a.wypisz();
    a.dodajglowa(3);
    a.wypisz();
    a.minusglowa();
    a.wypisz();
    a.dodajindex(5, 3);
    a.wypisz();
    a.dodajogon(1);
    a.wypisz();
    a.minusogon();
    a.wypisz();
    a.minusindex(3);
    a.wypisz();
}
