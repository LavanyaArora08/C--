/*Lavanya Arora
  Batch B8
  SAP ID: 500101681*/
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,0,2,9,3,8,4,7,5,6};

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is ";
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<", ";
    }
    int s,b=0,e=8;
    cout<<"\nEnter value to search ";
    cin>>s;
    while(e>b)
    {
        int mid=(s+e)/2;
        if(a[mid]==s)
        {
            cout<<"Found the number "<<s<<" at position "<<(mid+1);
            break;
        }
        else if(s<a[mid])
        {
            e=mid-1;
            continue;
        }
        else
        {
            b=mid+1;
            continue;
        }
    }
}