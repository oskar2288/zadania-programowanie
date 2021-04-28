#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand( time( NULL ) );
    int liczba =( rand() % 1000 );
    cout << "Podaj liczbe od 1 do 1000." << endl;
    int strzal;
    int liczbastrzalow = 0;
    cin >> strzal;
    do
    {
        if( strzal > 1000 )
        {
            cout << "Podaj liczbe od 1 do 1000!" << endl;
            cin >> strzal;
        }
        else
             liczbastrzalow++;
       
        if( strzal > liczba )
        {
            cout << "Wylosowana liczba jest mniejsza od Twojej typowanej." << endl;
            cout << "Sprobuj ponownie." << endl;
            cin >> strzal;
        }
        else
             cout << "Wylosowana liczba jest wieksza od Twojej typowanej. Sprobuj ponownie." << endl;
       
        cin >> strzal;
    } while( strzal != liczba );
   
    cout << "Brawo, trafiles we wlasciwa liczbe! Dana liczba bylo " << liczba << ". Strzelales " << liczbastrzalow << " razy!" << endl;
    return 0;
   
}
