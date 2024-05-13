//
// Created by Scooter on 5/12/2024.
//

#include "StudentClass.hpp"


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
