//
//  main.cpp
//  c-primer
//
//  Created by sunyifeng on 2018/10/16.
//  Copyright © 2018 sunyifeng. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
using std::string;

// 指针的指针
int main(int args, const char *argv[]) {
    int val1 = 1024;
    int *p1 = &val1;
    int **p2 = &p1;
    int *p3 = *p2;
    
    cout << "The value of ival1\n"
    << "direct value:" << val1 << "\n"
    << "indirect value:" << *p1 << "\n"
    << "doubly indirect value:" << **p2 << "\n"
    << "p2:" << p2 << "\n"
    << "*p3:" << *p3 << "\n"
    << endl;
    return 0;
}

// 指针、解引用，两者的关系
int main3(int args, const char *argv[]) {
    string p1("hello");
    cout << p1 << "\t" << p1 << "\n";
    return 0;
    
}

/*指针（*, &）、解引用*、引用&，三者的区别*/
int main2(int argc, const char *agrv[]) {
    string s("hello word!");
    //*号操作符表示sp1是一个指针变量
    string *sp1 = &s;
    //输出指针
    cout << "输出指针：" << sp1 << "\n";
    //输出引用
    cout << "输出指针：" << *sp1 << "\n";
    
    return 0;
}

//4.2.2.4指针可以取得值
int main1(int argc, const char *agrv[]) {
    int val1 = 1024;
    int *p1 = 0; // TODO 指针保存为0，表示不指向任何值，后面使用该指针（打印）程序崩溃
    //cout << p1 << "\t" << *p1 <<"\n";
    
    int *p2 = &val1;
    cout << p2 << "\t" << *p2 << "\n";
    
    int *p3; // 指针为初始化，运行打印*p3则程序崩溃
    //cout << p3 << "\t" << *p3 << "\n";
    
    p1 = p2;
    cout << p1 << "\t" << p2 << "\n";
    p2 = 0;
    cout << p1 << "\t" << p2 << "\n";
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



