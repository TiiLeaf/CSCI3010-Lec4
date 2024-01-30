#include <iostream>
#include "functions_to_implement.cpp"

int main() {
    std::string myMessage = Join(std::vector<std::string>{"Hello", "World"}, ", ");
    std::cout << myMessage << std::endl;

    std::vector<int> myNums = {};
    for (size_t i = 0; i < 10; i++) {
        myNums.push_back(i);
    }

    std::vector<bool> evenPositions = EvenMask(myNums);
    std::vector<bool> oddPositions = OddMask(myNums);

    std::cout << "Even numbers:" << std::endl;
    for (size_t i = 0; i < evenPositions.size(); i++) {
        if (evenPositions.at(i)) {
            std::cout << myNums.at(i) << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Odd numbers:" << std::endl;
    for (size_t i = 0; i < oddPositions.size(); i++) {
        if (oddPositions.at(i)) {
            std::cout << myNums.at(i) << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Sum of all numbers: " << Sum(myNums) << std::endl;
    std::cout << "Product of all numbers: " << Product(myNums) << std::endl;

    return 0;
}
