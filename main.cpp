#include <iostream>

using namespace std;
int main() {
    int students;
    int studentsPerRow;

    cout << "Enter the total number of students: ";
    cin >> students;

    cout << "Enter the number of students in a row: ";
    cin >> studentsPerRow;

    if (studentsPerRow <= 0) {
        cout << "Error: the number of students in a row must be greater than 0.\n";
    } else if (students < 0) {
        cout << "Error: the number of students cannot be negative.\n";
    } else {
        const int completeRows = students / studentsPerRow;
        const int studentsInIncompleteRow = students % studentsPerRow;

        cout << "Number of complete rows: " << completeRows << '\n';
        cout << "Students in the incomplete row: "<< studentsInIncompleteRow << '\n';
    }

    return 0;
}