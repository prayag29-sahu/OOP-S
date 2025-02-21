#include <iostream>
using namespace std;

class counter
{
private:
   unsigned int count;

public:
    counter() : count(0){}

    void coountInc() { count++; }
    int getcount() { return count; }
};
int main()
{
    counter c1, c2;
    cout << c1.getcount()<<" ";
    cout << c2.getcount()<<" ";
    c1.coountInc();
    c2.coountInc();
    c2.coountInc();
    cout << c1.getcount()<<" ";
    cout << c2.getcount();
    return 0;
}
// o/p (0 0 1 2)