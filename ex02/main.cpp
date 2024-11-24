#include "Array.hpp"

int main() {
	try {
        Array<int> intArray(5);
        std::cout << YELLOW "intArray size: " << intArray.getSize() << RESET << std::endl;
        for (unsigned int i = 0; i < intArray.getSize(); ++i) {
            std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;
        }

		std::cout << std::endl;
        for (unsigned int i = 0; i < intArray.getSize(); ++i) {
            intArray[i] = i * 10;
        }
        std::cout << BLUE "After modification:" << RESET << std::endl;
        for (unsigned int i = 0; i < intArray.getSize(); ++i) {
            std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;
        }

		std::cout << std::endl;
        Array<int> copiedArray(intArray);
        std::cout << YELLOW "copiedArray size: " << copiedArray.getSize() << RESET << std::endl;
        for (unsigned int i = 0; i < copiedArray.getSize(); ++i) {
            std::cout << "copiedArray[" << i << "]: " << copiedArray[i] << std::endl;
        }

		std::cout << std::endl;
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << YELLOW "assignedArray size: " << assignedArray.getSize() << RESET << std::endl;
        for (unsigned int i = 0; i < assignedArray.getSize(); ++i) {
            std::cout << "assignedArray[" << i << "]: " << assignedArray[i] << std::endl;
        }

		std::cout << std::endl;
        intArray[0] = 999;
        std::cout << BLUE "After modifying intArray[0]:" RESET << std::endl;
        std::cout << "intArray[0]: " << intArray[0] << std::endl;
        std::cout << "copiedArray[0]: " << copiedArray[0] << std::endl;

		std::cout << std::endl;
        std::cout << BLUE "Attempting out-of-bounds access:" RESET << std::endl;
        std::cout << intArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
