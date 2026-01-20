//a virtual function is a member function of a class that is declared using the keyword virtual and is meant to be overridden in a derived class.
//It supports runtime polymorphism, meaning the function call is resolved at runtime based on the object type, not the pointer type.

void use(Container& c)
// This function does not know:
// -whether c is a Vector_container
// -or a List_container
//Still does this: c[i]
// 2️⃣ What actually happens at runtime?

// When use() is running:
// Sometimes c refers to a Vector_container
// Sometimes it refers to a List_container
// C++ decides at runtime (not at compile time) which version to call.

// This is called runtime polymorphism.
// every class that has virtual functions has a hidden table called:

// 📌 Virtual Table (vtbl)
// Think of it like a menu card inside the object.
//C++ uses a virtual table (vtbl) to decide at runtime which virtual function to call, based on the actual object type, even when accessed through a base class reference.

//without virtual function
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is Base class show function\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class show function\n";
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();   // Calls Base version
}

//with virtual function
class Base {
public:
    virtual void show() {
        cout << "This is Base class show function\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class show function\n";
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();   // Calls Derived version
}

class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;
  Dog d;
  a = &d;
  a->sound(); // Outputs: Dog barks
  return 0;
}
