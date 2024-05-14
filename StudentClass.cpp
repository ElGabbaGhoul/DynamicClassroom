//
// Created by Scooter on 5/12/2024.
//

#include "StudentClass.hpp"
#include <iostream>


// Constructors
Student::Student() : name(""), gpa(0){}
Student::Student(const std::string& name, float gpa) : name(name), gpa(gpa) {}

// Deconstructor
Student::~Student() {}

// Getters
std::string Student::getName() const {
    return name;
}

float Student::getGpa() {
    return gpa;
}

// Setters
void Student::setName(const std::string & setName) {
    this->name = setName;
}

void Student::setGpa(float setGpa){
    this->gpa = setGpa;
}