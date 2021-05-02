#include <iostream>

using namespace std;

string if_collinear(int tab[3][3])
{
    if((tab[1][0] - tab[0][0])*(tab[2][2] - tab[0][1]) - (tab[1][1] - tab[0][1])*(tab[2][0] - tab[0][0]) == 0) return "TAK";

    else return "NIE";
}

int main()
{
    int testNumber, tab[3][3];
    cin >> testNumber;

    for(int i=0; i<testNumber; i++)
    {
        cin >> tab[0][0] >> tab[0][1] >> tab[1][0] >> tab[1][1] >> tab[2][0] >> tab[2][2];

        cout << if_collinear(tab) << endl;
    }


    return 0;
}
