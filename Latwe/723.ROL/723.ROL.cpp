#include <iostream>

using namespace std;

/*
1. utworzenie tablicy dynamicznej o rozmiarze iloscLiczb
2. wczytanie liczb do tablicy
3. odwrocenie liczb w tablicy
4. wypisnie odwroconej tablicy
*/

int main()
{

    int l_testow, iloscLiczb, pierwszaLiczba;

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

        pierwszaLiczba = tab_liczb[0];

        // odwrocenie liczb w tablicy
        for( int j=0; j<iloscLiczb-1; j++)
        {
            tab_liczb[j] = tab_liczb[j+1];
        }

        tab_liczb[iloscLiczb-1] = pierwszaLiczba;

        // wypisanie tablicy
        for( int j=0; j<iloscLiczb; j++)
        {
            cout << tab_liczb[j] << " ";
        }

        delete [] tab_liczb; //usuniecie tablicy

        cout << endl;
    }

    return 0;
}
