#include <cstdio>

int main() {
    int students;
    int studentsPerRow;

    std::printf("Enter the total number of students: ");
    std::scanf("%d", &students);

    std::printf("Enter the number of students in a row: ");
    std::scanf("%d", &studentsPerRow);

    if (studentsPerRow <= 0) {
        std::printf("Error: the number of students in a row must be greater than 0.\n");
    } else if (students < 0) {
        std::printf("Error: the number of students cannot be negative.\n");
    } else {
        const int completeRows = students / studentsPerRow;
        const int studentsInIncompleteRow = students % studentsPerRow;
        
        std::printf("Number of complete rows: %d\n", completeRows);
        std::printf("Students in the incomplete row: %d\n", studentsInIncompleteRow);
    }
    return 0;
}