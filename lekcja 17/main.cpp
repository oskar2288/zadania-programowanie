#include <iostream>
#include <limits>
using namespace std;
/*Napisz funkcjê, która bêdzie wczytywa³a liczby ze standardowego wejœcia i zwraca³a wczytan¹ wartoœæ.
    Funkcja ma zagwarantowaæ, ¿e zwracana liczba zawsze jest poprawna.
    Oznacza to, ¿e funkcja bêdzie musia³a pytaæ u¿ytkownika o wprowadzenie liczby dopóki nie poda poprawnej. */

int wczytajLiczbe()
{
    int x;
    bool wczytano;
    do
    {
        cout << "Podaj liczbe : " << endl;
       
        cin >> x;
        wczytano = cin.good();
        cin.clear();
        cin.ignore( numeric_limits < streamsize >::max(), '\n' );
       
        if( !wczytano )
             cout << "Poda³es b³edn¹ liczbê spróbuj jeszcze raz !" << endl;
       
    } while( !wczytano );
   
    return x;
}

int main()
{
    cout << "Twoja liczba to : " << wczytajLiczbe() << endl;
    return 0;
}
