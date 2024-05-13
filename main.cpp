#include <iostream>

class Coin {
private:
    std::string name;

public:
    void setName(std::string name){
        this->name = name;
    }
    std::string getName(){
        return this->name;
    }

    int value;
};

int main() {

    Coin penny;
    Coin *dime = new Coin;

    penny.setName("Penny");
    penny.value = 1;

    dime->setName("Dime");
    dime->value = 10;

    std::cout << penny.getName() << " " << penny.value << std::endl;
    std::cout << dime->getName() << " " << dime->value << std::endl;
//    • Your main program should ask the user how many students in the section using getInteger.
//    • Create a dynamic array of that many of Student class.
//    • Call the readStudents function.
//    • Call displayStudents as entered.
//    • Use std::sort to sort the Students alphabetically by name. Since name is private, you will have to use the getName accessor method to accomplish this.
//    • Call displayStudents to list then in alphabetical order.
    return 0;
}
