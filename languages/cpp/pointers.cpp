#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40};

    int* p = &arr[1];   // pointer to 2nd element

    cout << *p << endl; // value
    cout << p << endl;  // address

    return 0;
}
