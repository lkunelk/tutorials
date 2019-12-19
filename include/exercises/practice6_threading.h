#pragma once
#include <memory>
#include <thread>

// This combines the understanding of a lambda function and a thread. A lambda function can be thought

inline void e14() {
    std::vector<std::thread> workers;

    // Exercise: Create a lambda function that prints Hello World
    // Follow this example
    // https://www.bogotobogo.com/cplusplus/C11/3_C11_Threading_Lambda_Functions.php
    // And print everything out seperately

    // Exercise: To fix the printing create a std::mutex and put the std::lock_guard in the beginning of the lambda function. This allos them to be only called once at a time
    // std::lock_guard<std::mutex> lk2(e2.m, std::adopt_lock);

    // Exercise: In the lambda functions sleep for 1 second before printing using https://en.cppreference.com/w/cpp/thread/sleep_for
}