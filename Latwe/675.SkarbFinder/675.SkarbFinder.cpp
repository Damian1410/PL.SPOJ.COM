#include <iostream>
#include <math.h>

using namespace std;

void position(int direct, int quantitySteps, int & posX, int & posY)
{
    switch (direct)
            {
            case 0:
                posX+=quantitySteps;
                break;
            case 1:
                posX-=quantitySteps;
                break;
            case 2:
                posY-=quantitySteps;
                break;
            case 3:
               posY+=quantitySteps;
                break;
            }

}

void move_to_treasure(int posX, int posY)
{
     if(posX==0 && posY==0)
        {
            cout << "studnia" <<endl;
        }

        else
        {
            if(posX!=0)
            {
                if(posX>0)
                    cout << 0 << " " << posX << endl;

                if(posX<0)
                    cout << 1 << " " << abs(posX) << endl;
            }

            if(posY!=0)
            {
                if(posY>0)
                    cout << 3 << " " << posY << endl;

                if(posY<0)
                    cout << 2 << " " << abs(posY) << endl;
            }

        }
    }


int main()
{
    int quantityOfDataset, numberOfTips;
    cin >> quantityOfDataset;

    for(int i=0; i<quantityOfDataset; i++)
    {
        int X=0, Y=0;
        int direction, value;
        cin >> numberOfTips;

        for(int j=0; j<numberOfTips; j++)
        {
            cin >> direction >> value;

            position(direction, value, X, Y);
        }
        // cout << X << " " << Y << endl;

        move_to_treasure(X, Y);
    }

    return 0;
}
