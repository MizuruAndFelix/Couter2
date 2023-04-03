#include <iostream>
#include "func.h"
using namespace std;

int Counter::increase()
{
    return ++num;
}

int Counter::decreace()
{
    return --num;
}

int Counter::show()
{
    std::cout << num << endl;
    return num;
}
Counter::Counter(int num_)
{
    num = num_;
}