/*Catching class type exceptions*/
#include<iostream>
#include<cstring>
using namespace std;
class myexception
{
    public:
        char str_what[80];
        int what;
        myexception()
        {
            *str_what=0;
            what=0;
        }
        myexception(char*s,int e)
        {
            strcpy(str_what,s);
            what=e;
        }
};
int main()
{
    int i;
    try
    {
        cout<<"Enter a positive number"<<endl;
        cin>>i;
        if (i<0)
        {
            throw myexception("Not positive",i);
        }
    }
        catch (myexception e)
        {
            cout<<e.str_what<<":";
            cout<<e.what<<endl;
        }
    
    return 0;
}
