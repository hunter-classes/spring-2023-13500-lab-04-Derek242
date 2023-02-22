#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"

std::string trapezoid(int width, int height){
    std::string x = "";
    std::cout << "Shape: \n" << std::endl;

    if (width - (2*height) >= 0){
        for (int i = 0; i < height; i++){
            for (int j = 0; j < i; j++){
                    x += " ";
                }
            for (int j = 0; j < width; j++){
                    x += "*";
                }
            width -= 2;
            x += "\n";
        }

    } else {
        x =+ "Impossible shape! \n\n";

    }
    return x; 
}
