//
// Created by Prodigy on 10/6/2017.
//

#ifndef ACCELERATEDCPP_CHONE_H
#define ACCELERATEDCPP_CHONE_H
#include <iostream>

class ChOne {
public:
    void myMethod(){
        std::cout << "Please enter your first name: ";
        std::string name;
        std::cin >> name;
        std::cout << "Hello, " << name << "!" << std::endl;
    }
};


#endif //ACCELERATEDCPP_CHONE_H
