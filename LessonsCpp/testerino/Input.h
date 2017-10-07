//
// Created by Prodigy on 10/6/2017.
//

#ifndef TEST_INPUT_H
#define TEST_INPUT_H
#include <iostream>

class Input {

public:
    void getInput(){
        std::cout << "Please enter your first name: ";
        std::string name;
        std::cin >> name;
        std::cout << "Hello, " << name << "!" << std::endl;
    }
};


#endif //TEST_INPUT_H
