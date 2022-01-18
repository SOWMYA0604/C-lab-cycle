/*Pure virtual function*/
#include <iostream>  
using namespace std;  
class Shape  
{  
    public:  
    virtual float calculateArea() = 0;  
};  
class Square : public Shape  
{  
    float a;  
    public:  
    Square(float l)  
    {  
        a = l;  
    }  
    float calculateArea()  
    {  
        return a*a;  
    }  
};  
class Rectangle : public Shape  
{  
    float l;  
    float b;  
    public:  
    Rectangle(float x, float y)  
    {  
       l=x;  
       b=y;  
    }  
    float calculateArea()  
    {  
        return l*b;  
    }  
};  
int main()  
{  
      
    Shape *shape;  
    Square s(3.4);  
    Rectangle r(5,6);  
    shape =&s;  
    int a1 =shape->calculateArea();  
    shape = &r;  
    int a2 = shape->calculateArea();  
    std::cout << "Area of the square is " <<a1<< std::endl;  
    std::cout << "Area of the rectangle is " <<a2<< std::endl;  
    return 0;  
}  