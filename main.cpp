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

//    • Call the readStudents function.
readStudents(stdArr, numStudents);

//    • Call displayStudents as entered.
displayStudents(stdArr, numStudents);

//    • Use std::sort to sort the Students alphabetically by name.
//    Since name is private, you will have to use the getName
//    accessor method to accomplish this.

//    • Call displayStudents to list then in alphabetical order.
    return 0;
}
