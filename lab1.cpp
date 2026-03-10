#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text;
    std::string vowels = "aeiouyAEIOUYаеёиоуыэюяАЕЁИОУЫЭЮЯ";
    int count = 0;

    std::cout << "Введите строку: ";
    std::getline(std::cin, text);

    for (char c : text) {
        if (vowels.find(c) != std::string::npos) {
            count++;
        }
    }

    std::cout << "Количество гласных: " << count << std::endl;
    return 0;
}