#include <iostream>
#include <string>

using namespace std;

/*
1. Pobranie wyrazu
2. Sprawdzenie czy drugi wyraz jest cyfra 2-9
3. Jesli tak to wstaw znaki x cyfra, i++;
4. Jesli nie to wstaw znak

Nie wiem czy dokladnie o to chodzilo, zalozylem ze ilosc powtorzen znakow to max 9

*/

string compress(string shortString)
{
    string longString;
    char character;
    int quantityChar;

    for(int i=0; i<shortString.length(); i+=1)
    {
        character = shortString[i];
        quantityChar = shortString[i+1]-48;


        if (quantityChar >=2 && quantityChar <=9)
        {
            longString.append(quantityChar, character);
            i++;
        }
        else
        {
            longString.append(1, character);
            // i--;
        }
    }
    return longString;
}

int main()
{
    int l_testow=1;

    string napis;
    cin >> l_testow;

    for(int i=1; i<=l_testow; i++)
    {
        cin >> napis;
        cout<< compress(napis)<<endl;
    }

    return 0;
}
