#include "stdafx.h"

bool
isPalindrome(int x)
{
    int l = num_length(x);
    int num1, num2;

    for (int i = 1; i <= l / 2; i++) {
        if (i == 1) {
            num1 = x / pow(10, (l - i));
        } else {
            num1 = x / pow(10, (l + 1 - 2 * i));
        }
        
        num2 = (x % 10);
        if (num1 != num2) {
            return false;
        }
        int n = pow(10, (l - 2 * i));
        x = x / 10 % n;
    }
    return true;
}