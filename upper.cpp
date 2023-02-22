#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"

std::string upper(int size){
    std::string x = "";
    std::cout << "Shape: \n" << std::endl;

    for (int i = 1; i <= size; i++){
        for (int j = 1; j <= size; j++){
            if (j >= i){
                x += "*";
            } else {
                x += " ";
            }
        }
        x += "\n";
    }
    return x;
}