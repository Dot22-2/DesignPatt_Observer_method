#include "NewsPublisher.hpp"
#include <algorithm>

void NewsPublisher::subscribe(IObserver* obs) {
    observers.push_back(obs);
}

void NewsPublisher::unsubscribe(IObserver* obs) {
    observers.erase(std::remove(observers.begin(), observers.end(), obs), observers.end());
}

void NewsPublisher::notify(const std::string& message) {
    for (auto& obs : observers)
        obs->update(message);
}
