//calculate factorial using constructor
#include<iostream>
using namespace std;
class factorial
{
    private:
    int a;
    public:
    factorial(int n)
    {
        a=n;
    }
    void calc()
    {
        int f=1;
        for(int i=1;i<=a;i++)
        {
            f=f*i;
        }
        cout<<"Factorial= "<<f;
    }
};
int main()
{
    int x;
    cout<<"Enter the number";
    cin>>x;
    factorial obj(x);
    obj.calc();
}