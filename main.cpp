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


    void addClass (std::unordered_map <int,Class> &myClass){

        std::string className, classTime;
        int classNum;

        std::cin >> className >> classTime >> classNum;

        Class newClass (className, classTime, classNum);

        if (myClass.find(classNum) == myClass.end()){

            myClass[classNum] = newClass;
            std::cout << "Class has been successfully added\n";

        }
        else {
            std::cout << "Class already exists in the map\n";
        }
          
     }
    
    
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

    Class classes( className, classTime, classNum);

        if (classMap->find(i.first) != classMap->end()) break;

        classMap->insert(i);


    }



    return 0;
}