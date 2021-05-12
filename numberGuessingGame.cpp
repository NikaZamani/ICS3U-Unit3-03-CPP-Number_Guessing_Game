// Copyright (c) 2021 Nika Zamani All rights reserved
//
// Created by Nika Zamani
// Created on April 2021
// This program guesses a number between 0 and 9

#include <iostream>
#include <random>

int main() {
    // this function generates a random number between 0 and 9

    // input
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    std::cout << "The randomly generated number is: ";
    std::cout << someRandomNumber << std::endl;

    // process
    if (someRandomNumber == 5) {
        std::cout << "Number generated matches the random number !!";
    } else {
    std::cout << "Number generated does not matche the random number !!";
    std::cout << std::endl;
    std::cout << "Number generated that matches the random number is 5 !!";
    }
std::cout << std::endl;
std::cout << std::endl;
std::cout << "Done." << std::endl;
}
