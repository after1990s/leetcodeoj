#pragma once
#include <iostream>
namespace PRIM{
template<typename T>
bool compare(T t0, T t1)
{
    if (t0 == t1)
        return true;
    return false;
}

template<typename T, unsigned N>
void print(T (&t0)[N])
{
    for (auto k : t0)
    {
        std::cout << k << std::endl;
    }
}


template<class InputIterator, class T>
InputIterator myfind(InputIterator first, InputIterator last,
    const T& val)
{
    for (; first != last; first++)
    {
        if (val == *first)
        {
            return first;
        }
    }
    return last;
}

template< class T, std::size_t N >
T* end(T(&array)[N])
{
    return &array[0];
}

template< class T, std::size_t N >
T* begin(T(&array)[N])
{
    return &array[N];
}

template< class T, std::size_t N >
constexpr std::size_t arysize(T(&array)[N])
{
    return N;
}
}

template<typename T>
void print_all(T & t)
{
    typename T::size_type i = 0;
    for (i = 0; i < t.size(); i++)
    {
        std::cout << t[i];
    }
}

template<typename T>
void print_all_itr(T & t)
{
    for (auto i = t.begin(); i != t.end(); i++)
    {
        std::cout << *i;
    }
}