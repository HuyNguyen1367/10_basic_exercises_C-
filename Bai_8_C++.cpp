/*
* File: Bai_8_C++.cpp
* Author: Huy Nguyen
* Date: 15/04/2023
* Description: This is file for Car
*/

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <vector>
#include <stdarg.h>
#include <string.h>

using namespace std;

/*****************************************Clas Car************************************/
class Car
{
private:
    /* data */
    char _color[50];
    char _engine[50];
    uint16_t _kilometer;
public:
    Car(const char* color, const char* engine, uint16_t kilometer);

    char* getColor();
    char* getEngine();
    uint16_t getKilometer();
    uint32_t calculateCostMaintance();
    void showInformation();
};

Car::Car(const char* color, const char* engine, uint16_t kilometer)
{
    strcpy(this->_color, color);
    strcpy(this->_engine, engine);
    this->_kilometer = kilometer;
}

char* Car::getColor(){
    return _color;
}

char* Car::getEngine(){
    return _engine;
}

uint16_t Car::getKilometer(){
    return _kilometer;
}

uint32_t Car::calculateCostMaintance(){
    if(_kilometer < 5000) return (uint32_t)1000000;
    else if(_kilometer < 15000) return (uint32_t)2000000;
    else if(_kilometer < 30000) return (uint32_t)3000000;
    else if(_kilometer < 40000) return (uint32_t)3500000;
    else if(_kilometer < 100000) return (uint32_t)4000000;
    else return (uint32_t)5000000;
}

void Car::showInformation(){
    printf("MAU XE: %s\n", _color);
    printf("DONG CO: %s\n", _engine);
    printf("SO KM: %d\n", _kilometer);
}

int main(int argc, char const *argv[])
{
    /* code */
    Car car1("XANH", "TURBO 1.0", 50000);
    car1.showInformation();
    printf("CHI PHI BAO TRI: %li\n", car1.calculateCostMaintance());
    return 0;
}