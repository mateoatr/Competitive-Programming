#include <ctype.h>
#include <iostream>
#include <deque>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    std::deque<std::string> words; 
    std::string word = "";
    bool reading_number = false;
    char c;

    while (c = getchar()) {
        if (isalpha(c)) {
            word += c;
        }
        else if (isdigit(c)) {
            reading_number = true;
            word += c;
        } else if (reading_number) {
            reading_number = false;
            int index = std::stoi(word);
            if (index == 0)
                return 0;
            
            std::string word_to_print = words[index-1];
            std::cout << word_to_print << c;
            words.erase(words.begin()+index-1);
            words.push_front(word_to_print);
            word = "";
        } else if (word != "") {
            words.push_front(word);
            std::cout << word << c;
            word = "";
        } else {
            std::cout << c;
        }
    }

    return 0;
}