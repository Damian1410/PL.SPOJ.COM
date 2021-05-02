#include <iostream>

using namespace std;

int main()
{
    char operation;
    int numRecord;
    int value;
    int recordArray[10];
    int result, firstArgument, secondArgument;

    while(cin >> operation)
    {
        if(operation != 'z')
            cin >> firstArgument >> secondArgument;

        switch(operation)
        {
        case '+':
                        result = recordArray[firstArgument] + recordArray[secondArgument];
            break;

        case '-':
            result = recordArray[firstArgument] - recordArray[secondArgument];
            break;

        case '*':
            result = recordArray[firstArgument] * recordArray[secondArgument];
            break;

        case '/':
            result = recordArray[firstArgument] / recordArray[secondArgument];
            break;

        case '%':
            result = recordArray[firstArgument] % recordArray[secondArgument];
            break;

        case 'z':
            cin >> numRecord;
            cin >> value;
            recordArray[numRecord] = value;
            break;
        }

        if(operation != 'z') cout << result << endl;
        cin.clear();
    }

    return 0;
}
