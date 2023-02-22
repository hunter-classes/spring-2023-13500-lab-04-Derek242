#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"

std::string checkerboard(int width, int height){
    std::string x = "";
    std::cout << "Shape: \n";

    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i % 2 == 0){
                //even
                if (j % 2 == 0){
                    x = x + "*";
                } else {
                  x = x + " ";
                }
            } 
            else{
                //odd
                if (j % 2 == 0){
                    x = x + " ";
                } else {
                    x = x + "*";
                }
            }
        }
        x = x + "\n";

    }
    return x;

}