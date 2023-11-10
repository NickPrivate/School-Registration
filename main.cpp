#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <utility>
#include <unordered_map>

struct Class
{

    std::string className;
    std::string classTime;
    int classNum;

    Class(std::string& newClasssName, std::string& newClassTime, int & newClassNum){

        className = newClasssName;
        classTime = newClassTime;
        classNum  = newClassNum;

    }

    //addClass function that will add the class to the map and return a pair that can be added into the main main
    //std::pair addClass (std::pair)
    
    
};



int main(){

    std::string className;
    std::string classTime;
    int classNum;

    Class classes( className, classTime, classNum);

    std::unique_ptr<std::unordered_map<int,Class>> classMap;

    for (const auto& i : *classMap){

        std::cout << "Type the class name, class time, and class num\n";
        std::cin >> className;
        std::cin >> classTime;
        std::cin >> classNum;

        classes(className,classTime,classNum);

        if (classMap->find(i.first) != classMap->end()) break;

        classMap->insert(i);


    }



    return 0;
}