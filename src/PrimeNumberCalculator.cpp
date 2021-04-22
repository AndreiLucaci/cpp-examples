//
// Created by Andrei Lucaci on 22.04.2021.
//
#include <iostream>
using namespace std;

#include "PrimeNumberCalculator.h"

int PrimeNumberCalculator::compute(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void PrimeNumberCalculator::run() {
    int num;
    cout << "Prime number Calculator!" << endl;
    cout << "Input number = ";
    cin >> num;

    bool result = compute(num);

    cout << num << " is " << (result ? "" : "not") << " a prime number." << endl;
}