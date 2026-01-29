#pragma once

class UiStub {
public:
    void showMenu() const;
    int readChoice() const;
    void showHeader(const char* title) const;
};