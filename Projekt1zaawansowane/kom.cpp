#include "kom.h"
#include <iostream>
using namespace std;

    kom::kom(int b) : a(b), next(nullptr), prev(nullptr) {}
    kom::kom() : next(nullptr), prev(nullptr) {};

    listadk::listadk(int a) { glowa = new kom(a); }
    listadk::listadk(int a, int b) { glowa = new kom(a), ogon = new kom(b); }
    void listadk::dodajglowa(int a) {
        kom* komn = new kom(a);
        if (!glowa) { glowa = ogon = komn; }
        else {
            komn->next = glowa;
            cout << komn->a;
            glowa->prev = komn;
            cout << glowa->a;
            glowa = komn;
            cout << komn->a;

        }
    }
