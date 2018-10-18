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

/*数组名称默认指向第一个元素的指针*/
int main(int argc, const char * argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    int *ps = arr;
    // 数组名*arr与*ps等价
    cout << "指针的地址：" << ps << "\n"
         << "指针的内容：" << *ps << "\n"
         << "数组名地址：" << arr << "\n"
         << "数组名内容：" << *arr << "\n"
         << endl;
    return 0;
}
