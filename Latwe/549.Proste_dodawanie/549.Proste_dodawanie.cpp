#include <iostream>

using namespace std;

int main()
{
    int t, n, m, suma=0;

    cin >> t;
    if(t<1 || t>100) return 0;

    for(int i=0; i<t; i++)
    {
        cin >> n;

        for(int j=0; j<n; j++)
        {
            cin >> m;
            suma= suma+m;
            cin.clear();
        }

        cout << suma << endl;
        suma=0;
    }

    return 0;
}
