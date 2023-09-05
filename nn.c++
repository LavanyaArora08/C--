#include<iostream>

using namespace std;

class A{

   public:

   virtual void a1(){cout<<"world";}

};

class B:public A{

   public:

   void a1(){cout<<"hello";}

};

int main(){

  A *ptr, a1;

  B b1;

ptr->a1();

ptr = &b1;

 ptr = &a1;

  ptr->a1();

}