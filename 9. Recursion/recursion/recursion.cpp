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

// Complexity: O(N), where N = size(a) + size(b)
IntList merge(const IntList& a, const IntList& b)
{
    if (is_empty(a)) {
        return b;
    }
    if (is_empty(b)) {
        return a;
    }
    if (first(a) < first(b)) {
        return cons(first(a), merge(rest(a), b));
    }
    return cons(first(b), merge(a, rest(b)));
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

// Complexity: O(N log N)
IntList binary(int n)
{
    if (n == 0) {
        return IntList {};
    } else {
        return cons_end(n % 2, binary(n / 2));
    }
}
