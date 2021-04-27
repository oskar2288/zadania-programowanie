#include <iostream>
using namespace std;
int main()
{
    float liczbaA, liczbaB, liczbaC;
    bool czyWczyt1, czyWczyt2, czyWczyt3;
 
    cout << "Wpisz trzy liczby rzeczywiste: "; //tekst poczatek
 
    //liczba A
    cin >> liczbaA;
    czyWczyt1 = cin.good();
    cin.clear();
    cin.sync();
 
    //liczba B
    cin >> liczbaB;
    czyWczyt2 = cin.good();
    cin.clear();
    cin.sync();
 
    //liczba C
    cin >> liczbaC;
    czyWczyt3 = cin.good();
    cin.clear();
    cin.sync();
 
    //wypisywanie wyniku
    cout << "Liczba A to: " << liczbaA << "Czy wczytano? " << czyWczyt1 << endl;
    cout << "Liczba B to: " << liczbaB << "Czy wczytano? " << czyWczyt2 << endl;
    cout << "Liczba C to: " << liczbaC << "Czy wczytano? " << czyWczyt3 << endl;
 
 
    return 0;
}

