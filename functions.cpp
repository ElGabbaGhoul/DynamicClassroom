//
// Created by Scooter on 5/12/2024.
//

#include "functions.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

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

void readStudents(Student *&arr, int &numStudents){
int parsed = 0;
std::string fileName;
std::cout << "What is the name of the file?" << std::endl;
std::cout << "(Hint: start with ../)" << std::endl;

std::cin >> fileName;

std::ifstream file(fileName);

    // Checks if file isn't open
    if (!file.is_open()){
        std::cerr << "Error opening file: " << fileName << std::endl;
        return;
    }

    // Checks if file isempty
    if (isFileEmpty(fileName)) {
        std::cerr << "Error: file with name '" << fileName << "' is empty." << std::endl;
        file.close();
        return;
    }

    // Checks if file not found
    if (!fileExists(fileName)) {
        std::cerr<< "Error: File '" << fileName << " not found or cannot be opened." << std::endl;
        file.close();
        return;
    }

    // Adjusts numstudents if necessary
    if (int updatedNumStudents = updateNumStudents(numStudents, file); updatedNumStudents <= numStudents) {
        std::cerr << "Adjusted numStudents to match the number of students in the file: " << updatedNumStudents << std::endl;
        numStudents = updatedNumStudents;
    }

    std::string line;

    // reads student info into array
    while (std::getline(file, line) && parsed < numStudents){
            std::string name;
            float gpa;
            std::istringstream iss(line);
            if (iss >> name >> gpa) {
                arr[parsed] = Student(name, gpa);
                parsed++;
            } else {
                std::cerr << "Error parsing data in line " << (parsed + 1) << " of the file." << std::endl;
            }
    }

    if (!file.eof()) {
        std::cerr << "Error: Unexpected end of file reached before reading all students." << std::endl;
    }

    if (parsed < numStudents) {
        std::cerr << "There are less than " << numStudents << " students in this document." << std::endl;
        std::cerr << parsed << " students were added to the array." << std::endl;
        }

file.close();
}

void displayStudents(Student *arr, int numStudents){
    std::cout << "Sorted as entered: " << std::endl;
    for (int i = 0; i < numStudents; i++){
        std::cout << i + 1 << ": " << arr[i].getName() <<", GPA: " << arr[i].getGpa() << std::endl;
    }
    std::cout << "\n";
    // Sort by First name
    std::cout << "Sorted by First Name:" << std::endl;
    std::sort(&arr[0], &arr[numStudents], sortByFirst);
    for (int i = 0; i < numStudents; i++) {
        std::cout << i + 1 << ": " << arr[i].getName() <<", GPA: " << arr[i].getGpa() << std::endl;
    }
}

Student* createStudentArray(int arrSize){
    Student* students = new Student[arrSize];

    return students;

}

bool isFileEmpty(const std::string &filename) {
    std::ifstream file(filename);
    return file.peek() == std::ifstream::traits_type::eof();

}

bool sortByFirst(Student&a, Student&b) {
    return a.getName() < b.getName();
}

int updateNumStudents(int& numStudents, std::ifstream& file) {
    int studentsInFile = 0;
    std::string line;

    while (std::getline(file, line)) {
        ++studentsInFile;
    }
    if (studentsInFile < numStudents) {
        std::cerr << "Student array size changed." << std::endl;
        std::cerr << "Original numStudents value: " << numStudents << std::endl;
        std::cerr << "Actual numStudents in file: " << studentsInFile << std::endl;
    }


    file.clear();
    file.seekg(0, std::ios::beg);

    return studentsInFile;
}

bool fileExists(const std::string &fileName) {
    std::ifstream file(fileName);
    return file.good();
}