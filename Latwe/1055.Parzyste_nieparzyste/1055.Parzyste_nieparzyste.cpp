#include <iostream>

using namespace std;

/*
1. utworzenie tablicy dynamicznej o rozmiarze iloscLiczb
2. wczytanie liczb do tablicy
3. utworzenie petli wypisuj¹cej wartosci tablicy na parzystych pozycjach
4. utworzenie petli wypisuj¹cej wartosci tablicy na nieparzystych pozycjach
*/

int main()
{

    int l_testow, iloscLiczb;

    cin >> l_testow;


    for (int i=0; i<l_testow; i++)
    {

    cin >> iloscLiczb;

    int *tab_liczb = new int [iloscLiczb]; // utworzenie tablicy

    // wczytanie liczb do tablicy
    for( int j=0; j<iloscLiczb; j++)
    {
        cin >> tab_liczb[j];
    }

     // wypisanie wartosci tablicy na poz. parzystych
    for( int j=1; j<iloscLiczb; j++)
    {
        if( (j+1)%2 == 0) cout << tab_liczb[j] << " ";
    }

    // wypisanie wartosci tablicy na poz. nieparzystych
    for( int j=0; j<iloscLiczb; j++)
    {
        if( (j+1)%2 != 0) cout << tab_liczb[j] << " ";
    }

    delete [] tab_liczb; //usuniecie tablicy

    cout << endl;
    }

    return 0;
}
