
#include <iostream>

using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    void setWidth(double w)
    {
        if (w > 0)
        {
            width = w;
        }
        else
        {
            cout << "Width muse be positivie" << endl;
        }
    }

    double getWidth()
    {
        return width;
    }

    void setHeight(double h)
    {
        if (h > 0)
        {
            height = h;
        }
        else
        {
            cout << "Hiehgt must be positive" << endl;
        }
    }

    double getHeight()
    {
        return height;
    }

    double getArea()
    {
        return width * height;
    }
};