# inline_tests

`inline_tests` is a minimal header-only testing framework designed for competitive programming

## Usage

Let's consider a simple example where we have a problem that wants us to read in a number, multiply it by 2, and then print it out.

```cpp
#include <bits/stdc++.h>
using namespace std;

#define INLINE_TESTS
#include "../src/inline_tests.h"

int main() {
    int n;
    cin >> n;
    cout << n * 2 << '\n';
}

inline_tests {
    testcase("1", "2"),
    testcase("5", "10"),
    testcase("10", "20"),
    testcase("0", "0")
};
```
