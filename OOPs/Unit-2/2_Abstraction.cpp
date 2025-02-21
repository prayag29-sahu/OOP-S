#include <iostream>
using namespace std;

class num
{
private:
    int i;

public:
    void set(int a)
    {

        i = a;
    }
    void display()
    {
        cout << i;
    }
};
int main()
{
    num n;
    n.set(10);
    n.display();
    return 0;
}
