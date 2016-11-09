//
// Created by Damon on 2016/11/8.
//

#ifndef DAMONUTILS_SELF_STRING_H
#define DAMONUTILS_SELF_STRING_H

#include <string>
#include <vector>

namespace self {
    class self_string {
    public:
        // 将字符串通过分隔符分开，返回字符串数组
        std::vector<std::string> static split(const std::string &, const std::string & = " ");
    };
}

std::vector<std::string> self::self_string::split(const std::string &str, const std::string &seperate) {
    std::vector<std::string> result;

    int begin = 0;
    int start = str.find(seperate);

    // 没有分隔符
    if (start == std::string::npos) {
        result.push_back(str);
        return result;
    }

    // 存在分隔符
    while (start != std::string::npos) {
        // 排除分隔符前面没有字符的情况
        if (begin < start) {
            std::string sub = str.substr(begin, start - begin);
            result.push_back(sub);
        }

        // 寻找下一个分隔符
        begin = start + seperate.size();
        start = str.find(seperate, begin);
    }

    // 最后一个分隔符到字符串末尾构成的子串
    if (begin < str.size()) {
        result.push_back(str.substr(begin));
    }
    return result;
}

#endif //DAMONUTILS_SELF_STRING_H
