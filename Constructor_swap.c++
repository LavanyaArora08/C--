#include<iostream>
using namespace std;
class swapping
{
    private:
    int a,b;
    public:
    swapping(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void calc()
    {
        int temp = a;
        a=b;
        b=temp;
        cout<<"the swapped values are"<<a<<", "<<b;
    }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    swapping obj(a,b);
    obj.calc();
}