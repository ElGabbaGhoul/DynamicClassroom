//
// Created by Scooter on 5/12/2024.
//

#ifndef DYNAMICCLASSROOM_FUNCTIONS_HPP
#define DYNAMICCLASSROOM_FUNCTIONS_HPP
#include "StudentClass.hpp"

// Required functions
int getInteger(int min, int max);
void readStudents(Student *arr, int numStudents);
void displayStudents(Student *arr, int numStudents);

// Helper functions
//    • Create a dynamic array of that many of Student class.
Student* createStudentArray(int arrSize);
bool isFileEmpty(const std::string &file);
bool sortByFirst(Student&a, Student&b);

#endif //DYNAMICCLASSROOM_FUNCTIONS_HPP
