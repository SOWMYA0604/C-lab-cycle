#include<iostream>
using namespace std;
class building
{
    public:
        int rooms,n;
        void get_rooms();
};
void building::get_rooms()
{
    cout<<"Enter no of rooms"<<endl;
    cin>>n;
    rooms=n;
}
class school:public building
{
    public:
        int floors,f;
        void get_floors();
};
void school::get_floors()
{
    cout<<"Enter no of floors"<<endl;
    cin>>f;
    floors=f;
}
int main()
{
    school s;
    s.get_rooms();
    s.get_floors();
    cout<<"XYZ school has"<<s.rooms<<"rooms and"<<s.floors<<"floors"<<endl;
    
}