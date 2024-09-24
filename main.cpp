#include <iostream>

int main() {
    int userInput;
    int flag = 0;

    std::cout << "Welcome to the Shelter" << std::endl;
    while(flag == 0) {
        std::cout<<"Select an option from the menu below and input the corresponding number."<<std::endl;
        std::cout<<"(1) Add an animal"<<std::endl;
        std::cout<<"(2) Remove an animal"<<std::endl;
        std::cout<<"(3) Display animals in shelter"<<std::endl;
        std::cout<<"(4) Exit"<<std::endl;
        std::cin>>userInput;

        if (userInput == 1) {
            void addAnimal(Animal* animal);
        }
        if (userInput == 2) {
            void removeAnimal(std::string name);
        }
        if (userInput == 3) {
            void displayAnimals();
        }
        if (userInput == 4) {
            flag==1;
        }
    }
    return 0;
}
