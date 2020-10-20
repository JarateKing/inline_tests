#include <bits/stdc++.h>
using namespace std;

// make use of inline_tests
#define INLINE_TESTS
#include "../src/inline_tests.h"

int main() {
    int a;
    cin >> a;
    cout << a << '\n';
}

inline_tests {
    testcase("1", "2")
    testcase("true", "false")
    assertion(1 == 2)
    assertion(false)
};
