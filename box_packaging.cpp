#include <iostream>
#include <cstdlib>

void calculateBoxes(int totalItems, int boxCapacity) {
    if (boxCapacity <= 0) {
        std::cout << "Error: the box capacity must be greater than 0.\n";
        return;
    }

    if (totalItems < 0) {
        std::cout << "Error: the number of items cannot be negative.\n";
        return;
    }

    div_t result = std::div(totalItems, boxCapacity);

    std::cout << "Number of full boxes: " << result.quot << '\n';
    std::cout << "Remaining items: " << result.rem << '\n';
}

int main() {
    int totalItems = 0;
    int boxCapacity = 0;

    std::cout << "Enter the total number of items: ";
    std::cin >> totalItems;

    std::cout << "Enter the box capacity: ";
    std::cin >> boxCapacity;

    calculateBoxes(totalItems, boxCapacity);

    return 0;
}