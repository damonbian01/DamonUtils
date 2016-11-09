//
// Created by Damon on 2016/11/9.
//

#ifndef DAMONUTILS_SELF_STRING_TEST_H
#define DAMONUTILS_SELF_STRING_TEST_H
#include <iostream>
#include <vector>
#include "base_test.h"
#include "../header/self_string.h"

class SelfStringTest : public BaseTest {
public:
    void solution() override {
        using namespace std;
        cout << "self_string_test" << endl;
        string name = "123df a fs fs fdsa";
        vector<string> result = self::self_string::split(name);
        cout << name << endl;
        cout << result.size() << endl;
        vector<string>::iterator iter;
        for (iter = result.begin(); iter != result.end(); iter++) {
            cout << *iter << endl;
        }
    };
};
#endif //DAMONUTILS_SELF_STRING_TEST_H
