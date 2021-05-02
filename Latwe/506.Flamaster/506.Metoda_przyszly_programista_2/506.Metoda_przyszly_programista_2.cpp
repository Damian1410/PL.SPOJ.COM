#include <iostream>
#include <string>


using namespace std;

// ID 506
// https://pl.spoj.com/problems/FLAMASTE/

// To jest wersja programu która zrobilem jakiœ czas temu,
// mia³em w niej mo¿liwoœæ ³atwej modyfikacji kodu dodaj¹c zmienna l_znakow

string reduce(string str_long, int l_znakow)
{

    string str_short;
    str_short.insert(0, str_long);

    char znak;
    int n_char=0;

do
{
    znak = str_short[n_char];
    if(str_short[n_char] == 0 ) break;

    n_char+=1;

    int n_powt=1;

    while(znak == str_short[n_char])
    {
        n_powt+=1;
        n_char+=1;
    }

    if(n_powt>=l_znakow)
    {
        n_char=n_char-n_powt+1;
        str_short.erase(n_char, n_powt-1);
        str_short.insert(n_char, to_string(n_powt));

        if(n_powt<10) n_char+=1;

        else n_char+=2;
    }

}
while(true);


    return str_short;
}

int main()
{
   int l_testow, iloscZnakowDoZastapienia;

string napis;

    cin >> l_testow;
    cin >> iloscZnakowDoZastapienia;


        for(int i=1; i<=l_testow; i++)
        {
            cin >> napis;
            cout<< reduce(napis, iloscZnakowDoZastapienia)<<endl;
        }

    return 0;
}
