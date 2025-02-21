#include<iostream>
using namespace std;

class base1
{
    public:
    base1()
    {
        cout << "const base1" << endl;
    }
    ~base1()
    {
        cout << "deconst base1" << endl;
    }
};
class base2
{
public:
    base2()
    {
        cout << "const base2" << endl;
    }
    ~base2()
    {
        cout << "deconst base2" << endl;
    }
};
class d:public base1, public base2
{
public:
    d()
    {
        cout << "const d" << endl;
    }
    ~d()
    {
        cout << "deconst d" << endl;
    }
};
int main()
{
    d d1;
    return 0;
}
/* o/p
const base1
const base2
const d
deconst d
deconst base2
deconst base1
*/