#include "UserObserver.hpp"
#include <iostream>

UserObserver::UserObserver(const std::string& n) : name(n) {}

void UserObserver::update(const std::string& message) {
    std::cout << "[" << name << "] Received: " << message << "\n";
}
