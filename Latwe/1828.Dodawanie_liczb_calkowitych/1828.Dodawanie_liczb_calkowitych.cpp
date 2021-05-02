#include <iostream>

using namespace std;

int suma(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    int liczba_1, liczba_2, liczba_3;
    cin >> liczba_1;
    cin >> liczba_2;
    cin >> liczba_3;

   cout << suma(liczba_1, liczba_2, liczba_3);

    return 0;
}
