#include <iostream>

using namespace std;

//  https://matematykaszkolna.pl/forum/366799.html
//  https://www.p-programowanie.pl/cpp/tablice-dynamiczne

int *move_elements_in_array(int sizeArray, int amountShift, int array_org[])
{
	int j = 0;
    int *shiftArray = new int [sizeArray];

    for(int i = 0; i<sizeArray; i++)
    {
        if((i + amountShift) <= sizeArray-1)
        {
        	shiftArray[i] = array_org[amountShift+i];
        	j++;
        }
        else shiftArray[i] = array_org[i-j];
    }

    return shiftArray;
}

int main()
{
    int n, k;

    cin >> n;
    cin >> k;

    int *tab =  new int [n];
    for(int i=0; i<n; i++)
    {
        cin >> tab[i];
    }

    int *shiftTab = move_elements_in_array(n, k, tab);

        for(int i=0; i<n; i++)
    {
        cout << *(shiftTab+i) << " ";
    }

    delete [] tab;
    delete [] shiftTab;
    return 0;
}
