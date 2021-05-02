#include <iostream>

using namespace std;



int main()
{
    int number = 0;
    int sum = 0;

    while(cin>>number)
    {
        sum += number;
        cout << sum << endl;
    }

    return 0;
}
