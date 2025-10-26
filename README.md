# C++ Observer Method

This repository demonstrates a clean implementation of the **Observer** design pattern in C++ for a console-based application.

---

## Project Structure

- `ISubject.hpp` – Interface for subjects that manage observers  
- `IObserver.hpp` – Interface for observer classes  
- `NewsPublisher.hpp / NewsPublisher.cpp` – Concrete subject that notifies observers  
- `UserObserver.hpp / UserObserver.cpp` – Concrete observer that reacts to updates  
- `main.cpp` – Entry point showcasing observer registration and notification  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
NewsPublisher publisher;

UserObserver user1("Alice");
UserObserver user2("Bob");

publisher.attach(&user1);
publisher.attach(&user2);

publisher.setNews("Design patterns are awesome!");
// Output:
// Alice received news: Design patterns are awesome!
// Bob received news: Design patterns are awesome!
