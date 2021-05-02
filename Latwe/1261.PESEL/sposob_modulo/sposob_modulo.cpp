#include <iostream>
#include <windows.h>

using namespace std;

void sprawdzPesel(long long liczba)
{
    int pesel[11];
    long long a;

        int szyfr[11] = {1 ,3, 7, 9, 1 , 3, 7, 9, 1, 3, 1};

        //zapisywanie liczb do tablicy
        for (int i=10; i>=0; i--)
        {
            pesel[i] =liczba%10;
            long long a = (liczba - pesel[i])/10;
            liczba = a;
        }

        int suma= 0;

        // mnozenie i dodawanie liczb z tablic
        // multiplication and sum numbers from arrays
         for (int i=0; i<11; i++)
        {
            suma = suma + pesel[i]*szyfr[i];
        }

        string wynik;

        if(suma%10==0)
        {
            wynik = "D";
        }
        else wynik = "N";

        cout << wynik;
}

int main()
{
        int t;
        cin >> t;
        long long pesel;

       for(int i = 0; i<t; i++)
       {

            cin >> pesel;
            sprawdzPesel(pesel);
            cout<<endl;

       }

    return 0;
}
