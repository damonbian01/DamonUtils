//
// Created by Damon on 2016/11/9.
//

#ifndef DAMONUTILS_SELF_PRINT_H
#define DAMONUTILS_SELF_PRINT_H

#include <iostream>

using namespace std;
namespace self {
    class SelfPrint {
    public:
        void static print(int *array, int len) {
            for (int i = 0; i < len; i++) {
                cout << *(array + i) << " ";
            }
            cout << endl;
        }
    };
}

#endif //DAMONUTILS_SELF_PRINT_H
