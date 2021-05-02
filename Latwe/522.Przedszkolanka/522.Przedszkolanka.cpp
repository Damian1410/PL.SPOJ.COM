#include <iostream>

using namespace std;

int main()
{
    int N, a, b, ab_max, ab_min, l_sweets;

    cin >>N;
    if(N<1 || N>20) return 0;

    for (int i=0; i<N; i++)
    {
        cin >> a >> b;
        if(a<10 || b>30) return 0;
        if(b<10 || b>30) return 0;

        ab_max = a; ab_min = b;
        if(a<b) {ab_max = b; ab_min = a;}

        int j=1;
        do
        {
           l_sweets = ab_max*j;
           j++;
        }
        while(l_sweets% ab_min !=0);
        cout << l_sweets <<endl;
    }

    return 0;
}
