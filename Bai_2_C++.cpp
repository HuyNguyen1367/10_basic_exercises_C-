/*
    Bài 2 :
    Tạo một lớp hình chữ nhật với các thuộc tính chiều dài, chiều rộng và
    các phương thức để tính chu vi, diện tích, đường chéo và kiểm tra xem
    nó có phải là hình vuông hay không.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

class Rectangle{
    private:
       double length;
       double width;
       double perimeter_Value;
       double area_Value;
       double diagonal_Line_Value;
       double check_Value;
    public:
       Rectangle(double length = 0, double width = 0);
       double perimeter();   
       double area();
       double diagonal_Line();
       double check();
};

Rectangle::Rectangle(double length , double width )
{
    Rectangle::length = length;
    Rectangle::width = width;
}

double Rectangle::perimeter()
{
    Rectangle::perimeter_Value = (width + length) * 2 ;
    return Rectangle::perimeter_Value;
}

double Rectangle::area()
{
    Rectangle::area_Value = (width * length);
    return Rectangle::area_Value;
}

double Rectangle::diagonal_Line()
{
    Rectangle::diagonal_Line_Value = sqrt((width * width) + (length * length));
    return Rectangle::diagonal_Line_Value;
}

double Rectangle::check()
{
    if(width == length)
    {
        printf("Day la hinh vuong");
    }
    else
       printf("Day khong phai hinh vuong");
}

int main(int argc, char const *argv[])
{
    Rectangle per(2,2);
    printf("Perimeter = %lf \n",per.perimeter());
    printf("Area = %lf \n",per.area());
    printf("Diagonal_Line = %lf \n",per.diagonal_Line());
    per.check();
    return 0;
}
