//
// Created by Andrei Lucaci on 22.04.2021.
//
#include <iostream>
using namespace std;

#include "GCDCalculator.h"

int GCDCalculator::compute(int first, int second) {
    while (first != second) {
        if (first > second) first -= second;
        else second -= first;
    }

    return first;
}

void GCDCalculator::run() {
    int first, second;
    cout << "GCD Calculator!" << endl;
    cout << "First number = ";
    cin >> first;
    cout << "Second number = ";
    cin >> second;

    int result = compute(first, second);

    cout << "GCD result of " << first << " and " << second << " is " << result << endl;
}