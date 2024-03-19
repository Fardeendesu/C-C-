#include <iostream>
#include <string>

int main() {
    std::string paragraph;


    std::cout << "Enter a paragraph (press Enter twice to finish):\n";
    

    std::getline(std::cin, paragraph, '\n'); 
    while (!paragraph.empty()) {
        std::getline(std::cin, paragraph, '\n'); 
        std::cout << "Line: " << paragraph << std::endl;
    }

    return 0;
}
