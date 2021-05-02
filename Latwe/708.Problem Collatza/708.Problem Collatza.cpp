#include <iostream>

using namespace std;

int collatz(int X0)
{
    int n = 0;
        while(X0 != 1)
        {
            if(X0 % 2 == 0)
            {
                X0 = X0 / 2;
            }

            else
            {
                X0 = 3 * X0 +1;
            }
            n += 1;
        }
        return n;

}

int main()
{
    int numberOfTests, number, n;
    cin >> numberOfTests;

    for(int i = 0; i < numberOfTests; i++)
    {
        cin >> number;
        cout << collatz(number) << endl;
    }


    return 0;
}
