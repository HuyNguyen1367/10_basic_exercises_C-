/*
    Bài 1 : 
    Tạo một lớp điểm trong hệ tọa độ 2D và viết các phương thức để tính
    khoảng cách giữa hai điểm, tính diện tích của tam giác được tạo bởi ba
    điểm
*/

#include<stdint.h>
#include<stdio.h>
#include<string>
#include <iostream>
#include <math.h>

using namespace std;

class Point 
{
    private:
       int point_X;
       int point_Y;
    public:
       Point(int point_X = 0, int point_Y = 0);
       int get_Point_X();
       int get_poin_Y();  
};

int Point::get_Point_X()
{
    return Point::point_X;
}

int Point::get_poin_Y()
{
    return Point::point_Y;
}

Point::Point(int point_X , int point_Y)
{
    Point::point_X = point_X;   
    Point::point_Y = point_Y;
}

class Math_Point
{
    private:
       Point point_A;
       Point point_B;
       Point point_C;
       double Distance_TwoPoint = 0;           
       double Area_Triangle = 0;
    public:
       Math_Point(Point point_A , Point point_B  );
       Math_Point(Point point_A , Point point_B , Point point_C );
       double Calculation_distance();                                              
       double Calculation_area(); 
    
};

Math_Point::Math_Point(Point point_A , Point point_B  )
{
    Math_Point::point_A = point_A;
    Math_Point::point_B = point_B;
}

Math_Point::Math_Point(Point point_A , Point point_B , Point point_C )
{
    Math_Point::point_A = point_A;
    Math_Point::point_B = point_B;
    Math_Point::point_C = point_C;
}

double Math_Point::Calculation_distance()
{
    Math_Point::Distance_TwoPoint = sqrt( pow((point_A.get_Point_X() - point_B.get_Point_X()) , 2 ) + pow((point_A.get_poin_Y() - point_B.get_poin_Y()) , 2 ) );
    return Math_Point::Distance_TwoPoint;
}

int main(int argc, char const *argv[])
{
    Point first(1,2);
    Point second(3,4);

    Math_Point distance_point(first,second);
    printf("%lf",distance_point.Calculation_distance());
    
    return 0;
}

