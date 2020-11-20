// Copyright 2020 MIX-1 <danilonil1@yandex.ru>

#ifndef LAB_02_CACHE_CACHER_H
#define LAB_02_CACHE_CACHER_H
#include <iostream>
#include <ctime>
#include <vector>
#include <set>

using std :: cout;
using string = std :: string;

#endif //LAB_02_CACHE_CACHER_H

const int Experiment_Size[5] = {8192, 65536, 131072, 262144, 786432};
[[maybe_unused]] const string Experiment_Size_Name[5] = {
        "128 kb",
        "1 mb",
        "2 mb",
        "4 mb",
        "12 mb"
};
[[maybe_unused]] const string Experiment_Type[3] = {"Straight", "Reverse", "Random"};
const u_short Num_Investigation = 3;
const u_short Num_Experiment = 5;
const u_short Num_Repeat = 1000;
const u_short Num_Data_In_Line = 4;
const long Nanosec_In_Sec = 10e+9;


class Cacher {
public:
    enum Type {Straight, Reverse, Random};

    explicit Cacher(std::vector<Type>);

    Cacher() = delete;

    friend std::ostream& operator<<(std::ostream&, const Cacher&);

private:
    long duration[Num_Investigation][Num_Experiment];
};
