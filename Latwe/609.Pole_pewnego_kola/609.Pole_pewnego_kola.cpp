#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
    double r, d, r_s , pi, S;
    pi=3.141592654;


    cin >>r >>d ;
    r_s= sqrt(r*r - 0.25*d*d);


    S = pi * pow(r_s,2);
    cout << fixed;
    cout << setprecision(2) << S << endl;


    return 0;
}
