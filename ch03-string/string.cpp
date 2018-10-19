//
//  reference.cpp
//  c-primer
//
//  Created by sunyifeng on 2018/10/17.
//  Copyright © 2018 sunyifeng. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using std::cout;

int main(int agrs, const char *argv[]){
    int ival1 = 1024;
    int &refVal1 = ival1;
    //int &refVal2; // 引用必须要初始化
    //int &refval3 = 10; // 引用必须是对象
    
    cout<<ival1<<"\n";
    refVal1 += 2;
    cout<<ival1<<"\n";
    
    int ival2 = refVal1;
    cout<<"ival2:"<<ival2<<"\n";
    ival2 += 2;
    cout<<"ival2:"<<ival2<<"\n";
    cout<<"ival:"<<ival1<<"\n";
    return 0;
}


