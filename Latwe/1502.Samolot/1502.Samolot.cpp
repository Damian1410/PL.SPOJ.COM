#include <iostream>

using namespace std;

int suma(int a, int b, int c, int d)
{
    return a*b + c*d;
}

int main()
{
    int n1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;

   cout << suma(n1, k1, n2, k2);

    return 0;
}
