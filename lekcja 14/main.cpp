#include <iostream>
 
using namespace std;
 
int main()
{
    int liczba1,liczba2,wynik;
    char dzialanie;
 
    cout<<"Podaj pierwsza liczbe: ";
    cin>>liczba1;
    cout<<"Podaj druga liczbe: ";
    cin>>liczba2;
    cout<<"Wybierz jeden z operatorow arytmetycznych:\n+ dodawanie \n- odejmowanie \n* mnozenie \n/ dzielenie\n";
    cin>>dzialanie;
    switch(dzialanie)
    {
    case '+':
        wynik=liczba1 + liczba2;
        break;
    case '-':
        wynik=liczba1 - liczba2;
        break;
    case '*':
        wynik=liczba1 * liczba2;
        break;
    case '/':
        wynik=liczba1 / liczba2;
        break;
    default:
        cout<<"nieprawidlowe dane";
        return 0;
    }
 
    cout<<"wynik to: "<<wynik;
 
    return 0;
}

