#include <iostream>

using namespace std;

void last_pow(int p, int w)
{
    int wynik;
    int t, pod;
    pod = p%10;
    if (w > 0)
    {
        if(w%4 == 0) t=4;

        else t=w%4;

        wynik=pod;

        for(int j = 1; j<t; j++)
        {
            wynik*=p;
        }
    }

    cout << wynik%10 << endl;
}


int main()
{
    int D, p, w;
    cin >> D;

    if (D < 1 || D>10) return 0;

    for(int i=0; i<D; i++)
    {
        cin >> p >> w;
        //last_pow(m, l);


        int wynik;

        p = p%10;
        if (w > 0)
        {
            if(w%4 == 0) w=4;

            else w=w%4;

            wynik=p;

        for(int j = 1; j<w; j++)
        {
            wynik*=p;
        }
    }

    cout << wynik%10 << endl;
    }

    return 0;
}
