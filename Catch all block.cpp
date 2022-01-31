/* Handling divide by zero using catch all blcok*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a, b values"<<endl;
    cin>>a>>b;
    try
    {
        if (b==0)
        {
            throw b;
        }
        else if (b<0)
        {
            throw "b is negative";
        }
        else
            cout<<"Value of a/b is "<<(a/b)<<endl;
    }
    catch(int b)
    {
        cout<<"b cannot be zero";
    }
    catch(...)
    {
        cout<<"Enter valid value of b"<<endl;
    }
    return 0;
}
