#pragma once

// All the data structure you have done before involved templates vector<int>(), where <> is the template type. Now lets create one

// A template class looks like this
template <class T>
class TemplateClass {
public:
    T t;
};

inline void e11() {
    // Now the type TemplateClass has a type int
    TemplateClass<int> ti;
    ti.t = 1;

    // Now the type TemplateClass has a type float
    TemplateClass<float> tf;
    tf.t = 1.0f;

    // Exercise: Create the get, set and constructor for this type T

    // Exercise: Modify the template so it contains a vector of type T as well inside the class

    // Exercise: Modify the template so it has type template argumnets, <class T, class U> and create a std::map that maps from class T to U

    // Exercise: The std::map only allows sortable types. Create a static_assert in the function constructor to only allow two types of T, int and float

    // Bonus: Define a TemplateClass with TemplateClasses of int. TemplateClass<TemplateClass<int>> w
}