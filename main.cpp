#include <iostream>
#include <string>
#include <vector>
#include <memory>

struct Class
{

    std::string className;
    std::string classTime;
    int classNum;

    Class(std::string const & newClasssName, std::string const & newClassTime, int const & newClassNum){

        className = newClasssName;
        classTime = newClassTime;
        classNum  = newClassNum;

    }
    
    
};



int main(){


    Class classes( std::string className, std::string classTime, int classNum);

    std::vector<std::unique_ptr<Class>> classVector;

    while (std::cout << "Entere clacc")



    return 0;
}