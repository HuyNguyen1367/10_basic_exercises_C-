/*
* File: Bai_3_C++.cpp
* Author: Huy Nguyen
* Date: 01/04/2023
* Description: This is file for circle
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

class Circle{
    private:
       double radius;
       double pi = 3.14;
       double perimeter_Value;
       double acreare_Value;
    public:
       Circle(double radius);
       double perimeter();
       double acreare();
};

Circle::Circle(double radius)
{
    Circle::radius = radius;
}

double Circle::perimeter()
{
    Circle::perimeter_Value = ((radius * 2) * pi) ;
    return Circle::perimeter_Value;
}

double Circle::acreare()
{
    Circle::acreare_Value = ((radius*radius) * pi) ;
    return Circle::acreare_Value;
}

int main(int argc, char const *argv[])
{
    Circle ex(4);
    printf("Perimeter = %lf\n" ,ex.perimeter());
    printf("Acreare = %lf\n", ex.acreare());
    return 0;
}
