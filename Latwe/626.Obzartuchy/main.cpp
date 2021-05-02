#include <iostream>
#include <math.h>

using namespace std;

int t, n, m, doba;

float liczba_pud;

int main()
{
    doba=24*3600;
    cin>>t;


for(int i=1; i<=t; i++)
{
        cin>>n;
        cin>>m;

        int *T_obz;
        T_obz = new int[n];

        double lc;
        double sum_c=0;

        for(int i=0; i<n; i++)
        {
            cin>>T_obz[i];
            lc=doba/T_obz[i];
            sum_c=sum_c+lc;
        }

        delete [] T_obz;

        liczba_pud=ceil(sum_c/m);

        cout<<liczba_pud<<endl;
}


    return 0;
}
