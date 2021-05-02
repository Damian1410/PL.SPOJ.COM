#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



double symb_Newt(double n, double k)
{
    double wynik=1;

        for (int i=1; i<=k; i++)
        {
            wynik=(wynik * (n-i+1))/i;
        }
    return round(wynik);
}

int main()
{
    double T, n, k;

    cin >> T;

    for(int i=0; i<T; i++)
    {
        cin >> n >> k;
        cout << fixed;
        cout << setprecision(0) << symb_Newt(n, k) << endl;
    }
    return 0;
}
