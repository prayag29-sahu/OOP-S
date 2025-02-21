#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    char string[100];
    cout << "enter a string : ";
    cin >> string;
    int len = strlen(string);
    fstream file;
    file.open("tect", ios::in | ios::out);
    for (int i = 0; i < len; i++)
    {
        file.put(string[i]);
    }
    file.seekg(0);
    char ch;
    while (file)
    {
        file.get(ch);
        cout << ch;
    }
    return 0;
}
