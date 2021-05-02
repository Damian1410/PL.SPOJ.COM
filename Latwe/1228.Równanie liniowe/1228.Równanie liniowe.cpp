#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

double linear_equation(double a, double b, double c)
{
        return round((c - b)/a *100) / 100;

}

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    if(A == 0 && B == C) cout << "NWR" << endl;

    else if(A == 0) cout << "BR" << endl;

    else
    {
    	cout.precision(2);
    	cout << fixed;
    	cout  << linear_equation(A, B, C);
    }


    return 0;
}
