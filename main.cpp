#include <iostream>

class Calculator {

public:
    double num1{};
    double num2{};

    Calculator() = default;

    double add(double num1, double num2) {
        return num1 + num2;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    double subtract_1_2(double num1, double num2) {
        return num1 - num2;
    }

    double subtract_2_1(double num1, double num2) {
        return num2 - num1;
    }

    double divide_1_2(double num1, double num2) {
        return num1 / num2;
    }

    double divide_2_1(double num1, double num2) {
        return num2 / num1;
    }

    bool set_num1(double num1) {

        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }

    bool set_num2(double num2) {

        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {

    Calculator calculator{};

    double num1, num2;

    while (true) {

        while (true) {
            if (num1 == 0) { std::cout << "Неверный ввод!" << std::endl; }
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (calculator.set_num1(num1)) { break; }
        }

        while (true) {
            if (num2 == 0) { std::cout << "Неверный ввод!" << std::endl; }
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (calculator.set_num2(num2)) { break; }
        }

        std::cout << "num1 + num2 = " << calculator.add(num1, num2) << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply(num1, num2) << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2(num1, num2) << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1(num1, num2) << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2(num1, num2) << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1(num1, num2) << std::endl;
    }

}