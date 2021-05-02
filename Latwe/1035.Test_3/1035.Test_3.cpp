#include <iostream>
#include <vector>


using namespace std;

int main()
{

    vector < int > numbers;
    int n;
    int k=0;

    while(cin >> n)
       {
           numbers.push_back(n);
       }

    for(int j=0; j<numbers.size(); j++)
    {
        if(numbers[j] == 42 && numbers[j-1]!=42 && j>0)
        {
            k += 1;
            cout << numbers[j] << endl;

            if (k>=3) break;
        }
        else
        {
            cout << numbers[j] << endl;

        }

    }

    return 0;
}
