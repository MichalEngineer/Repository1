#include "kom.h"
#include <iostream>
using namespace std;

    kom::kom(int a) : a(a), next(nullptr), prev(nullptr) {}
    listadk::listadk(int a) { glowa = new kom(a),ogon=glowa; }
    void listadk::dodajglowa(int a) {
        kom* komn = new kom(a);
        if (!glowa) { glowa = ogon = komn; }
        else {
            komn->next = glowa;
            glowa->prev = komn;
            glowa = komn;

        }
    }
    void listadk::minusglowa(void) {
        if (!glowa) {
            cout << "brak glowy\n";
            return; }
        glowa = glowa->next;
        glowa->prev = nullptr;

    }
    void listadk::minusindex(int a){
        if (!glowa) {
            cout << "brak glowy\n";
            return;
        }
        if (a == 0) {
            this->minusglowa();
            return;
        }
        kom* o = glowa;
        for (int i = 0;o != nullptr && i < a;i++) { o = o->next; }
        if (o == nullptr) {
            this->minusogon();
            return;
        }
        if (o->prev != nullptr) {
            o->prev->next = o->next;
        }
        if (o->next != nullptr) {
            o->next->prev = o->prev;
        }
        delete o;
        };
    void listadk::minusogon(void) {
        if (!ogon) { cout << "brak ogon\n"; }
        ogon = ogon->prev;
        ogon->next = nullptr;

    }
    void listadk::dodajogon(int a) {
        kom* komn = new kom(a);
        if (!ogon) { glowa = ogon = komn; }
        else {
            komn->prev = ogon;
            ogon->next = komn;
            ogon = komn;
        }
    }
    void listadk::dodajindex(int a, int b) {
        kom* komn = new kom(a);
        if (b == 0) { dodajglowa(a); }
        kom* o = glowa;
        for (int i = 0;o != nullptr && i < b;i++) { o = o->next; }
        if (o == nullptr) { dodajogon(a); }
        else {
            komn->next = o->next;
            komn->prev = o;
            o->next = komn;
            if (komn->next != nullptr) {
                komn->next->prev = komn;
            }
            else {
                ogon = komn;  
            }
        }
    }
    void listadk::wypisz(void) {
        if (!glowa) {
            cout << "brak glowy\n";
            return;
        }
        kom* o = glowa;
        cout << endl;
        for (int i = 0;o != nullptr;i++) { 
        cout << o->a;
        o = o->next; 
        }
        cout << endl;
    }
    void listadk::wypisztyl(void) {
        kom* o = ogon;
        cout << endl;
        for (int i = 0;o != nullptr;i++) { cout << o->a, o = o->next; }
        cout << endl;
    }
    void listadk::wypisznext(int a) {
        if (!glowa) {
            cout << "brak glowy\n";
            return;
        }
        kom* o = glowa;
        for (int i = 0;o != nullptr && i < a;i++) { o = o->next; }
        kom* s = o->next;
        cout << s->a;
    }
    void listadk::wypiszprev(int a){
        if (!glowa) {
            cout << "brak glowy\n";
            return;
        }
        kom* o = glowa;
        for (int i = 0;o != nullptr && i < a;i++) { o = o->next; }
        kom* s = o->prev;
        cout << s->a;
    }
    void listadk::usun(void){
        while(head != nullptr) { this.minusglowa();}
    }