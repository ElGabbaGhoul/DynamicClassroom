//
// Created by Scooter on 5/12/2024.
//

#ifndef DYNAMICCLASSROOM_REQUIRED_HPP
#define DYNAMICCLASSROOM_REQUIRED_HPP

class Object{
private:
    static int count;
public:
    static int getCount();
    Object();
    ~Object();
};

int getInteger();
void readStudents();
void displayStudents();

#endif //DYNAMICCLASSROOM_REQUIRED_HPP
