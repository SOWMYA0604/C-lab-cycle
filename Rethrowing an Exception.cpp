/*Rethrowing an exception*/
#include<iostream>
using namespace std;
void handler()
{
    try
    {
        throw "hello";
        
    }
    catch(const char* msg)
    {
        cout<<"Caught "<<msg<<" inside handler"<<endl;;
        throw;
    }
}
int main()
{
    
    try
    {
        handler();
    }
    catch(const char*msg)
    {
        cout<<"Caught "<<msg<<" outside handler"<<endl;
    }
    return 0;
}
