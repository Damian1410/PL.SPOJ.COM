#include <iostream>

using namespace std;

long long factorial( int k)
{
    long long fact=1;

    if (k== 0 || k==1) return fact;

    else
    {

        for(int i=2; i<=k; i++)
        {
            fact=fact*i;
        }
    }

    return fact;
}

void decim (int l)
{
        //cout << l << endl;
        if(l<10) cout << (factorial(l)/10)%10 << " " << factorial(l)%10 <<endl;

        else cout << 0 << " " << 0 <<endl;
}


int main()
{
    long long n, m;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> m;
        decim(m);
    }
    return 0;
}
