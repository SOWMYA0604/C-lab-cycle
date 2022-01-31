/*catching derived classes*/
#include<iostream>
using namespace std;
class B 
{
};
class D :public B
{
};
int main()
{
    D derived;
    try
    {
        throw derived;
    }
    catch(B b)
    {
        cout<<"Caught base class"<<endl;
    }
    catch(D d)
    {
        cout<<"This is derived class"<<endl;
        cout<<"This won't execute"<<endl;
    }
    return 0;
}
