#include <iostream>
using namespace std;

int main()
{
    int i;

    // 1. Entry control
    // a. for loop
    // for (i = 0; i < 10; i++) // o/p (0 1 2 3 4 5 6 7 8 9)
    // {
    //     cout << i << " ";
    // }

    // b. while loop
    // i = 0;
    // while (i < 10) // o/p (0 1 2 3 4 5 6 7 8 9)
    // {
    //     cout << i << " ";
    //     i++;
    // }


    // 2. Exit control
    // do while loop
    i = 0;
    do{
        cout << i << " ";
            i++;
    } while (i < 10); // o/p (0 1 2 3 4 5 6 7 8 9 )
}
