//This covers types of classes are there and the modern C++ methods 
//1. Concerete class: designed to behave just like built-in types
// A. Arithmetic Types (Example: complex): Representation: It stores two doubles (re, im) directly.
// Efficiency: Simple operations (like constructors or getters) are defined inside the class, making them inline by default. This means they carry zero function-call overhead.
// Operators: You can define operators like +, -, and == to make the type intuitive to use (e.g., c = a + b).

// B. Containers (Example: Vector): A container holds a collection of elements. The example Vector illustrates RAII (Resource Acquisition Is Initialization).
// Problem: If you just allocate memory with new, you might forget to delete it, causing a leak.
// Constructor: Acquires the resource (allocates memory with new).
// Destructor (~Vector): Releases the resource (frees memory with delete[]).
// Usage: You create a Vector like an int. When it goes out of scope, the destructor cleans it up automatically. You never see "naked" new or delete in user code.

//Abstract defined class: Shape class
//Heirarchial class: circle is a derived class of parent shape

//Copy and Move
// 1. Copying means creating a duplicate of an object. 
// After copying, you have two identical objects that are independent of each other. 
// If you change one, the other stays the same.

// 2. Moving means transferring ownership of data from one object to another. 
// After moving, the original object is empty (or in a "valid but unspecified" state), and the new object holds the data. 
// This is much faster because you don't create new data; you just hand over the existing data.

#include<iostream>
#include<vector>
#include<utility>

using namespace std;

class wallet{
    vector<int> bills;

    wallet(vector<int> b) : bills(b) {}
};



int main()
{
    wallet mywallet({10, 20, 30});
    wallet backupWallet = myWallet;

    wallet thiefWallet = move(myWallet);

    return 0;
}