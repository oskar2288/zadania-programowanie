#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand( time( NULL ) );
    int liczba[ 1000 ];
    int licznik = 0;
    do
    {
        liczba[ licznik ] =( rand() % 7 ) + 4;
        licznik++;
    } while( licznik < 999 );
   
    cout << "Wylosowano nastepujace liczby: ";
    licznik = 0;
    do
    {
        cout << liczba[ licznik ] << ", ";
        licznik++;
    } while( licznik < 999 );
   
    int suma = 0;
    for( int i = 0; i < 999; i++ )
    {
        suma += liczba[ i ];
    }
    cout << "Suma tych liczb to: " << suma << endl;
    return 0;
}
