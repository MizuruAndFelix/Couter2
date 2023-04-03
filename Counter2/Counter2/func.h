#pragma once
class Counter
{
private:
    int num = 0;
public: 
    int increase();
    int decreace();
    int show();
    Counter(int num_);
};