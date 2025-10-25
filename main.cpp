#include <iostream>

class Calculator {

private:
    double num1{};
    double num2{};

public:
    Calculator() = default;

    double add() const {
        return num1 + num2;
    }

    double multiply() const {
        return num1 * num2;
    }

    double subtract_1_2() const {
        return num1 - num2;
    }

    double subtract_2_1() const {
        return num2 - num1;
    }

    double divide_1_2() const {
        return num1 / num2;
    }

    double divide_2_1() const {
        return num2 / num1;
    }

    bool set_num1(double num) {

        if (num != 0) {
            this->num1 = num;
            return true;
        }
        else {
            return false;
        }
    }

    bool set_num2(double num) {

        if (num != 0) {
            this->num2 = num;
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
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (calculator.set_num1(num1)) {
                break;
            }
            std::cout << "Неверный ввод!" << std::endl;
        }

        while (true) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (calculator.set_num2(num2)) {
                break;
            }
            std::cout << "Неверный ввод!" << std::endl;
        }

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    }
}