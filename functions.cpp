//
// Created by Scooter on 5/12/2024.
//

#include "functions.hpp"
#include <iostream>

int getInteger(int min, int max){
    int numStds;
    bool validInput = false;

    while (!validInput){
        std::cout << "Give me a number between " << min << " and " << max << "." << std::endl;
        std::cin >> numStds;
        if (std::cin.fail()){
            // type check failure
            std::cerr << "Invalid input type." << std::endl;
            std::cin.clear();
            std::cin.ignore(50000, '\n');
        } else if (numStds < min || numStds > max){
            std::cerr << "Input out of bounds." << std::endl;
            std::cin.clear();
            std::cin.ignore(50000, '\n');
        } else {
            validInput = true;
        }
    }
    return numStds;
}

void readStudents(){
//    ◦ pass in student array and number of students
//    ◦ Ask for file name.
//    ◦ Open file, read in names and gpas and  each student.
//    ◦ No return.
//    ◦ Error handling
    //    ▪ Handle if the file doesn’t contain enough names.
    //    ▪ Handle if the file contains too many names.
    //    ▪ Handle if the file doesn’t exist.
    //    ▪ Any other exceptions you can think of checking.
}

void displayStudents(){
//    ◦ array should be passed safely and the number of students.
//    ◦ used to display array of students.
//    ◦ no return values.
}

Student* createStudentArray(int arrSize){
    Student* students = new Student[arrSize];

    return students;

}