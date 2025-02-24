#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    c = (a - b) / 2;

    try{
        if(c!=0)
        {
            cout << "Result =" << c << endl;
        }
        else{
            throw(c);
        }
    }
    catch(int i)
    {
        cout << "Exception was " << c << endl;
    }
    return 0;
}