//
//  main.cpp
//  c-primer
//
//  Created by sunyifeng on 2018/10/16.
//  Copyright © 2018 sunyifeng. All rights reserved.
//

#include <iostream>
using std::cout;
using std::string;

//指针和引用和的区别
int main(int argc, const char *agrv[]) {
    string s("hello word!");
    string *sp = &s;
    //输出指针
    cout << sp << "\n";
    //输出引用
    cout << *sp << "\n";
    
    return 0;
}

//验证指针
int _main(int argc, const char *argv[]) {
    
    // 定义两个变量
    int ival1 = 1024, ival2 = 2048;
    // 定义两个指针
    int *pi1 = &ival1, *pi2 = &ival2;
    
    // 赋值前，打印指针的值
    cout << pi1 << "\t" << pi2 << "\n";
    pi1 = pi2;
    // 赋值后，打印指针的值
    cout << pi1 << "\t" << pi2 << "\n";
    
    // 打印两个整数
    cout << ival1 << "\t" << ival2 << "\n";
    // 定义两个指针
    int &ri1 = ival1, &ri2 = ival2;
    cout << ri1 << "\t" << ri2 << "\n";
    ri1 = ri2;
    cout << ri1 << "\t" << ri2 << "\n";
    
    return 0;
}



