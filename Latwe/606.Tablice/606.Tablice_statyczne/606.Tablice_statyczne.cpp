#include <iostream>

using namespace std;

int main()
{
    int tab_in[100];
    int l_testow, iloscLiczb;

    cin >> l_testow;

    for (int j=0; j<l_testow; j++)
    {
        cin >> iloscLiczb;

        for(int i = 0; i<iloscLiczb; i++)
        {
            cin >> tab_in[i];
        }

        for(int i = iloscLiczb-1; i>=0; i--)
        {
            cout << tab_in[i] << " ";
        }
    }

    return 0;
}
