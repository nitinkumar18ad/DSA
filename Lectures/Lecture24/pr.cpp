#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(int choice, double values[]) {
    if (choice == 1) {  // Circle: Area = πR²
        double R = values[0];
        return M_PI * R * R;
    } else if (choice == 2) {  // Rectangle: Area = L * B
        double L = values[0], B = values[1];
        return L * B;
    } else {
        return -1;  // Invalid choice
    }
}

int main() {
    int choice;
    cout << "Enter 1 for Circle or 2 for Rectangle: ";
    cin >> choice;

    double values[2];  // Array to hold values

    if (choice == 1) {
        cout << "Enter the radius: ";
        cin >> values[0];
        cout << "Area of Circle: " << calculateArea(choice, values) << endl;
    } else if (choice == 2) {
        cout << "Enter the length: ";
        cin >> values[0];
        cout << "Enter the breadth: ";
        cin >> values[1];
        cout << "Area of Rectangle: " << calculateArea(choice, values) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
