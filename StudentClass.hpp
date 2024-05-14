//
// Created by Scooter on 5/12/2024.
//

#ifndef DYNAMICCLASSROOM_STUDENTCLASS_HPP
#define DYNAMICCLASSROOM_STUDENTCLASS_HPP

#include <iostream>

class Student {
private:
    std::string name;
    float gpa;

public:
    // Constructors
    Student();
    Student(const std::string&, float);

    // Deconstructor
    ~Student();

    // Getters
    std::string getName() const;
    float getGpa();

    // Setters
    void setName(const std::string&);
    void setGpa(float);

};

#endif //DYNAMICCLASSROOM_STUDENTCLASS_HPP
