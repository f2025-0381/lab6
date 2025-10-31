#include <iostream>
using namespace std;

int main() {
    int choice;
    double time, speed, distance;

    cout << "Choose a gas:\n";
    cout << "1. Carbon Dioxide\n";
    cout << "2. Air\n";
    cout << "3. Helium\n";
    cout << "4. Hydrogen\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "That’s not a valid choice.\n";
        return 0;
    }

    cout << "Enter the time in seconds: ";
    cin >> time;

    if (time < 0 || time > 30) {
        cout << "Time must be between 0 and 30 seconds.\n";
        return 0;
    }

    if (choice == 1)
        speed = 258.0;
    else if (choice == 2)
        speed = 331.5;
    else if (choice == 3)
        speed = 972.0;
    else
        speed = 1270.0;

    distance = speed * time;

    cout << "\nThe sound traveled " << distance << " meters.\n";

    return 0;
}
