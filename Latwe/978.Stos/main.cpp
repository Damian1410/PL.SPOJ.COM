#include <iostream>
#include <cstdlib>

using namespace std;

int rozmiar;
int tablica[11];

void push()
{
    if(rozmiar>=10) cout<<":("<<endl;

    else
    {
        rozmiar=rozmiar+1;
        cin>>tablica[rozmiar];
        cout<<":)"<<endl;
    }
}

void pop()
{
    if(rozmiar>=1)
    {
        cout<<tablica[rozmiar]<<endl;
        rozmiar=rozmiar-1;
    }
    else cout<<":("<<endl;
}

int main()
{
   char wybor;
    rozmiar=0;

    do
    {
        cin>>wybor;

        switch(wybor)
        {
        case '+':
            push();
            break;

        case '-':
            pop();
            break;
        }
    }

    while (cin.eof() == false);

    return 0;
}
