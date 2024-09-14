// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b = 5; //a and b are global variables 

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout<<"a = " <<a<< std::endl;

    std::cout<<"b = " <<b<< std::endl;

    std::cout<<"flag = " <<my_flag<< std::endl;

    my_flag = true;
    std::cout <<"flag = " << my_flag<< std::endl;
    std::cout <<"a + b = "<< a + b <<std::endl;
    std::cout <<"a - b = "<< a - b <<std::endl;
    unsigned int pos;
    pos = b - a;
    std::cout <<"b - a = "<< pos <<std::endl; //unsigned ints find the twos complement of the number in binary

    
    
    std::cout << std::endl << std::endl;
    return (0);
}
