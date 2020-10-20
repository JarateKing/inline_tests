#include <bits/stdc++.h>
using namespace std;

// make use of inline_tests
#define INLINE_TESTS
#include "../src/inline_tests.h"

// a simple function
int solve(int a) {
    return a + 10;
}

// our main method, read in a number and print it +10
int main() {
    int a;
    cin >> a;
    cout << solve(a) << '\n';
}

// our testcases go here, below everything else
// the `testcase`s take a string to use as stdin, and verify that the program stdout equals the second string
// the `assertion`s verify that the conditional is true

inline_tests {
    testcase("5", "15"),
    testcase("15", "25"),
    assertion(solve(10) == 20),
    assertion(solve(0) == 10)
};
