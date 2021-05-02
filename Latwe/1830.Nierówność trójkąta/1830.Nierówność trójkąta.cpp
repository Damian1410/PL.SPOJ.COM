#include <iostream>

using namespace std;


int triangle(double a, double b, double c)
{
    if(a<b+c && b<a+c && c<b+a && c>b-a && a>c-b && b>c-a) return 1;

    else return 0;

}

int main()
{
    double a, b, c;

    while (cin >> a >> b >> c)
    {
       cout << triangle(a, b, c) << endl;
    }
    return 0;
}
