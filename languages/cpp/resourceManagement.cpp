/*
====================================================
RESOURCE MANAGEMENT IN C++ (RAII TEMPLATE)
====================================================

KEY IDEA:
---------
A resource is anything that must be acquired and
released after use.

Examples:
- Memory
- File handles
- Threads
- Locks
- Network sockets

C++ uses RAII:
Resource Acquisition Is Initialization

Meaning:
- Constructor  -> acquire resource
- Destructor   -> release resource
- No manual cleanup in application code

Why RAII?
---------
✔ Prevents memory/resource leaks
✔ Exception safe
✔ No garbage collector needed
✔ Works for ALL resources (not just memory)
✔ Cleaner and maintainable code
*/

#include <bits/stdc++.h>
using namespace std;

/*
----------------------------------------------------
1) RAII EXAMPLE: MEMORY (vector)
----------------------------------------------------
- vector owns memory
- Memory released automatically
- Returned by MOVE (cheap)
*/

vector<int> createVector(int n)
{
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        v[i] = 777;

    return v;  // moved, NOT copied
}

/*
----------------------------------------------------
2) RAII EXAMPLE: FILE HANDLING
----------------------------------------------------
- File acquired in constructor
- File released in destructor
*/

void writeFile()
{
    ofstream file("data.txt");  // resource acquired
    file << "Hello RAII!";
} // file automatically closed here

/*
----------------------------------------------------
3) MOVE SEMANTICS (IMPORTANT)
----------------------------------------------------
Some resources:
- Cannot be copied (thread)
- Should not be copied (large data)

Solution: MOVE ownership
*/

vector<thread> threads;

void heartbeat()
{
    while (true) {}
}

void startThread()
{
    thread t(heartbeat);        // resource acquired
    threads.push_back(move(t)); // ownership moved
    // t no longer owns the thread
}

/*
----------------------------------------------------
4) SMART POINTER (RESOURCE HANDLE)
----------------------------------------------------
- unique_ptr = single owner
- Automatically deletes resource
*/

void smartPointerExample()
{
    unique_ptr<int> p = make_unique<int>(10);
} // memory automatically freed

/*
----------------------------------------------------
5) WHY RAII > GARBAGE COLLECTION
----------------------------------------------------
RAII:
✔ Local cleanup
✔ Predictable
✔ Handles memory, files, locks, threads
✔ High performance

Garbage Collection:
✘ Global
✘ Non-deterministic
✘ Only memory
*/

int main()
{
    auto v = createVector(1000000); // large object moved
    writeFile();
    startThread();
    smartPointerExample();

    return 0;
}

/*
----------------------------------------------------
FINAL TAKEAWAY:
----------------------------------------------------
- Avoid new / delete
- Use RAII objects
- Prefer move over copy
- Let destructors clean up resources

Modern C++ = NO LEAKS, NO MANUAL CLEANUP
====================================================
*/
