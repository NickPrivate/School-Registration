#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <utility>
#include <unordered_map>

class ClassStruct
{
private:
    std::string className;
    std::string classTime;
    int classNum;
public:

    ClassStruct() {};

    ClassStruct(const std::string& newClasssName, const std::string& newClassTime,const int & newClassNum){

        className = newClasssName;
        classTime = newClassTime;
        classNum  = newClassNum;

    }


    void addClass (std::unordered_map <int,ClassStruct> &myClass){

        std::string className, classTime;
        int classNum;

        std::cin >> className >> classTime >> classNum;

        ClassStruct newClass (className, classTime, classNum);

        if (myClass.find(classNum) == myClass.end()){

            myClass[classNum] = newClass;
            std::cout << "\nClass has been successfully added\n";

        }
        else {
            std::cout << "\nClass already exists in the map\n";
        }
          
     }

     void printClass ()const{

        std::cout << className << ", " <<classTime << ", " << classNum << std::endl;
     }
    
    
};



int main(){

    std::string className;
    std::string classTime;
    int classNum;
    char quit;

    ClassStruct classes( className, classTime, classNum);

    std::unordered_map<int, ClassStruct> classMap;


    do
    {
        std::cout << "Enter your class in this order: Name, Time, Number\n";
        classes.addClass(classMap);
        classes.printClass();

    } while (quit != 'q');
    

    return 0;
}