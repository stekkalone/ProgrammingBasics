#include <iostream>

int main() {
    int students;
    int studentsPerRow;

    std::cout << "Enter the total number of students: ";
    std::cin >> students;

    std::cout << "Enter the number of students in a row: ";
    std::cin >> studentsPerRow;

    if (studentsPerRow <= 0) {
        std::cout << "Error: the number of students in a row must be greater than 0.\n";
    } else if (students < 0) {
        std::cout << "Error: the number of students cannot be negative.\n";
    } else {
        const int completeRows = students / studentsPerRow;
        const int studentsInIncompleteRow = students % studentsPerRow;

        std::cout << "Number of complete rows: " << completeRows << '\n';
        std::cout << "Students in the incomplete row: "<< studentsInIncompleteRow << '\n';
    }

    return 0;
}