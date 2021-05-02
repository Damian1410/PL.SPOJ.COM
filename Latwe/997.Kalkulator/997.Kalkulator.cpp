#include <iostream>

using namespace std;
/*
1. Stworzenie zmiennych przechowujacych znak operacji oraz liczby
2. Stowrzenie switch-a w pentli while do wyboru polecenia i wykonania dzia³ania
*/

int operacjaMatematyczna( char dzialanie, int liczba_1, int liczba_2)
{
     switch (dzialanie)
        {
        case '+':
            return liczba_1 + liczba_2;
            break;

        case '-':
            return liczba_1 - liczba_2;
            break;

        case '/':
            return liczba_1 / liczba_2;
            break;

        case '*':
            return liczba_1 * liczba_2;
            break;

        case '%':
            return liczba_1 % liczba_2;
            break;

        default:
            break;
        }
}

int main()
{
    int liczba_1, liczba_2, wynik;
    char znakOperacji;

    while(cin >> znakOperacji >> liczba_1 >> liczba_2)
    {
        cout << operacjaMatematyczna(znakOperacji, liczba_1, liczba_2) << endl;
    }

    return 0;
}
