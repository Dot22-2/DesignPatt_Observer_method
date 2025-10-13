#pragma once
#include "IObserver.hpp"
#include <string>

class UserObserver : public IObserver {
private:
    std::string name;

public:
    UserObserver(const std::string& n);
    void update(const std::string& message) override;
};
