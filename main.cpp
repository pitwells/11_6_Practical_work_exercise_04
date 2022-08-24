#include <iostream>

// функция получения клетки поля по координатам - типа готово
// функция определения победителя

std::string getCellValue (std::string x, int y) {

    std::string w;
    w = x[y];
    return w;
}

std::string checkWin (std::string q, std::string w) {
    return "0";
}


int main() {
    std::cout << "Evaluation of the results of the game of tic-tac-toe" << std::endl << std::endl;

    std::string str1, str2, str3;
    std::cout << "Enter the value of the first line:" << std::endl;
    std::cin >> str1;
    std::cout << "Enter the value of the second line:" << std::endl;
    std::cin >> str2;
    std::cout << "Enter the value of the third line:" << std::endl;
    std::cin >> str3;

    std::cout << str1 << std::endl << str2 << std::endl << str3 << std::endl;

    std::cout << getCellValue(str1,2);
    if (getCellValue(str1,2) == getCellValue(str2,1)) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    return 0;
}
