// 
/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 4

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"

int main(){
    std::cout << "The width of the box: 5 \n" << "The height of the box: 9 \n";
    std::cout << box(5,9); std::cout << "\n------------------\n";
    std::cout << "The width of the box: 4 \n" << "The height of the box: 3 \n";
    std::cout << box(4,3); std::cout << "\n------------------\n";
    std::cout << "The width of the checkerboard: 5 \n" << "The height of the checkerboard: 6 \n";
    std::cout << checkerboard(5,6); std::cout << "\n------------------\n";
    
    return 0;
}