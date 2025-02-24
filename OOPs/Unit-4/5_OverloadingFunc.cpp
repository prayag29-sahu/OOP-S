#include<iostream>
using namespace std;

int area(int a, int b)
{
    return a * b;
}
int area(int a)
{
    return a * a;
}
float area(float c)
{
    return 3.14 * c * c;
}
float area(int b, float c)
{
    return 0.5 * b * c;
}
int main()
{
    int x,y;
    float z;
    cin >> x >> y >> z;
  cout<<  area(x, y)<<" "<< area(x)<<" "<< area(z)<<" "<<
    area(y,z);

}
/* o/p
2
3
4
6 4 50.24 6
*/
