#include<iostream>
using namespace std;
class flowers
{
    public:
        void flower()
        {
            cout<<"Some flowers have red petals"<<endl;
            
        }
};
class thorns
{
    public:
        void thorn()
        {
            cout<<"Some flower plants have thorns"<<endl;
        }
};
class rose:public flowers,public thorns
{
};
int main()
{
    rose r;
    r.flower();
    r.thorn();
    return 0;
}