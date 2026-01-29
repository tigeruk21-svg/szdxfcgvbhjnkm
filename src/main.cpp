#include <iostream>
#include "ui_stub.h"
#include "fake_modules.h"

int main() {
    UiStub ui;
    FakeModules modules;

    bool running = true;
    while (running) {
        ui.showMenu();
        int choice = ui.readChoice();
        switch (choice) {
            case 1:
                ui.showHeader("Demo run");
                modules.runDemo();
                break;
            case 2:
                ui.showHeader("Modules info");
                modules.printInfo();
                break;
            case 3:
                ui.showHeader("Exit");
                running = false;
                break;
            default:
                std::cout << "Unknown option. Try again.\n";
        }
        std::cout << "\n";
    }

    std::cout << "Goodbye — this was a harmless demo.\n";
    return 0;
}