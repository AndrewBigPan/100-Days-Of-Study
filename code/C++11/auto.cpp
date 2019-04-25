
//  @file auto.cpp
//  @author AndrewBigPan
//  @date 2019/04/25
//  @brief

#include <iostream>

int main() {

    auto a = 1;
    auto b = 1.0;
    auto c = 'c';
    auto s = "s";

    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(s).name() << std::endl;
    
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
