#include "stdafx.h"

typedef struct stack {
    char *data;
    int top;
}*Stack;

Stack initStack()
{
    Stack s = new stack;
    s->data = new char[20];//括号数量不定，max=20
    s->top = -1;
    return s;
}

bool push(Stack s, char e)
{
    if (s->top >= 20) return false;
    s->top = s->top + 1;
    s->data[s->top] = e;
    return true;
}
bool pop(Stack s)
{
    if (s->top == -1) return false;
    //e = s->data[s->top];
    s->top = s->top - 1;
    return true;
}

bool isValid(string s) {
    Stack stack = initStack();
    for (int i = 0; i < s.size(); i++) {
        switch (s[i])
        {
        case '{':
        case '[':
        case '(':
            push(stack, s[i]);
            continue;
        case '}':
            if (stack->data[stack->top] == '{') {
                pop(stack);
            } else {
                return false;
            }
            continue;
        case ']':
            if (stack->data[stack->top] == '[') {
                pop(stack);
            } else {
                return false;
            }
            continue;
        case ')':
            if (stack->data[stack->top] == '(') {
                pop(stack);
            } else {
                return false;
            }
            continue;
        default:
            continue;
        }
    }
    if (stack -> top != -1) {
        return false;
    }
    return true;
}