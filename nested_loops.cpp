// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program uses the nested loops

#include <iostream>

int main() {
    // this program uses nested loops
    // this is to keep track of how many times you go through the loop
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    // process
    for (counter1 = 0; counter1 < 256; counter1++) {
        for (counter2 = 0; counter2 < 256; counter2++) {
            for (counter3 = 0; counter3 < 256; counter3++) {
                std::cout << "("<< counter1 << "," << counter2
                    << "," << counter3 << ")" << std::endl;
            }
        }
    }

    std::cout << "\nDone." << std::endl;
}
