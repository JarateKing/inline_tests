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

The `inline_tests` above will verify that with input `"1"` we get output `"2"`, input `"5"` gives us output `"10"`, and so on. These are all valid, so the program runs as usual.

If we instead something like:

```cpp
inline_tests {
    testcase("1", "100")
};
```

Where the code's output does not match the testcase given, we will see the following printed to stdout:

```
Wrong Answer at testcase 1, expected:
100
Got:
2
```

## Motivation

For most general development, you might prefer to have different testcases for specific functions that exist in different files.

In competitive programming, that process can be bulky and annoying and overly complicated. Usually, it's preferable to come with a few specific testcases and verify that the input provided equals the desired output. Generally it's easier to have everything in front of you and clearly editable, rather than having to fiddle with multiple files. Because maintainability is essentially ignored and speed to write is vital, these priorities are very different from regular software development.

`inline_tests` was designed specifically for this. Everything can be included in one file and testcases can be quickly added or edited without any hassle.
