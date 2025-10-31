#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double distance, time;
    const double air = 1100, water = 4900, steel = 16400;
    cout << "Speed of Sound Calculator\n";
    cout << "1. Air\n";
    cout << "2. Water\n";
    cout << "3. Steel\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    if (choice >= 1 && choice <= 3) {
        cout << "Enter distance (feet): ";
        cin >> distance;

        if (distance < 0) {
            cout << "Error: Distance cannot be negative.";
            return 0;
        }
        switch (choice) {
            case 1 :
                time = distance / air;
                break;
            case 2 :
                (choice == 2)
                 time = distance / water;
                break;
            case 3 :
                time = distance / steel;
                break;
            default:
                cout << " error invalid choice.";
        }
        cout << fixed << setprecision(4);
        cout << "Time taken: " << time << " seconds\n";
    }
    else {
        cout << "Invalid input! Please choose 1, 2, or 3.";
    }
    
   return 0; }
