#include <iostream>
#include <limits>
using namespace std;
/*Napisz funkcj�, kt�ra b�dzie wczytywa�a liczby ze standardowego wej�cia i zwraca�a wczytan� warto��.
    Funkcja ma zagwarantowa�, �e zwracana liczba zawsze jest poprawna.
    Oznacza to, �e funkcja b�dzie musia�a pyta� u�ytkownika o wprowadzenie liczby dop�ki nie poda poprawnej. */

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
             cout << "Poda�es b�edn� liczb� spr�buj jeszcze raz !" << endl;
       
    } while( !wczytano );
   
    return x;
}

int main()
{
    cout << "Twoja liczba to : " << wczytajLiczbe() << endl;
    return 0;
}
