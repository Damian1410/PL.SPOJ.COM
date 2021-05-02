#include <iostream>

using namespace std;

/*
1. Wszytanie wyrazenia
2. zmiana wartosci kodow ascii w strinhu
3. wypisanie zaszyfrowanego wyrazenia
*/

string szyfrCezara(string napis)
{
    for(int i=0; i<napis.length(); i++)
    {
        if(napis[i] == 32)
            napis[i] = napis[i];

        else if(napis[i] >= 65 && napis[i] <= 67)
            napis[i] = napis[i] + 23;

        else
            napis[i] = napis[i]-3;

        napis;
    }
    return napis;
}

int main()
{
    string wyrazenie;

        while(getline(cin, wyrazenie))
        {
          cout << szyfrCezara(wyrazenie) << endl;
        }

    return 0;
}
