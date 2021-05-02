#include <iostream>

using namespace std;

int number_of_roots(double a, double b, double c)
{
        double delta = b*b - 4*a*c;

        if(delta < 0) return 0;

        else if(delta == 0) return 1;

        else if (delta > 0) return 2;
}

int main()
{
    double A, B ,C;

    while( cin >> A >> B >> C)
    {
        cout << number_of_roots(A, B, C) << endl;
    }
}
