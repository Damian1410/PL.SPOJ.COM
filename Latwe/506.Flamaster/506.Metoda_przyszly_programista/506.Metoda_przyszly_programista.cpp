#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

/*
1. Odczytaj i zapisz do zmiennej string wyrazDoSkrocenia
2. Przechodz po wszystkich znakach i sprawdz czy wystepuja 3 literki obok siebie
3. Jesli w ktoryms miejscu wystepuja 3 litery obok siebie to policz literki i zapisz ile ich wystepuje do zmiennej iloscWystapien
4. Zastap powtarzajace sie obok siebie litery pierszwa litera oraz zmienna iloscWystapien
5. Program ma pojsc dalej i sprawdzic czy dalej wystepuja 3 znaki identyczne obok siebie
6. program ma zakonczyc dzialanie w momencie kiedy skoczy sie caly wyraz
*/

string konwersjaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int obliczWystapieniaDanegoZnaku(string wyraz, int pozycjaZnaku)
{
    //zliczanie powtorzen takich samych znakow
    int iloscWystapien = 1;
    if(wyraz.length() > pozycjaZnaku)
    {
        while(wyraz[pozycjaZnaku] == wyraz[pozycjaZnaku+1])
        {
            iloscWystapien++;
            pozycjaZnaku++;
        }
    }

    else iloscWystapien = 0;

    return iloscWystapien;
}

string skracanieWyrazow ( string wyrazDoSkrocenia)
{
    int iloscWystapien;
    char powtarzajacySieZnak;

    for (int i=0; i<wyrazDoSkrocenia.length()-2; i++)
    {
        //sprawdzamy czy wystepuja 3 takie same znaki obok siebie
        if((wyrazDoSkrocenia[i] == wyrazDoSkrocenia[i+1]) && (wyrazDoSkrocenia[i+1]==wyrazDoSkrocenia[i+2]))
        {
            iloscWystapien = obliczWystapieniaDanegoZnaku(wyrazDoSkrocenia, i);
            powtarzajacySieZnak = wyrazDoSkrocenia[i];

            wyrazDoSkrocenia.replace(i, iloscWystapien, powtarzajacySieZnak + konwersjaIntNaString(iloscWystapien));
        }
    }

    return wyrazDoSkrocenia;

}

int main()
{
    // przekierowanie strumienia z klawiatury na plik tekstowy
    ifstream in("in.txt");
    streambuf *cinbuf = cin.rdbuf();    //save old buf
    cin.rdbuf(in.rdbuf()); //redirect cin to in.txt!

    string wyraz;

    int iloscWyrazow;
    cin >> iloscWyrazow;

    for(int i=0; i<iloscWyrazow; i++)
    {
        cin >> wyraz;
        cout << skracanieWyrazow(wyraz)<<endl;
    }

    cin.rdbuf(cinbuf); // reset to standard input again

    cin >> iloscWyrazow;

    for(int i=0; i<iloscWyrazow; i++)
    {
        cin >> wyraz;
        cout << skracanieWyrazow(wyraz)<<endl;
    }


    return 0;
}
