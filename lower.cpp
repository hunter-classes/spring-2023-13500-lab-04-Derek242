#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"

std::string lower(int size){
    std::string x = "";
    std::cout << "Shape: \n" << std::endl;

    for (int i = 1; i <= size; i++){
        for (int j = i; j > size; j++){
            x+= " ";
        }
        for (int k = 1; k <= i; k++){
            x+= "*";
        }
        x += "\n";
    }
    return x;
}