//Concept
// A template is like a blueprint or formula.

// 👉 Instead of writing the same code again and again for different data types (int, double, string, etc.),
// you write the code once, and C++ generates the required version automatically.

// Imagine this problem:

// You want a Vector of double
// You also want a Vector of int
// Then a Vector of string
// Without templates, you would need three separate classes.
template<typename T>
class Vector {
    T* elem;   // pointer to elements of type T
    int sz;
};


/* -------- CLASS TEMPLATE -------- */
template<typename T>
class Box {
private:
    T value;

public:
    Box(T v) {
        value = v;
    }

    void show() {
        cout << "Value: " << value << endl;
    }
};

/* -------- FUNCTION TEMPLATE -------- */
template<typename T>
T add(T a, T b) {
    return a + b;
}

/* -------- MAIN FUNCTION -------- */
int main() {
    // Using class template
    Box<int> b1(10);
    Box<double> b2(3.14);
    Box<string> b3("Hello");

    b1.show();
    b2.show();
    b3.show();

    cout << endl;

    // Using function template
    cout << "Add ints: " << add(2, 3) << endl;
    cout << "Add doubles: " << add(2.5, 3.5) << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

/* =====================================================
   1. FUNCTION OBJECT (FUNCTOR)
   ===================================================== */

// This class behaves like a function
template<typename T>
class Less_than {
    T value;   // value to compare with

public:
    Less_than(T v) : value(v) {}

    // This makes the object callable like a function
    bool operator()(T x) const {
        return x < value;
    }
};

/* =====================================================
   2. GENERIC COUNT FUNCTION
   ===================================================== */

// Counts elements for which pred(x) is true
template<typename Container, typename Predicate>
int my_count(const Container& c, Predicate pred) {
    int cnt = 0;
    for (const auto& x : c) {
        if (pred(x))
            cnt++;
    }
    return cnt;
}

/* =====================================================
   3. VARIADIC TEMPLATE (PRINT ANYTHING)
   ===================================================== */

// Base case
void print_all() {
    cout << endl;
}

// Recursive case
template<typename T, typename... Rest>
void print_all(T first, Rest... rest) {
    cout << first << " ";
    print_all(rest...);
}

/* =====================================================
   MAIN FUNCTION
   ===================================================== */

int main() {

    /* ---------- FUNCTOR EXAMPLE ---------- */
    Less_than<int> less_than_10(10);

    cout << less_than_10(5) << endl;   // true (1)
    cout << less_than_10(20) << endl;  // false (0)


    /* ---------- USING FUNCTOR WITH COUNT ---------- */
    vector<int> v = {1, 5, 10, 20, 3};

    int c1 = my_count(v, Less_than<int>(10));
    cout << "Numbers < 10: " << c1 << endl;


    /* ---------- SAME THING USING LAMBDA ---------- */
    int x = 10;

    int c2 = my_count(v, [&](int a) {
        return a < x;
    });

    cout << "Numbers < 10 (lambda): " << c2 << endl;


    /* ---------- VARIADIC TEMPLATE ---------- */
    print_all(1, 2.5, "hello", 'A', 100);

    return 0;
}
