//
// Created by Scooter on 5/12/2024.
//

#ifndef DYNAMICCLASSROOM_FUNCTIONS_HPP
#define DYNAMICCLASSROOM_FUNCTIONS_HPP
#include "StudentClass.hpp"

// Required functions
int getInteger(int min, int max);
void readStudents();
void displayStudents();

// Helper functions
//    • Create a dynamic array of that many of Student class.
Student* createStudentArray(int arrSize);

#endif //DYNAMICCLASSROOM_FUNCTIONS_HPP
