#include <iostream>
#include <thread>
#include <vector>

int global_counter = 0;

const int INCREMENTS_PER_THREAD = 10000;

void increment_counter() {
    for (int i = 0; i < INCREMENTS_PER_THREAD; ++i) {
        global_counter++; 
    }
}

int main() {
    std::cout << "--- Race Condition Demonstration ---" << std::endl;
    std::cout << "Initial Counter: " << global_counter << std::endl;

    std::vector<std::thread> threads;

    threads.emplace_back(increment_counter);
    threads.emplace_back(increment_counter);
    

    for (auto& t : threads) {
        t.join();
    }

    std::cout << "Expected Final Counter: " << (2 * INCREMENTS_PER_THREAD) << std::endl;
    std::cout << "Actual Final Counter:   " << global_counter << std::endl;

    // The actual value will almost certainly be less than 20000
    if (global_counter != 2 * INCREMENTS_PER_THREAD) {
        std::cout << "\n❌ RACE CONDITION OCCURRED! Data is corrupted." << std::endl;
    } else {
        std::cout << "\n✅ RARE OCCURRENCE: The race condition was avoided by luck this time." << std::endl;
    }

    return 0;
}