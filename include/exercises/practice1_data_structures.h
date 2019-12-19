#pragma once

/**
 * Data Stucture Review. Understand the 4 basic data structures
 *
 * sets, unordered_set, maps and unordered_map are all c++ container types
 * http://www.cplusplus.com/reference/stl/
 */

// C is a B is an A
class A { int j = 0; };
class B : public A {};
class C : public B {};

// Vectors, static casting and dynamic casting
#include <vector>
#include <type_traits>
inline void e0() {
    // 1. Create a vector that contains 2 class A*, 2 class B*, 2 class C*

    // 2. Iterate through the vector and print "True" if type of class is a type B (Use std::base_of)
    // print "False if class is type B but not type C (Use typeof())
    // There are 3 ways of iterating through a vector.
    // for (size_t i = 0; i < vector.size(); ++i) vector[i];
    // for (const int& i : vector) vector[i];
    // for (auto it = vector.begin(); it != vector.end(); ++it) { *it }
    // Note that the ampersand after the type in the 2nd and 3rd way tell us whether to copy or use the reference
    // Use the 3rd way to iterate through a vector for this example, using const&

    // 3. Use the 2nd way to iterate the vector

    // 4. Loop over the vector and dynamically up cast all of the class B* into class C*

    // 5. Loop over the vector and statically downcast all of the class C* to class A*

}

// A set is binary tree that reorganizes itself overtime, it is useful when you want to store things in alphabetical order without using sort
#include <set>
inline void e1() {
    // Create a set of chars, and in them put the characters z to a in the order

    // Print out the chars, notice that they are in alphabetical order
}

// Basically a hashtable with O(1) insert, delete and remove, useful for literally everything
#include <unordered_set>
inline void e2() {
    // Repeat the same as e1, now notice they are not in alphabetical order
}

// Basically a set, but with a mapping to a value
#include <map>
inline void e3() {
    // Create a Map of class A -> class B mappings, notice that you need to create the comparison operator in order for this to work because the class needs to be sorted. Use j as the comparison
}


#include <unordered_map>
inline void e4() {
    // Create a Unordered Map of class A -> class B mappings, notice that you need to create the hash operator in order for this to work because the class needs to be sorted. Use j as the hash value
}

#include <stack>
#include <queue>
inline void e5() {
    // Create a stack of queues of stacks of class A. And insert into that stack of queues of stacks. Used abundantly in sorting algorithms
}