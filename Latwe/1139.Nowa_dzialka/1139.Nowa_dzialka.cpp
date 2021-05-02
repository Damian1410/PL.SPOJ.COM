#include <iostream>

using namespace std;

int pole(int a)
{
    return a*a;
}

int main()
{
    int t, kroki;
    cin >> t;
        for(int i=0; i<t; i++)
        {
          cin >> kroki;
          cout << pole(kroki) << endl;
        }
    return 0;
}
