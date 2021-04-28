#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;
void wylosujLiczby( int tablica[], int ile, int a, int b )
{
    srand( time( NULL ) );
    int licznik = 0;
    b = b - 5;
    do
    {
        tablica[ licznik ] =( rand() % b ) + a;
        licznik++;
    } while( ile > licznik );
   
}

void wypiszLiczby( int tablica[], int ile )
{
    int licznik = 0;
    do
    {
        cout << tablica[ licznik ] << ", ";
        licznik++;
    } while( ile > licznik );
   
}

int obliczSume( int tablica[], int ile )
{
    int licznik = 0;
    int suma = 0;
    do
    {
        suma += tablica[ licznik ];
        licznik++;
    } while( ile > licznik );
   
    return suma;
   
}

int main()
{
    int tablica[ 999 ];
    wylosujLiczby( tablica, 999, 4, 10 );
    wypiszLiczby( tablica, 999 );
    int iSuma = obliczSume( tablica, 999 );
    std::cout << "Suma liczb wynosi: " << iSuma << std::endl;
    getchar();
    return 0;
}

