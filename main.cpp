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
    //Task A
    std::cout << "The width of the box: 5 \n" << "The height of the box: 9 \n";
    std::cout << box(5,9); std::cout << "\n------------------\n";
    std::cout << "The width of the box: 4 \n" << "The height of the box: 3 \n";
    std::cout << box(4,3); std::cout << "\n------------------\n";

    //Task B

    std::cout << "The width of the checkerboard: 5 \n" << "The height of the checkerboard: 6 \n";
    std::cout << checkerboard(5,6); std::cout << "\n------------------\n";
    std::cout << "The width of the checkerboard: 10 \n" << "The height of the checkerboard: 15 \n";
    std::cout << checkerboard(10,15); std::cout << "\n------------------\n";

    //Task C

    std::cout << "The size of the cross: 10 \n";
    std::cout << cross(10); std::cout << "\n------------------\n";
    std::cout << "The size of the cross: 5 \n";
    std::cout << cross(5); std::cout << "\n------------------\n"; 

    //Task D

    std::cout << "The size of the lower triangle: 7 \n";
    std::cout << lower(7); std::cout << "\n------------------\n"; 
    std::cout << "The size of the lower triangle: 3 \n";
    std::cout << lower(3); std::cout << "\n------------------\n"; 
        
    //Task E

    std::cout << "The size of the upper triangle: 5 \n";
    std::cout << upper(5); std::cout << "\n------------------\n"; 
    std::cout << "The size of the upper triangle: 10 \n";
    std::cout << upper(10); std::cout << "\n------------------\n"; 

    //Task F

    std::cout << "The width of trapezoid: 12 \n" << "The height of trapezoid: 14 \n";
    std::cout << trapezoid(12,14); std::cout << "\n------------------\n"; 
    std::cout << "The width of trapezoid: 12 \n" << "The height of trapezoid: 5 \n";
    std::cout << trapezoid(12,5); std::cout << "\n------------------\n"; 

    //Task G

    std::cout << "The width of checkerboard3x3: 27 \n" << "The height of checkerboard3x3: 27 \n";
    std::cout << checkerboard3x3(27,27); std::cout << "\n------------------\n"; 
    std::cout << "The width of checkerboard3x3: 9 \n" << "The height of checkerboard3x3: 17 \n";
    std::cout << checkerboard3x3(9,17); std::cout << "\n------------------\n"; 
    return 0;
}