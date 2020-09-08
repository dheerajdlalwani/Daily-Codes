#include <iostream>
using namespace std;
// This is the Base class
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};
// This is the Derived class
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};
int main(void)
{
    Rectangle Rect;
    int w, h;
    cout << "Enter the value of width and height in cm : ";
    cin >> w >> h;
    Rect.setWidth(w);
    Rect.setHeight(h);
    // Print the area of the object.
    cout << "Total area : " << Rect.getArea() << "sqcm" << endl;
    return 0;
}