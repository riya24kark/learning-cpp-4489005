// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000//when symbol finds CAPS = will replace with 5000
#define DEBUG //helps include or exclude definition lines
int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG //not indented with the code
    std::cout<<"[About to perform the addition]"<<std::endl;
#endif //use for debugging and includes code conditionally if a marco has been defined
    large += small; 
    std::cout<<"The large integer is "<<large <<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
