#include<iostream>
#include<cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int rows;
    int columns;

    cin >>rows>>columns;

    int **tablica = new int *[columns];

    for(int i=0; i<columns; i++)
    {
            tablica[i] = new int [rows];

    }

    for(int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cin >> tablica[j][i];
            //tablica[i][j] = j+i;

        }
    }

    for(int i=0; i<columns; i++)
    {
        for (int j=0; j<rows; j++)
        {
            cout << tablica[i][j] << " ";

        }
        cout << endl;
    }

    for(int i=0; i<columns; i++)
    {
            delete [] tablica[i];
    }
    delete [] tablica;

    return 0;
}
