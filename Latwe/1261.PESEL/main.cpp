#include <iostream>
#include <windows.h>

using namespace std;

void sprawdzPesel(string liczba)
{
    int pesel[11];

        int szyfr[11] = {1 ,3, 7, 9, 1 , 3, 7, 9, 1, 3, 1};

        //zapisywanie liczb ze stringa do tablicy
        //writing numbers from a string to an array
        for (int i=0; i<11; i++)
        {
            pesel[i] = liczba[i]-48;
        }

        int suma= 0;

        // mnozenie i dodawanie liczb z tablic
        // multiplication and sum numbers from arrays
         for (int i=0; i<11; i++)
        {
            //cout <<suma <<endl;
            //system("pause");
            suma = suma + pesel[i]*szyfr[i];
        }
        string wynik;
        if(suma%10==00)
        {
            wynik = "D";
        }
        else wynik = "N";
    cout << wynik;
}

int main()
{
    int t;
    cin >>t;
    string pesel;

    for(int i = 0; i<t; i++)
    {

        cin >> pesel;
        sprawdzPesel(pesel);
        cout<<endl;

    }

    return 0;
}
