#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

  
    std::string cleanedStr;
    for (char c : input) {
        if (std::isalpha(c)) {
            cleanedStr += std::tolower(c);
        }
    }

    int left = 0;
    int right = cleanedStr.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
