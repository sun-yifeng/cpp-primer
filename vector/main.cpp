//
//  vector.cpp
//  c-primer
//
//  Created by sunyifeng on 2018/10/17.
//  Copyright © 2018 sunyifeng. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

//解引用操作符*在迭代器中的用法
int main(int args, const char *argv[]) {
    vector<int> nines(10, 9);
    //用下标来遍历vector
    cout << "用下标来遍历vector\n";
    for(vector<int>::size_type i = 0; i != 10; ++i) {
        cout << i << ":" << nines[i] << "\n";
    }
    //用迭代器遍历vector
    cout << "用迭代器遍历vector\n";
    for(vector<int>::iterator iter = nines.begin(); iter != nines.end(); ++iter) {
        //此处遍历迭代器的时候，必须使用解引用操作符*，否则报错
        cout << 1 << ":" << *iter << "\n";
    }
    return 0;
}


