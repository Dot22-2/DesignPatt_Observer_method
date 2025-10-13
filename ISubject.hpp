#pragma once
#include "IObserver.hpp"
#include <vector>

class ISubject {
public:
    virtual ~ISubject() = default;
    virtual void subscribe(IObserver* obs) = 0;
    virtual void unsubscribe(IObserver* obs) = 0;
    virtual void notify(const std::string& message) = 0;
};
