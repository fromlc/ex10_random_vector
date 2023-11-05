//------------------------------------------------------------------------------
// ex10_random_vector.cpp
// 
// - store a random number of int elements in a vector
// - make each vector element a random number
// - display vector elements
//------------------------------------------------------------------------------
#include <iostream>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int MAX = 25;
constexpr int MIN = 5;
constexpr int RANGE = MAX - MIN + 1;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    // different random number of vector elements each run
    srand((unsigned int)time(0));

    vector<int> vi;

    int num_elements = (rand() % RANGE) + MIN;
    cout << "\nNumber of vector elements: " << num_elements << '\n';

    // each element an unscoped random number
    for (int i = 0; i < num_elements; i++) {
        vi.push_back(rand());
    }

    // display
    for (int i : vi) {
        cout << '\n' << i;
    }
    cout << "\n\n";

    // just for fun, what's the biggest random number with MSVC on x64 PC?
    cout << "Biggest random number: " << RAND_MAX << "\n\n";

    return 0;
}
