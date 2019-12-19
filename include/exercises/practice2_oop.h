#pragma once

/**
 * How to work with classes. Use alt -> Insert to create things
 */

// Classes can be declared anywhere, inside functions, inside classes, and inside classes inside function inside classes
// There is no difference between a struct and a class. The only difference is public vs private variables
class C1 {
    struct C2 {
        class C3 {
            int i;
            void print_i() { std::cout << i << std::endl; }
        };
    };
    std::string zed = "zed";
    static void print_type() { std::cout << "C1" << std::endl; }
    void print_zed() { std::cout << zed << std::endl; }
};

// Constructors, getters, setters and comparisons
inline void e6() {
    C1 c1;
    // Create a constructor in the class C1 that initializes the integer i. So that the constructor is C1(c) will set the int i to c;
    // Remember that constructors and destructors need to be public

    // Implement the get function C1.get_i(i);

    // Implement the set function C1.set_i(i);

    // Create a comparison function so that C1 a > C1 b if C1.C2.C3.i > C1.C2.C3.i
}

// Implicit construction and default destruction
inline void e7() {
    C1 c1;
    // Implicit construction. If you have created a constructor with a single argument, you automatically have an implicit construction ability
    // Create a vector of C1 and insert the number 0 into the vector. You will automatically create an object of type C1
    // To disable this ability of implicit construction using c++, simply use the explicit keyword before the constructor to prevent this from happening

    // Default destruction: If you use a default destructor it will automatically clean up all non-pointer types. Implement a default destructor in the class C1
}

// Inheritance
inline void e8() {
    // Create a class C0 inside this function that inherits from C1. This class will have a constructor with zero arguments and initialize the value i to 7

    // Print out this class C0 c0; c0.print_i();

    // Add a print_type to the C0 class, and print out C0 instead of C1

    // Now call the C0 static implementation of print_type. so print C1. Using something like C0::C1::print_type();

    // Turn the print_zed function into a virtual one. Now create an override function in class C0 which prints zee instead of zed
}