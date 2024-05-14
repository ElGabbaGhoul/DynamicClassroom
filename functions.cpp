//
// Created by Scooter on 5/12/2024.
//

#include "functions.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

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

void readStudents(Student *arr, int numStudents){
int parsed = 0;

std::string fileName;
std::cout << "What is the name of the file?" << std::endl;
std::cout << "(Hint: start with ../)" << std::endl;

std::cin >> fileName;

std::ifstream file(fileName);
//    ◦ Error handling
    //    ▪ Handle if the file doesn’t contain enough names.
    //    ▪ Handle if the file contains too many names.
    //    ▪ Handle if the file doesn’t exist.
    //    ▪ Any other exceptions you can think of checking.
    if (!file.is_open()){
        std::cerr << "Error opening file: " << fileName << std::endl;
        perror("Error");
        return;
    }

    std::string line;

    while (std::getline(file, line) && parsed < numStudents){
        std::string name;
        float gpa;

        std::istringstream iss(line);
        iss >> name >> gpa;

        arr[parsed] = Student(name, gpa);
        parsed++;


    }
file.close();
}

void displayStudents(Student *arr, int numStudents){
    for (int i = 0; i < numStudents; i++){
        std::cout << i + 1 << ": " << arr[i].getName() <<", GPA: " << arr[i].getGpa() << std::endl;
    }
}

Student* createStudentArray(int arrSize){
    Student* students = new Student[arrSize];

    return students;

}