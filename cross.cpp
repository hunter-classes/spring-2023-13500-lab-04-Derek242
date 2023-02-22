#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"

std::string cross(int size){
    std::string x = "";
    std::cout << "Shape: \n" << std::endl;

    for (int i = 1; i <= size; i++){
        for (int j = 1; j <= size; j++){
            if (i == j || i+j == size + 1){
                x += "*";
            }else{
                x += " ";
            }
        } 
        x += "\n";
    }
    return x;
}