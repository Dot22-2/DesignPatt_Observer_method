#pragma once
#include "ISubject.hpp"

class NewsPublisher : public ISubject {
private:
    std::vector<IObserver*> observers;

public:
    void subscribe(IObserver* obs) override;
    void unsubscribe(IObserver* obs) override;
    void notify(const std::string& message) override;
};
