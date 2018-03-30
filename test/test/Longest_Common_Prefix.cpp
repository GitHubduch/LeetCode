#include "stdafx.h"


string prefix(vector<string> &str)
{
    int j = 0;
    string prestr;
    while (1) {
        if (str.size() == 0) return "";
        if (str.size() == 1) return str[0];
        for (int i = 0; i + 1 < str.size(); i++) {
            if (str[i][j] != str[i + 1][j] || str[i][j] == NULL) return prestr;
        }
        prestr = prestr + str[0][j];
        j++;
    }
}