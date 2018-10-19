//
//  main.cpp
//  array
//
//  Created by sunyifeng on 2018/10/17.
//  Copyright © 2018 sunyifeng. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

/*用指针遍历数组*/
int main(int args, const char *agrv[]) {
    const size_t arr_size = 5;
    int   int_arr[arr_size] = {0, 1, 2, 3, 4};
    //数组不提供begin()、end()
    for (int *pbegin = int_arr, *pend = int_arr + arr_size;
             pbegin != pend;
             ++pbegin
         ){
        cout << *pbegin << endl;
    }
}

/*数组名称即第一个元素的指针*/
int _main(int argc, const char * argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    //数组名前面不用&
    int *p1 = arr;
    //数组名*arr与*ps等价
    cout << "指针*p1的地址：" << p1 << "\n"
         << "指针*p1的内容：" << *p1 << "\n"
         << "数组arr的地址：" << arr << "\n"
         << "数组arr的内容：" << *arr << "\n"
         << endl;
    //指针的算术操作
    int *p2 = arr + 2;
    cout << "---------------\n"
         << "指针*p2的地址：" << p2 << "\n"
         << "指针*p2的内容：" << *p2 << "\n"
         << endl;
    return 0;
}
