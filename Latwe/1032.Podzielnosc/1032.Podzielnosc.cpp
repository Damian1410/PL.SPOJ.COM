#include <iostream>

using namespace std;

void czy_podzielna(int n, int x, int y)
{
    for(int j=1; j<n; j++)
       {
           if((j%x==0) && (j%y!=0))
           {
               cout << j << " ";
           }
       }
       cout << endl;
}

int main()
{
   int t, n, x, y;

   cin >> t;

   for(int i=0; i<t; i++)
   {
       cin >> n >> x >> y;
       czy_podzielna(n, x, y);
   }

    return 0;
}
