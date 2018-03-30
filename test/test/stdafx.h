// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <math.h>
#include <limits.h>
#include <string>
#include <vector>
using namespace std;


// TODO:  在此处引用程序需要的其他头文件
int num_length(int num);
int reverse_num(int num);
bool isPalindrome(int x);
int romanToInt(string s);
string prefix(vector<string> &str);
bool isValid(string s);