//
// Created by Damon on 2016/11/9.
//

#ifndef DAMONUTILS_COMMON_TEST_H
#define DAMONUTILS_COMMON_TEST_H

#include <iostream>
#include <algorithm>
#include "base_test.h"
#include "../header/self_print.h"

using namespace std;

class CommonTest : public BaseTest {
public:
    virtual void solution() override {

        cout << "Common test" << endl;
        testSort();
    }

    void testSort() {
        int array[] = {13, 5, 2, 7, 9, 87, 34, 67, 23, 678, 34, 23};
        int len = sizeof(array) / sizeof(int);
        self::SelfPrint::print(array, len);
        sort(array, array + len);
        sort(begin(array), end(array));
        self::SelfPrint::print(array, len);
        sort(begin(array), end(array), compare);
        self::SelfPrint::print(array, len);
    }

    // 比较函数得声明为static
    bool static compare(int a, int b) {
        // 降序
        return a > b;
    }
};

#endif //DAMONUTILS_COMMON_TEST_H
