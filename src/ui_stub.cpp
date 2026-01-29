#include "ui_stub.h"
#include <iostream>

void UiStub::showMenu() const {
    std::cout << "=== MockFort Demo ===\n";
    std::cout << "1) Запустить демонстрацию\n";
    std::cout << "2) Показать модули\n";
    std::cout << "3) Выход\n";
    std::cout << "Выберите опцию: ";
}

int UiStub::readChoice() const {
    int c = 0;
    if (!(std::cin >> c)) {
        std::cin.clear();
        std::cin.ignore(10000, '\\n');
        return -1;
    }
    return c;
}

void UiStub::showHeader(const char* title) const {
    std::cout << "---- " << title << " ----\n";
}