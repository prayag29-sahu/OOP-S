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
    int get()
    {
        return i;
    }
};
int main()
{
    num n;
    n.set(10);
    cout << n.get();
    return 0;
}
