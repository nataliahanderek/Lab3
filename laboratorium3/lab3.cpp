#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include "matrix.cpp"

using namespace std;


int main() {

    cout << "Tablica (niekwadratowa) zainicjowana zerami:" << endl;
    matrix tablica1(4,5);
    tablica1.print();

    cout << "Tablica (kwadratowa) zainicjowana zerami:" << endl;
    matrix tablica2(4);
    tablica2.print();

    cout << "Funkcja set dla tablicy niekwadratowa:" << endl;
    tablica1.set(2,1,768);
    tablica1.print();

    cout << "Element, ktory pobrales testujac funkcje get to: ";
    cout << tablica1.get(2,1) << endl;

    cout << "Suma macierzy tablica1 oraz tablica3:" << endl;
    matrix tablica3(4,5);
    tablica3.set(2,1,100);
    tablica1.print();
    cout << "+" << endl;
    tablica3.print();
    matrix dodanemacierze = tablica1.add(tablica3);
    cout << "=" << endl;
    dodanemacierze.print();
    cout << "Liczba wierszy: " << dodanemacierze.rows() << endl;
    cout << "Liczba kolumn: " <<dodanemacierze.cols() << endl;

    cout << "Odejmowanie tablicy1 i tablicy3:" << endl;
    tablica1.print();
    cout << "-" << endl;
    tablica3.print();
    matrix odjetemacierze = tablica1.substract(tablica3);
    cout << "=" << endl;
    odjetemacierze.print();
    cout << "Liczba wiersz: " << odjetemacierze.rows() << endl;
    cout << "Liczba kolumn: " << odjetemacierze.cols() << endl;

    cout << "Mnozenie macierzy tablica5 i tablica4" << endl;
    matrix tablica5(4,4);
    tablica5.set(1,1,2);
    tablica5.set(1,2,2);
    tablica5.set(1,3,2);
    tablica5.set(1,4,2);
    matrix tablica4(4,4);
    tablica4.set(1,1,2);
    tablica4.set(2,1,2);
    tablica4.set(3,1,2);
    tablica4.set(4,1,2);
    tablica5.print();
    cout << "*" << endl;
    tablica4.print();
    matrix mnozonemacierze = tablica5.multiply(tablica4);
    cout << "=" << endl;
    mnozonemacierze.print();
    cout << "Liczba wierszy: " << mnozonemacierze.rows() << endl;
    cout << "Liczba kolumn: " << mnozonemacierze.cols() << endl;

    cout << "Zapisywanie macierzy do pliku" << endl;
    string nazwa;
    string sciezka;

    cout << "Podaj nazwe pliku, w ktorym chcesz zapisac macierz: ";
    cin >> nazwa;
    cout << "Podaj sciezke do tego pliku: ";
    cin >> sciezka;
    mnozonemacierze.store(nazwa,sciezka);


    return 0;

}