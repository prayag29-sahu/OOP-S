#include <iostream>
using namespace std;

// action1(if true) -> action2 else ->action3
int main()
{
    int a = 10, b = 20;

    // 1.
    // if statement
    // if(a>b)
    // {
    //     cout << "false" << endl;
    // }

    // if..else
    // if(a<b)
    // {
    //     cout << "True" << endl;
    // }
    // else
    //     cout << "false" << endl;

    // if...else..if
    // if (a < b)
    // {
    //     cout << "True" << endl;
    // }
    // else
    // {
    //     cout << "false" << endl;
    // }
    // cout << "equal" << endl;

    
    // 2.
    // switch case
    switch(a<b)
    {
    case 0:
        cout << "false" << endl;
        break;
    case 1:
        cout << "true" << endl;
        break;
    default:
        cout << "equal" << endl;
        break;
    }

    return 0;
}
