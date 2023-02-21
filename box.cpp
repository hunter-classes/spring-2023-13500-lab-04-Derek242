#include <iostream>
#include "funcs.h"

std::string box(int width, int height) {
    std::string x = "";
    std::cout << "Shape: \n";
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            x = x + "*";
        }
        x = x + "\n";
    }

    return x;
}