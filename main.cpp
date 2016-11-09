#include <iostream>
#include "util/test_header/base_test.h"
#include "util/test_header/self_string_test.h"
#include "util/test_header/common_test.h"

int main() {
    BaseTest *test = NULL;

//    test = new SelfStringTest;
//    test->solution();
//    delete test;

    test = new CommonTest;
    test->solution();
    delete test;
    return 0;
}