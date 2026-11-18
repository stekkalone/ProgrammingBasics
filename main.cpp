#include <iostream>

using namespace std;

int main() {
    int totalStudents = 0;
    int rowCapacity = 0;

    cout << "Enter the total number of students: ";
    cin >> totalStudents;

    cout << "Enter the number of students in a row: ";
    cin >> rowCapacity;

    if (rowCapacity <= 0) {
        cout << "Error: the number of students in a row must be greater than 0.\n";
        return 0;
    }

    if (totalStudents < 0) {
        cout << "Error: the number of students cannot be negative.\n";
        return 0;
    }

    int fullRows = totalStudents / rowCapacity;
    int remainder = totalStudents % rowCapacity;

    cout << "Number of complete rows: " << fullRows << '\n';
    cout << "Students in the incomplete row: " << remainder << '\n';

    return 0;
}// зміни від другого розробника
// зміни від другого розробника
