#pragma once
/**
 * @file listadk.h
 * @brief Plik naglowkowy zawierajacy definicje klas kom i listadk dla dwukierunkowej listy.
 */

/**
* @brief Klasa kom reprezentujaca komorke/wezel
*/
class kom {
public:
    int a; ///< Wartosc przechowywana w komorce listy.   
    kom* next; ///< Wskaznik na nastepny element listy.
    kom* prev;///< Wskaznik na nastepny poprzedni listy.
    /**
    * @brief Konstruktor z parametrem.
    * @param a Wartosc, ktora nalezy przypisac do pola a.
    */
    kom(int a);
};
/**
 * @brief Klasa listadk reprezentujaca liste dwukierunkowa.
 */
class listadk {
private:
    kom* glowa; ///< Wskaznik na pierwszy element listy (glowa).
    kom* ogon; ///< Wskaznik na ostatni element listy (ogon).

public:
    /**
    * @brief Konstruktor listy dwukierunkowej, ktory tworzy liste z jednym elementem.
    * @param a Wartosc pierwszego elementu listy.
    */
    listadk(int a);
    /**
    * @brief Destruktor listy. Usuwa wszystkie elementy listy i zwalnia pamiec.
    */
    ~listadk(void);
    /**
    * @brief Dodaje nowy element o wartosci a na poczatku listy (przed glowa).
    * @param a Wartosc nowego elementu.
    */
    void dodajglowa(int a);
    /**
    * @brief Dodaje nowy element o wartosci a na koñcu listy (za ogonem).
    * @param a Wartosc nowego elementu.
    */
    void dodajogon(int a);
    /**
    * @brief Usuwa element z poczatku listy (glowy).
    */
    void minusglowa(void);
    /**
    * @brief Usuwa element z koñca listy (ogona).
    */
    void minusogon(void);
    /**
    * @brief Dodaje nowy element o wartosci a na pozycji b.
    * @param a Wartosc nowego elementu.
    * @param b Indeks, na ktorym nalezy wstawic nowy element.
    */
    void dodajindex(int a, int b);
    /**
   * @brief Usuwa element z podanego indeksu.
   * @param a Indeks elementu, ktory ma zostac usuniety.
   */
    void minusindex(int a);
    /**
    * @brief Wypisuje zawartosc listy od glowy do ogona.
    */
    void wypisz(void);
    /**
    * @brief Wypisuje zawartosc listy od ogona do glowy.
    */
    void wypisztyl(void);
    /**
    * @brief Wypisuje wartosc elementu, ktory znajduje sie po elemencie o wartosci a.
    * @param a Wartosc elementu, po ktorym ma zostac wypisany nastepny element.
    */
    void wypisznext(int a);
    /**
    * @brief Wypisuje wartosc elementu, ktory znajduje sie przed elementem o wartosci a.
    * @param a Wartosc elementu, przed ktorym ma zostac wypisany poprzedni element.
    */
    void wypiszprev(int a);
    /**
    * @brief Usuwa wszystkie elementy z listy.
    */
    void usun(void);
};