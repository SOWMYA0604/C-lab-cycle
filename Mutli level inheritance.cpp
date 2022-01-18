/*Multilevel inheritance*/
#include<iostream>
using namespace std;
class A 
{
    public:
        int x;
        void get_data();
};
void A::get_data()
{
    cout<<"Enter x"<<endl;
    cin>>x;
}
class derived1:public A 
{
    public:
        int y;
        void get_info();
};
void derived1::get_info()
{
    cout<<"Enter y"<<endl;
    cin>>y;
}
class derived2:public derived1
{
    public:
        int z;
        void get_value();
        void sum();
};
void derived2::get_value()
{
    cout<<"Enter z"<<endl;
    cin>>z;
}
void derived2::sum()
{
    cout<<"sum of x,y,z is"<<x+y+z<<endl;
}
int main()
{
    derived2 d;
    d.get_data();
    d.get_info();
    d.get_value();
    d.sum();
}