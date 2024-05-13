//
// Created by Scooter on 5/12/2024.
//

#ifndef DYNAMICCLASSROOM_REQUIRED_HPP
#define DYNAMICCLASSROOM_REQUIRED_HPP

class Account {
private:
    int number;
    float balance;
public:
    // Constructors
    Account();
    Account(int, float);
    // Destructor
    ~Account();
    // Public Methods
    float getBalance();
    void deposit(float);


};

int getInteger();
void readStudents();
void displayStudents();

#endif //DYNAMICCLASSROOM_REQUIRED_HPP
