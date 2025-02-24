#include<iostream>
using namespace std;

class sample
{
    int p, q;
    public:
    void setval()
    {
        p = 10;
        q = 20;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.p + s.q) / 2.0;
}
int main()
{
    sample r;
    r.setval();
    cout << mean(r);
}