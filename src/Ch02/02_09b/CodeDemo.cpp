// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string> //contains string class
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "Hey Guys!";
    char array_str2[] = "What's Up?";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's the game going?";

    strncat(array_str1, array_str2, LENGTH1); //holds concated string, length = size destination of the string

    std::cout<<array_str1<<std::endl;
    std::cout << std_str1 + std_str2;// concatenate strings inside string 

    //+ = operation overload to add two strings

    //modifies this first string - not always convinient 


    
    std::cout << std::endl << std::endl;
    return (0);
}
