#include <iostream>
#include "kom.h"
using namespace std;

int main()
{
    cout << "tworzenie listy z 5: ";
    listadk a(5);
    a.wypisz();
    cout << "dodanie 8 do przodu listy: ";
    a.dodajglowa(8);
    a.wypisz();
    cout << "dodanie 3 do tylu listy: ";
    a.dodajogon(3);
    a.wypisz();
    cout << "dodanie 4x4 do tylu listy: ";
    a.dodajogon(4);
    a.dodajogon(4);
    a.dodajogon(4);
    a.dodajogon(4);
    a.wypisz();
    cout << "dodanie 1 na indeksie 3: ";
    a.dodajindex(1, 2);
    a.wypisz();
    cout << "usunięcie z przodu listy: ";
    a.minusglowa();
    a.wypisz();
    cout << "usunięcie z tylu listy: ";
    a.minusogon();
    a.wypisz();
    cout << "wyswietlenie listy od przody i od tylu: ";
    a.wypisz();
    a.wypisztyl();
    cout << "wyswietlenie nastepnego elementu o numerze  indexu 5: ";
    a.wypisz();
    a.wypisznext(4);
    cout << "wyswietlenie poprzedniego elementu o numerze  indexu 2: ";
    a.wypisz();
    a.wypiszprev(1);
    cout << "Czyszczenie listy: ";
    a.usun();
    a.wypisz();
}
