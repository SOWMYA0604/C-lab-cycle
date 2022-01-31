/*Virtual function*/
#include<iostream>
using namespace std;
class base
{
    public:
    virtual void func()
    {
        cout<<"This is base class"<<endl;
    }
};
class derived:public base
{
    public:
    void func()
    {
        cout<<"This is derived class"<<endl;
    }
};
int main()
{
    base *b,*bp;
    derived d;
    b=new base;
    b->func(); //co
    bp=&d;
    bp->func();
   
    
   
}


