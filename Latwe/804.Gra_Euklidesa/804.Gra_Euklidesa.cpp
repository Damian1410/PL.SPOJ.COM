#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    int a, b;

    cin >> t;

    for(int i = 0; i<t; i++)
    {
        cin >> a >> b;

        while(a != 0 || b != 0)
        {
            if (a > b)
            {
                a = a-b;
            }

            else if (a < b)
            {
                b = b-a;
            }

            else if (a == b)
            {
                break;
            }

        }

        cout << a + b << endl;

    }


    return 0;
}
