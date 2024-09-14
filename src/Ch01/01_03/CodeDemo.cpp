// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout<<"Enter your name: "<<std::flush; //flush makes sure output is completely sent to terminal before user input
    std::cin >> str;
    std::cout << "Nice to meet you " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
