/*
    Bài 4 : 
    Tạo một lớp động vật với các thuộc tính tên, tuổi và trọng lượng, và các
    phương thức để tính chỉ số BMI, so sánh tuổi và trọng lượng của các
    động vật khác nhau
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

class Animal{
    private:
       char name[20]; 
       int age;
       int weight;
       int height;
       double bmi_Value;
    public:
       Animal(char name[] = "\0" , int age = 0 , int weight = 0 , int height = 0 );
       char *get_Name() {return Animal::name;}
       int get_Age() {return Animal::age ; }
       int get_Weight() {return Animal::weight ;}
       double bmi();
};

Animal::Animal(char name[] , int age , int weight , int height )
{
    strcpy(Animal::name , name);
    Animal::age = age;
    Animal::weight = weight;
    Animal::height = height;
}

double Animal::bmi()
{
    Animal::bmi_Value = weight/ (pow(height,2));
    return Animal::bmi_Value;
}

int compare_Age(Animal a1 , Animal a2)
{
    if(a1.get_Age() == a2.get_Age())printf("Tuoi %s bang tuoi %s \n",a1.get_Name() , a2.get_Name() );
    else if(a1.get_Age() > a2.get_Age()) printf("Tuoi %s lon hon tuoi %s \n" , a1.get_Name() , a2.get_Name() );
    else printf("Tuoi %s be hon tuoi %s \n", a1.get_Name() , a2.get_Name() );
}

int compare_Weight(Animal a1 , Animal a2)
{
    if(a1.get_Weight() == a2.get_Weight())printf("%s nang bang %s",a1.get_Name() , a2.get_Name() );
    else if(a1.get_Weight() > a2.get_Weight()) printf("%s nang hon %s" , a1.get_Name() , a2.get_Name() );
    else printf("%s nhe hon %s", a1.get_Name() , a2.get_Name() );
}

int main(int argc, char const *argv[])
{
    Animal a1("Cat" , 5 , 10 , 50);
    Animal a2("Dog" , 6 , 9 , 70);
    printf("%s %d tuoi co chi so BMI la : %lf \n" , a1.get_Name() , a1.get_Age() , a1.bmi());
    printf("%s %d tuoi co chi so BMI la : %lf \n" , a2.get_Name() , a2.get_Age() , a2.bmi());
    compare_Age(a1,a2);
    compare_Weight(a1,a2);
    return 0;
}

