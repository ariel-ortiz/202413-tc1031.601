#include "intlist.h"
#include "recursion.h"

// Complexity: O(N)
int size(const IntList& a)
{
    if (is_empty(a)) {
        return 0;
    } else {
        return 1 + size(rest(a));
    }
}

// Complexity: O(N)
IntList cons_end(int value, const IntList& a)
{
    if (is_empty(a)) {
        return cons(value, a);
    } else {
        return cons(first(a), cons_end(value, rest(a)));
    }
}

// Complexity: O(N)
int sum(const IntList& a)
{
    if (is_empty(a)) {
        return 0;
    } else {
        return first(a) + sum(rest(a));
    }
}

// Complexity: O(N)
IntList duplicate(const IntList& a)
{
    if (is_empty(a)) {
        return a;
    } else {
        return cons(first(a), cons(first(a), duplicate(rest(a))));
    }
}

// Complexity: O(N)
int last(const IntList& a)
{
    if (is_empty(rest(a))) {
        return first(a);
    } else {
        return last(rest(a));
    }
}

IntList but_last(const IntList& a)
{
    return IntList {};
}

int maximum(const IntList& a)
{
    return 0;
}

IntList append(const IntList& a, const IntList& b)
{
    return IntList {};
}

IntList repeat(int n, int value)
{
    return IntList {};
}

IntList reverse(const IntList& a)
{
    return IntList {};
}

IntList merge(const IntList& a, const IntList& b)
{
    return IntList {};
}

bool is_prefix(const IntList& a, const IntList& b)
{
    return false;
}

IntList insert(int value, const IntList& a)
{
    return IntList {};
}

IntList insertion_sort(const IntList& a)
{
    return IntList {};
}

IntList binary(int n)
{
    return IntList {};
}
