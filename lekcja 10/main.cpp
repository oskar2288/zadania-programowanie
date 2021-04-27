#include <iostream>
#include <math.h>


using namespace std;

int main()
{
   
    float liczba, liczba1, liczba2;
   
    cout << "Podaj 1 liczbe: ";
    cin >> liczba1;
   
   
    cout << "podaj 2 liczbe: ";
    cin >> liczba2;
   
    liczba = liczba1 + liczba2;
    cout << "a + b = " << liczba << endl;
   
    liczba = liczba1 - liczba2;
    cout << "a - b = " << liczba << endl;
   
    liczba = liczba1 * liczba2;
    cout << "a * b = " << liczba << endl;
   
    liczba = liczba1 / liczba2;
    cout << "a / b = " << liczba << endl;
   
    liczba = fmod(( float ) liczba1,( float ) liczba2 );
    cout << "a % b = " << liczba << endl;
   
    cin.get();
    cin.get();
    return 0;
}
