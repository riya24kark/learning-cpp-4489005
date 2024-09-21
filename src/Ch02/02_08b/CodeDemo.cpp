// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
// #define AGE_LENGTH 4 //using macro
// //macros have no scope 
int main(){
const size_t AGE_LENGTH = 4; //use size_t instead of int
int age[AGE_LENGTH];
    float temp[] = {31,23,34,54,2.1}; //array size not specified when array is being intialized 

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 20;

    std::cout << "Age 1 is " << age[0] << std::endl;
    std::cout << "Age 2 is " << age[1] << std::endl;
    std::cout << "Age 3 is " << age[2] << std::endl;  
    std::cout << "Age 4 is " << age[3] << "\n"<< std::endl;

    std::cout << "Temp 1 is " << temp[0] << std::endl;
    std::cout << "Temp 2 is " << temp[1] << std::endl;
    std::cout << "Temp 3 is " << temp[2] << std::endl;  
    std::cout << "Temp 4 is " << temp[3] << std::endl;

    return (0);
}
