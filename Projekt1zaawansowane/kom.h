#pragma once

class kom {
public:
    int a;
    kom* next;
    kom* prev;
    kom(int a);
    kom();
};
class listadk {
private:
    kom* glowa;
    kom* ogon;

public:
    listadk(int a);
    void dodajglowa(int a);
    void dodajogon(int a);
    void dodajindex(int a, int b);
    void wypisz(void);
};