#include "stdafx.h"

int
num_length(int num)
{
    int count = 0;
    if (num == 0) {
        return 1;
    }
    while (1) {
        count++;
        num = num / 10;
        if (num == 0) {
            return count;
        }
    }
}
int
reverse_num(int num)
{
    long long sum = 0;
    int i;
    long long anum, bnum;
    int l = num_length(num);
    for (i = 1; i < l + 1; i++) {
        anum = num % 10;
        bnum = anum* pow(10, l - i);
        sum = sum + bnum;
        //sum = sum + num % 10 * pow(10, l - i);
        num = num / 10;
    }
    return (sum<INT_MIN||sum>INT_MAX) ? -1:sum;
}