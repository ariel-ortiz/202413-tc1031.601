#include <iostream>
#include "stack.h"

// Time complexity: O(N)
bool is_palindrome(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c : input) {
        s.push(c);
    }

    for (char c : input) {
        if (c != s.pop()) {
            return false;
        }
    }

    return true;
}

bool is_balanced(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c : input) {
        switch (c) {
            case '(':
            case '[':
            case '{':
                s.push(c);
                break;
            case ')':
                if (s.is_empty() or s.pop() != '(') {
                    return false;
                }
                break;
            case ']':
                if (s.is_empty() or s.pop() != '[') {
                    return false;
                }
                break;
            case '}':
                if (s.is_empty() or s.pop() != '{') {
                    return false;
                }
                break;
        }
    }
    return s.is_empty();
}

int main()
{
    // Stack<int> s1(3);
    // std::cout << "s1.size() = " << s1.size() << "\n";
    // std::cout << "s1.capacity() = " << s1.capacity() << "\n";
    // s1.push(10);
    // s1.push(15);
    // s1.push(20);
    // std::cout << "s1.size() = " << s1.size() << "\n";
    // std::cout << "s1.capacity() = " << s1.capacity() << "\n";
    // try {
    //     s1.push(30);
    // } catch (std::overflow_error err) {
    //     std::cout << "¡Ups!\n";
    // }
    // std::cout << "s1.peek() = " << s1.peek() << "\n";
    // std::cout << "s1.pop() = " << s1.pop() << "\n";
    // std::cout << "s1.size() = " << s1.size() << "\n";
    // std::cout << "s1.capacity() = " << s1.capacity() << "\n";
    // std::cout << "s1.pop() = " << s1.pop() << "\n";
    // std::cout << "s1.is_empty() = " << s1.is_empty() << "\n";
    // std::cout << "s1.pop() = " << s1.pop() << "\n";
    // std::cout << "s1.size() = " << s1.size() << "\n";
    // std::cout << "s1.capacity() = " << s1.capacity() << "\n";
    // std::cout << "s1.is_empty() = " << s1.is_empty() << "\n";

    // s1.push(1);
    // s1.push(2);
    // std::cout << "s1.size() = " << s1.size() << "\n";
    // std::cout << "s1.capacity() = " << s1.capacity() << "\n";
    // s1.clear();
    // std::cout << "s1.size() = " << s1.size() << "\n";
    // std::cout << "s1.capacity() = " << s1.capacity() << "\n";

    std::cout << "is_palindrome(\"ana\") = " << is_palindrome("ana") << "\n";
    std::cout << "is_palindrome(\"anita\") = " << is_palindrome("anita") << "\n";
    std::cout << "is_balanced(\"()\") = " << is_balanced("()") << "\n";
    std::cout << "is_balanced(\"[()()()]\") = " << is_balanced("[()()()]") << "\n";

    return 0;
}

