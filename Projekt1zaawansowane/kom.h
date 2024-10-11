#pragma once

class kom {
public:
    int a;
    kom* next;
    kom* prev;
    kom(int b);
    kom();
};

class listadk {
private:
    kom* glowa;
    kom* ogon;

public:
    listadk(int a);
    listadk(int a, int b);
    void dodajglowa(int a);
};