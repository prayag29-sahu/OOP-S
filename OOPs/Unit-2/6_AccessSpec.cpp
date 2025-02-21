#include <iostream>
using namespace std;

class complex
{
    private:
    int x, y;
public:
    int a, b;


};

int main()
{
    complex c1;

    // c1.x = 10; // Error x is private

    c1.a=10;
    cout << c1.a; // o/p (10)

    return 0;
}
