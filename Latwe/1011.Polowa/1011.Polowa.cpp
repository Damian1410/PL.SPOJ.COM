#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string napis;

    for(int j=0; j<t; j++)
    {
        cin >> napis;

        for(int i=0; i<napis.length()/2; i++)
            {
                cout << napis[i];
            }

        cout << endl;
    }

    return 0;
}
