#include <iostream>

int main() {
    int userInput;
    int flag = 0;
    std::string RemoveName;

    std::cout << "Welcome to the Shelter" << std::endl;
    while(flag == 0) {
        std::cout<<"Select an option from the menu below and input the corresponding number."<<std::endl;
        std::cout<<"(1) Add a cat"<<std::endl;
        std::cout<<"(2) Add dog"<<std::endl;
        std::cout<<"(3) Remove an animal"<<std::endl;
        std::cout<<"(4) Display animals in shelter"<<std::endl;
        std::cout<<"(5) Exit"<<std::endl;
        std::cin>>userInput;

        Shelter myShelter;

        if (userInput == 1) {
            std::string DogName;
            int age;
            std::string breed;
            std::cout<<"Enter the name"<<std::endl;
            std::cin>>DogName;
            std::cout<<"Enter the age"<<std::endl;
            std::cin>>age;
            std::cout<<"Enter the breed"<<std::endl;
            std::cin>>breed;

            Dog dog1(DogName, age, breed);
            myShelter.add(dog1);
        }
        if (userInput == 2) {
            std::string CatName;
            int age;
            std::string breed;

            std::cout<<"Enter the name"<<std::endl;
            std::cin>>CatName;
            std::cout<<"Enter the age"<<std::endl;
            std::cin>>age;
            std::cout<<"Enter the breed"<<std::endl;
            std::cin>>breed;


            Cat cat1(CatName, age, breed);
            myShelter.add(cat1);
        }
        if (userInput == 3) {
            std::cout<<"Enter the name of the animal you would like to remove from the shelter."<<std::endl;
            std::cin>>RemoveName;
            removeAnimal(RemoveName);
        }
        if (userInput == 4) {
             myShelter.displayAnimals();
        }
        if (userInput == 5) {
            flag==1;
        }
    }
    return 0;
}
