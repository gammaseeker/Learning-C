//
// Created by Prodigy on 10/6/2017.
//

#ifndef ACCELERATEDCPP_INPUT_H
#define ACCELERATEDCPP_INPUT_H
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


#endif //ACCELERATEDCPP_INPUT_H
