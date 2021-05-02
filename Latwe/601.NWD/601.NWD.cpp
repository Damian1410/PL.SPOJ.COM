#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    //algorytm Euklidesa
    int a_a, b_b, r ;
    a_a=a;
    b_b=b;


    do
    {
        r=a_a%b_b;
        if(r==0) return b_b;
        a_a=b_b;
        b_b=r;
    }
    while(true);

}

int main()
{
    int a, b, t;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >>a >>b;
        if(a<0) return 0;
        if(b>1000000) return 0;

        cout << nwd(a, b) << endl;
    }

    return 0;
}
