#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T& x)
{
    std::cout << x << std::endl;
}

template <typename T>
void increment(T& x)
{
    x++;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    const int constArr[] = {10, 20, 30};

    std::cout << "Original array:" << std::endl;
    iter(arr, 5, print<int>);

    iter(arr, 5, increment<int>);

    std::cout << "\nAfter increment:" << std::endl;
    iter(arr, 5, print<int>);

    std::cout << "\nConst array:" << std::endl;
    iter(constArr, 3, print<int>);

    return 0;
}