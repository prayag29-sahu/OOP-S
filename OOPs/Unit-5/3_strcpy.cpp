#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[] = "MyName";
    char arr2[10];
    cout << arr << endl;
    cout << strcpy(arr2, arr);
}
// o/p
/*
MyName
MyName
*/