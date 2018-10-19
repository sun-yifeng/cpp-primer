//
//  main.cpp
//  function
//
//  Created by sunyifeng on 2018/10/19.
//  Copyright © 2018 sunyifeng. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

/*函数参数为指针类型：
  1、指针*p相当于java中的方法参数传引用；
  2、指针的内容是可以改变的，但是指针的地址不变；
  3、形参复制的是实参的地址，不是内容。
 */
void reset(int *ip){
    int p1 = 9;
    cout << "赋值之前 *ip:" << *ip << " ip:" << ip << "\n";
    *ip = 0;   //ip=0 指针赋值为0，则不指向任何对象（未初始化的指针），会导致程序崩溃P102
     //ip = &p1; //ip=0 指针赋值为0，则不指向任何对象（未初始化的指针），会导致程序崩溃P102
    cout << "赋值之后 *ip:" << *ip << " ip:" << ip << "\n";
}
//调用指针参数
int main(int argc, const char * argv[]) {
    int i = 2;
    int *p = &i;
    cout << "i:" << *p << " p:" << p << '\n';
    reset(p);
    cout << "i:" << *p << " p:" << p << endl;
    return 0;
}
