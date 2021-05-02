#include <iostream>
#include <math.h>

using namespace std;

bool if_prime_num(int k)
{
    if (k<2) return false;


    for (int i=2; i<=sqrt(k); i++) if(k % i == 0)  return false;

 return true;
}

int main()
{
    int n, d;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> d;
        if (if_prime_num(d)) cout << "TAK" <<endl;

        else cout << "NIE" <<endl;

    }
    return 0;
}
