#include<iostream>
using namespace std;
class myclass
{
    int a,b;
    public:
        friend int sum(myclass x);
        void set(int i,int j);
};
void myclass::set(int i,int j)
{
    a=i;
    b=j;
}
int sum(myclass x)
{
    cout<<"HI"<<endl;
    return x.a+x.b;
}
int main()
{
    myclass m;
    m.set(3,4);
    cout<<sum(m);
}
