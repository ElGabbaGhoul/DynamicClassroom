//
// Created by Scooter on 5/12/2024.
//

#ifndef DYNAMICCLASSROOM_STUDENTCLASS_HPP
#define DYNAMICCLASSROOM_STUDENTCLASS_HPP

#include <iostream>

class Student {
private:
    std::string name;
    float GPA;
public:
    // Constructors
    Student();
    Student(std::string, float);
    // Deconstructor
    ~Student();


};

Student::Student(){
    this->name = "";
    this->GPA = 0;
}

Student::Student(std::string name, float GPA){
    this->name = name;
    this->GPA = GPA;
}

Student::~Student(){

}

#endif //DYNAMICCLASSROOM_STUDENTCLASS_HPP
