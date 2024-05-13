//
// Created by Scooter on 5/12/2024.
//

#include "required.hpp"
#include <iostream>

Account::Account(){
    this->number = 0;
    this->balance = 0;
}

Account::Account(int number, float balance) {
    this->number = number;
    this->balance = balance;
}

Account::~Account(){
    std::cout << "Deleted " << this->number << std::endl;
}

float Account::getBalance() {
    return this->balance;
}

void Account::deposit(float amount) {
    this->balance += amount;
}

int getInteger(){
//    ◦ used to get an input value
//    ◦ input parameters are min and max value
//    ◦ get and validates an integer between min and max
//    ◦ return the value
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