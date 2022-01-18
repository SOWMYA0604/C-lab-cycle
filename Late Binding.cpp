/*Early binding*/
#include<iostream>
using namespace std;
class Base
{
    public:
       virtual void show();
        int x=10;
};
void Base::show()
{
    cout<<"Late binding is in base"<<endl;
    cout<<"Value of x is "<<x<<endl;
}
class derived:public Base 
{
    public:
        void show();
        int y=20;
};
void derived::show()
{
    cout<<"Late binding is in derived"<<endl;
    cout<<"Value of y is "<<y<<endl;
}
int main()
{
    Base *b;
    b=new derived;
    b->show();
    
}
