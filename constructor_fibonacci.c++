#include<iostream>
using namespace std;
class fibonacci
{
    private:
    int x;
    public:
    fibonacci()
    {
        x=10;
    }
    void calc()
    {
        int a=0,b=1;
        int c=0;
        cout<<a<<", "<<b<<", ";
        while(c<x)
        {
            c=a+b;
            cout<<c<<", ";
            a=b;
            b=c;
        }
    }
};
int main()
{
    fibonacci obj;
    obj.calc();
}