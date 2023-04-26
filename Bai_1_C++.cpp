#include<stdint.h>
#include<stdio.h>
#include<string>

class Poin
{
    private:
       uint8_t toaDoX;
       uint8_t toaDoY;
    public:
       Poin(int8_t toaDoX , int8_t toaDoY);   
};

Poin::Poin(int8_t toaDoX , int8_t toaDoY)
{
    Poin::toaDoX = toaDoX;
    Poin::toaDoY = toaDoY;
}

int main(int argc, char const *argv[])
{
   
    return 0;
}
