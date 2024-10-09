#include <iostream>
using namespace std;

class kom {
public:
    int a;
    kom* next;
    kom* prev;
    kom(int b) : a(b),next(nullptr),prev(nullptr) {}
    kom() : next(nullptr), prev(nullptr) {};
};

class listadk {
private:
    kom* glowa;
    kom* ogon;
public:
    listadk(int a) { glowa = new kom(a);}
    listadk(int a, int b) { glowa = new kom(a), ogon = new kom(b); }
    void dodajglowa(int a) {
        kom* komn = new kom(a);
        if (!glowa) { glowa = ogon = komn; }
        else {
            komn->next = glowa;
            cout << komn->a;
            glowa->prev = komn;
            cout << glowa->a;
            glowa = komn;
            cout << glowa->a;
        }
    }
};
int main()
{
    listadk a(5);
    a.dodajglowa(1);
}
