#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    long long liczba_1 = 44051401458;
     int pesel_1[11];

    int szyfr[11] = {1 ,3, 7, 9, 1 , 3, 7, 9, 1, 3, 1};

    //cin >> liczba;

//zapisywanie liczb ze stringa do tablicy
//writing numbers from a string to an array
    for (int i=10; i>=0; i--)
    {
        pesel_1[i] =liczba_1%10;
        long long a = (liczba_1 - pesel_1[i])/10;
        liczba_1 = a;
        cout << pesel_1[i] <<" " <<liczba_1<<endl;
    }

    int suma= 0;

    // mnozenie i dodawanie liczb z tablic
    // multiplication and sum numbers from arrays
     for (int i=0; i<11; i++)
    {
        cout <<suma <<endl;
        system("pause");
        suma = suma + pesel_1[i]*szyfr[i];
    }
       cout << suma;


    /*cin >> pesel;
    cout << pesel;



    cout << "Hello world!" << endl;*/
    return 0;
}
