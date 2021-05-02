#include <iostream>
#include <vector>


using namespace std;

int main()
{

    vector < int > numbers;
    int n;

    while(cin >> n)
       {
           numbers.push_back(n);
       }

    for(int j=numbers.size()-1; j>=0; j--)
    {
            cout << numbers[j] << " ";
    }

    return 0;
}
