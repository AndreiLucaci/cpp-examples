//
// Created by Andrei Lucaci on 22.04.2021.
//
#include <iostream>
using namespace std;

#include "LCMCalculator.h"
#include "GCDCalculator.h"

long long LCMCalculator::compute(int first, int second) {
    GCDCalculator gcdCalculator;

    return (first / gcdCalculator.compute(first, second)) * second;
}

void LCMCalculator::run() {
    int first, second;
    cout << "LCM Calculator!" << endl;
    cout << "First number = ";
    cin >> first;
    cout << "Second number = ";
    cin >> second;

    int result = compute(first, second);

    cout << "LCM result of " << first << " and " << second << " is " << result << endl;
}