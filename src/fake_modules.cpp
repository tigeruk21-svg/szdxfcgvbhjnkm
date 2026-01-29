#include "fake_modules.h"
#include <iostream>

void FakeModules::runDemo() {
    std::cout << "[Demo] Инициализация фиктивных модулей...\n";
    std::cout << "[Demo] Модуль A: готов (симуляция)\n";
    std::cout << "[Demo] Модуль B: готов (симуляция)\n";
    std::cout << "[Demo] Выполняются демонстрационные операции (только вывод)...\n";
}

void FakeModules::printInfo() {
    std::cout << "Список модулей (фиктивный):\n";
    std::cout << " - ModuleA: status = " << getFakeStatus() << "\n";
    std::cout << " - ModuleB: status = " << getFakeStatus() << "\n";
    std::cout << " - ModuleUI: status = " << getFakeStatus() << "\n";
}

std::string FakeModules::getFakeStatus() const {
    return "OK (simulated)";
}