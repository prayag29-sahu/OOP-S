#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[] = "name";
    char arr2[] = "name";
    cout << arr << " " << arr2 << endl;
    cout << strcmp(arr, arr2);
}
/*
    char arr[] = "name";
    char arr2[] = "Myname";
o/p
name Myname
1

and when
    char arr[] = "name";
    char arr2[] = "name";

    o/p
name name
0

*/