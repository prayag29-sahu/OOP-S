#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int max(int a, int b, int c)
{
    return max(max(a, b), c);
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << max(x, y, z);
}