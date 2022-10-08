#include <iostream>

// функция получения клетки поля по координатам - типа готово
// функция определения победителя
// функция корректности поля
// функция проверки ввода символов +
std::string result;
std::string line_1, line_2, line_3;
std::string symbols = "XO.";

std::string checkCorrectSymbols(std::string line) {
    int check = 0;
    bool qw = true;
    do {
        std::cout << "Enter the value of the line:" << std::endl;
        std::cin >> line;
        if (line.length() == 3) {
            check = 1;
        } else {
            check = 0;
            std::cout << "The string must be no more than three characters" << std::endl;
        }

        if (check == 1) {
            for (int i = 0; i < line.length() ; i++) {
                int ck = 1;
                for (int j = 0; j < symbols.length(); j++) {
                    if (line[i] == symbols[j]) {
                        ck = 1;
                        break;
                    } else {
                        ck = -1;
                    }
                }
                check += ck;
            }
            if (check == 4) qw = false;

        }
    } while (qw);

    return line;
}

int main() {
    std::cout << "Evaluation of the results of the game of tic-tac-toe" << std::endl << std::endl;

    checkCorrectSymbols(line_1);
    checkCorrectSymbols(line_2);
    checkCorrectSymbols(line_3);

    std::cout << line_1;
    std::cout << "EEEOX.";

    return 0;
}
