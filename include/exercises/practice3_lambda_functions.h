#pragma once


struct T { int j = 3; };
T lambda1(T& t) {
    t.j = 4;
    return t;
}

int lambda2(int i) {
    for (int j = 0; j < i; ++j) {
        i = i + j;
    }
    return i;
}

int lambda3(int j) {
    return lambda2(j) + 1;
}

inline void e9() {
    // C++ lambda functions have the generic shape [](){}. The simplist lambda function is
    auto f = [](){};

    // A lambda function is a temporary function, this you call a lambda function using
    f();

    // The basic functionality of a lambda function is [shit that the function uses](function parameters){the function}
    // Also known as [capture](parameters){function}
    // Here is an example.
    // Using the = operator inside the [] will implicitly find all values needed [=](int j) {...} also works
    // To get from reference, you do a &i inside the lambda capture [&i] to be able to modify the outside
    int i = 3;
    auto print_i_plus_j = [i](int j){std::cout << i + j << std::endl;};

    int j = 4;
    print_i_plus_j(j);

    // To add a return type to a lambda function, you can do it either explicitly or implicitly
    auto return_i_plus_j_explicit = [i](int j) -> int {return i + j;};
    auto return_i_plus_j_implicit = [i](int j) {return i + j;};

    std::cout << return_i_plus_j_explicit(j) << std::endl;
    std::cout << return_i_plus_j_implicit(j) << std::endl;

    // Exercise: Convert the following functions (above) into lambda functions

}

// Now you will explore the power of lambda functions in sorting
inline void e10() {
    std::vector<std::vector<int>> ints {
        std::vector<int> {1, 6, 3, 5},
        std::vector<int> {3, 7, 4, 1},
        std::vector<int> {9, 8, 13, 654},
        std::vector<int> {1, 4, 6, 2},
    };

    // Remove all of the integers tha tare smaller than 2, using two type 3 for loops.
    // Use method 3 here https://www.techiedelight.com/remove-elements-vector-inside-loop-cpp/

    // Hard right? Removing is very difficult in vector. Now use method 4 in the same one, using std::remove_if(v.begin(), v.end(), [](){}) twice
}