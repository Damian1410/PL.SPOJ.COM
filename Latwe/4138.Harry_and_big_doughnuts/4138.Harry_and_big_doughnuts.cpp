#include <iostream>

using namespace std;

int main()
{
    int t, c, k, w;
    cin >> t;

    for(int j=0; j<t; j++)
    {
        cin >> c >> k >> w;

        if(k >= c*w) cout << "yes" << endl;
        else cout << "no" << endl;

    }

    return 0;
}
