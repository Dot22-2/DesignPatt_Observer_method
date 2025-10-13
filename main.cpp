#include "NewsPublisher.hpp"
#include "UserObserver.hpp"

int main() {
    NewsPublisher publisher;

    UserObserver dmytro("Dmytro");
    UserObserver olena("Olena");

    publisher.subscribe(&dmytro);
    publisher.subscribe(&olena);

    publisher.notify("Breaking news: Observer pattern rocks!");

    publisher.unsubscribe(&olena);
    publisher.notify("Update: olena unsubscribed.");

    return 0;
}
