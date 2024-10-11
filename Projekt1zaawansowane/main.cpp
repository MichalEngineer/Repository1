#include <iostream>
#include "kom.h"
using namespace std;

int main()
{
    listadk a(5);
    a.dodajogon(1);
    a.dodajglowa(3);
    a.dodajindex(5, 3);
    a.wypisz();
}
