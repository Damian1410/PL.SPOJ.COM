#include <iostream>

using namespace std;

int collatz(int X0, int itterations_number = 0)
{
    if(X0 == 1) return itterations_number;

    else
    {
        itterations_number++;
        if(X0 % 2 == 0)
            return collatz(X0/2, itterations_number);

        else return collatz(3*X0+1, itterations_number);
    }
}

int main()
{
    int testsNumber, number;
    cin >> testsNumber;

    for(int i=0; i<testsNumber; i++)
    {       cin >> number;
            cout << collatz(number) << endl;
    }
    return 0;
}
