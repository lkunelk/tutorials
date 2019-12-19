#pragma once
#include <memory>

// In c++11, shared_ptrs and unique_ptrs were introduced. Using these you never need to deallocate a pointer
// Basically a unique_ptr has this something like thisbasic structure
// Unique pointers are c++ answers to Java's easier memory allocation schemes. It is kinda like garbage collection

template <class T>
class jasons_unique_ptr {
    T* t;
    explicit jasons_unique_ptr(T& t) {
        t = *t;
    }
    ~jasons_unique_ptr() {
        delete t;
    }
};

class AA {
public:
    int i;
    explicit AA(int i) {
        this->i = i;
    }
};
class BB {};
inline void e12() {
    // Using the unique pointer the pointer to stuff is
    {
        std::unique_ptr<AA> stuff = std::make_unique<AA>(3); // Gives a pointer to AA with type 3
        std::cout << stuff->i << std::endl;
    }
    // Once its out of scope, the pointer is automatically deallocated

    // Exercise: In the class AA, instead of int i, turn int i into std::unique_ptr<int> i; and modify the constructor so that is unique
}

/**
 * A shared pointer is a unique pointer with a count to the pointer, a unique pointer can only be held by one place, whereas a shared pointer can do more
 * This is similar to the semaphore in operating systems
 */

class CopyMe {
    std::shared_ptr<int> shared_int;
};

inline void e13() {
    std::shared_ptr<AA> original = std::make_shared<AA>(3);
    std::cout << original.use_count() << std::endl;
    {
        std::shared_ptr<AA> copy1 = original; // Increases ref count to 2
        std::shared_ptr<AA> copy2 = original; // Increases ref count to 3
        std::shared_ptr<AA> copy3 = original; // Increases ref count to 4
        std::shared_ptr<AA> copy4 = original; // Increases ref count to 5
        std::cout << original.use_count() << std::endl;
    }
    // All died so back to 1
    std::cout << original.use_count() << std::endl;

    // Shared pointers are very useful when you want to classes own a copy of the same data structure. They are also useful in managing multithreading as an alternative to locks and semaphores
    // Exercise: Create a copy constructor and a constructor in the CopyMe class, and make a copy of the CopyMe class. Ensure that both values have the same value, and then delete one of them and print the value of the shared int
}