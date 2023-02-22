#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "funcs.h"

 std::string checkerboard3x3(int width, int height){
    std::string x = "";
    std::cout << "Shape: \n";

    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            //even
            if (i % 6 >= 3){
                if (j % 6 >= 3) {
                    x += "*";
                }else{
                    x += " ";
                }
            } else {
                if (j % 6 < 3){
                    x += "*";
                } else {
                    x += " ";
                }
            }
        }
        x += "\n";
    }
    return x;
}
