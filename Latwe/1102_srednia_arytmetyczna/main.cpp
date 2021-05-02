#include <iostream>
#include <cmath>

using namespace std;

int t=1;
int n;
float srednia(int *tablica, int k);

int main()
{
    cin>>t;
    int *tab;
    int *wyniki;
    wyniki = new int [t];
    int *wsk=wyniki;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        tab = new int [n];
        for(int i=0; i<n; i++) cin>>tab[i];

        float sr, m_1, m_2;
        sr=srednia(tab, n);
        //cout<<sr<<endl;
        float roznica;
        roznica=abs(sr-tab[0]);
        m_1=tab[0];

        for(int i=1; i<n; i++)
        {
            if(abs(sr-tab[i])<roznica)
            {
                roznica=abs(sr-tab[i]);
                m_1=tab[i];
            }

           /* else if(abs(sr-tab[i])==roznica)
            {
                roznica=abs(sr-tab[i]);
               m_2=tab[i];
            }
            */
        }

        //cout<<m_1<<endl;

            wyniki[i]=m_1;
            /*
        if(abs(sr-m_1)==abs(sr-m_2) && m_1!=m_2)    cout << m_1<<" "<<m_2<<endl;
        else cout << m_1 <<endl;
            */
        delete [] tab;
    }

    //wyœwietlenie wczytanych liczb
        for(int i=0; i<t; i++)
        {
            cout<<wyniki[i]<<endl;

        }

    delete [] wyniki;

    return 0;
}

float srednia(int *tablica, int k)
{
    float suma=0;

    for(int i=0; i<k; i++)

    {
      suma=suma+*tablica;
      tablica++;
    }

    float sred=suma/k;

 return sred;
}
