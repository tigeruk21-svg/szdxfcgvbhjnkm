#pragma once
#include <string>

class FakeModules {
public:
    FakeModules() = default;
    void runDemo();       // демонстрационная последовательность (безвредная)
    void printInfo();     // печать информации о "модулях"
private:
    std::string getFakeStatus() const;
};