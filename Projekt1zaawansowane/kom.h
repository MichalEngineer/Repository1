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
    ~listadk(void);
    void dodajglowa(int a);
    void dodajogon(int a);
    void minusglowa(void);
    void minusogon(void);
    void dodajindex(int a, int b);
    void minusindex(int a);
    void wypisz(void);
    void wypisztyl(void);
    void wypisznext(int a);
    void wypiszprev(int a);
    void usun(void);
};