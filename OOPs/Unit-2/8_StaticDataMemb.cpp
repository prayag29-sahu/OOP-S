#include<iostream>
using namespace std;
class item
{
    static int count;
    int number;
    public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << "count :" << count<<endl;
        
    }
};
int item::count;
int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}
// o/p 
/*
count :0
count :0
count :0
count :3
count :3
count :3
*/