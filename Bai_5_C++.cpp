/*Tạo một lớp người với các thuộc tính tên, tuổi và địa chỉ, và các
phương thức để in thông tin của người đó và tính tuổi của người đó.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>

//using namespace std;

class Person {
    private:
        char name[100];
        int age;
        char address[30];
    public:
        Person(const char* name , int age , const char* address) ; 
        char* get_Name() { return Person::name ; }
        int get_Age() { return Person::age ; }
        char* get_Address() { return Person::address ; }
};

Person::Person(const char* name , int age , const char* address)
{
    strcpy(Person::name , name);
    Person::age = age;
    strcpy(Person::address , address);
}



int main() {
    Person person("John Smith" , 18 , "Ha Noi");
    printf("%s %d tuoi song o %s" , person.get_Name() , person.get_Age() , person.get_Address());
    return 0;
}
