#include <iostream>
using namespace std;
// Base class Shape
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
// Base class Paint Cost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};
// Derived class
class Rectangle : public Shape, public PaintCost
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
    int area, w, h;
    cout << "Enter the width and height in feet : ";
    cin >> w >> h;
    Rect.setWidth(5);
    Rect.setHeight(7);
    area = Rect.getArea();

    // Print the area of the object.
    cout << "Total area : " << Rect.getArea() << "sqfeet" << endl;
    // Print the total cost of painting
    cout << "Total paint cost : Rs " << Rect.getCost(area) << endl;
    return 0;
}