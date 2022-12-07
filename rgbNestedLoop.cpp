// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Created on : December 6th, 2022
// This program counts up the RGB values from 0 to 255 for
// each respective RGB value using three counters for each
// value. the program uses 3 nested while... loops to do so,
// and colors the code in the RGB color the text corresponds to.
#include <iostream>
#include <string>

// this function counts up RGB values from 0 to 255,
// using 3 counters to do so for each value. This function
// uses 3 nested while... loops to do so.
int main() {
    // initializing the 3 counters. counter1 represents red,
    // counter2 represents green, and counter3 represents blue.
    int counter1, counter2, counter3;

    // setting the three counters to equal 0.
    counter1 = 0;
    counter2 = 0;
    counter3 = 0;

    // displays the introductory message to the user.
    std::cout << "I really like RGB values! ";
    std::cout << "Look at all these colours :) \n";

    // first while... loop to increment the first RGB value,
    // R, or red.
    while (counter1 <= 255) {
        if (counter2 == 255 && counter3 == 255) {
            printf("\033[1;38;2;%i;%i;%i %i, %i, %i ",
                   counter1, counter2, counter3,
                   counter1, counter2, counter3);
            std::cout << "\n";
            counter1 = counter1 + 1;
        }
        // second while... loop to increment the second RGB value,
        // G, or green.
        while (counter2 < 255) {
            if (counter3 == 255) {
                printf("\033[1;38;2;%i;%i;%im %i, %i, %i ",
                       counter1, counter2, counter3,
                       counter1, counter2, counter3);
                std::cout << "\n";
                counter2 = counter2 + 1;
            }
            // third while... loop to increment the third RGB value,
            // B, or blue.
            while (counter3 < 255) {
                printf("\033[1;38;2;%i;%i;%im %i, %i, %i ",
                       counter1, counter2, counter3,
                       counter1, counter2, counter3);
                std::cout << "\n";
                counter3 = counter3 + 1;
            }
        }
    }
}
