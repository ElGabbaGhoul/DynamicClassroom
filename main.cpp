#include <iostream>
#include "functions.hpp"
#include "StudentClass.hpp"


int main() {
// Asks user how many students to search for
// arbitrary max val of 100 chosen.
int numStudents = getInteger(1,100);
std::cout << "Number of students to search for: " << numStudents << "." << std::endl;

// Creates dynamic array of that many of Student class
Student *stdArr = createStudentArray(numStudents);

// Read students from document into student array
readStudents(stdArr, numStudents);

//    • Call displayStudents as entered, then list in alphabetical order
displayStudents(stdArr, numStudents);
    return 0;
}
