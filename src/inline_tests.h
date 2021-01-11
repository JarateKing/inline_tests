#ifdef INLINE_TESTS
int main();
// handle testcases by redirecting IO
int testcase_counter = 1, assertion_counter = 1;
void testcase_internal(string in, string answer) {
    stringstream input(in), output;
    streambuf* oldIn = cin.rdbuf(input.rdbuf());
    streambuf* oldOut = cout.rdbuf(output.rdbuf());
    main();
    cin.rdbuf(oldIn);
    cout.rdbuf(oldOut);
    string out = output.str();
    out = regex_replace(out, std::regex("\\s{2,}"), " ");
    out = regex_replace(out, std::regex("\\s*$"), "");
    answer = regex_replace(answer, std::regex("\\s{2,}"), " ");
    answer = regex_replace(answer, std::regex("\\s*$"), "");
    if (out != answer)
        cout << "Wrong Answer at testcase " << testcase_counter << ", expected:\n" << answer << "\nGot:\n" << out << "\n\n";
    testcase_counter++;
}
// handle assertions
template <typename func>
void assert_internal(func f) {
    if (!f())
        cout << "Assertion " << assertion_counter << " failed\n";
    assertion_counter++;
}
#define inline_tests const bool inline_testcases[] = 
#define testcase(a,b) [](){ testcase_internal(a,b); return true; }()
#define assertion(a) [](){ assert_internal([]()->bool{return (a);}); return true; }()
#else
#define inline_tests const bool inline_testcases[] =
#define testcase(a,b) true
#define assertion(a) true
#endif
