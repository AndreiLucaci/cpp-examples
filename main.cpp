#include <iostream>
#include <string>

using namespace std;

#include "./src/GCDCalculator.h"
#include "./src/LCMCalculator.h"
#include "./src/PrimeNumberCalculator.h"

void menu() {
    cout << "Simple calculator" << endl;
    cout << "Please select option" << endl;
    cout << "1. Prime calculator" << endl;
    cout << "2. GCD calculator" << endl;
    cout << "3. LCM calculator" << endl;
    cout << "'menu' to print the menu again" << endl;
    cout << "'q' to exit" << endl;
    cout << "Choose" << endl;
}

void run() {
    PrimeNumberCalculator primeNumberCalculator;
    LCMCalculator lcmCalculator;
    GCDCalculator gcdCalculator;

    menu();
    cout << ">: ";

    while (true) {
        string answer;
        getline(cin, answer);

        if (answer == "1") {
            primeNumberCalculator.run();
        } else if (answer == "2") {
            gcdCalculator.run();
        } else if (answer == "3") {
            lcmCalculator.run();
        } else if (answer == "menu") {
            menu();
        } else if (answer == "q" || answer == "exit") {
            cout << "Exiting the program!" << endl;
            break;
        } else if (answer == "") {
            // ignore
            continue;
        } else {
            cout << "Invalid option provided: '" << answer <<"' is not a valid option. Type 'menu' to see the valid options." << endl;
        }
        cout << "\r>: ";
    }
}

int main() {
    run();

    return 0;
}
