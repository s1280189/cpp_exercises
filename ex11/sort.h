#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <cmath>
#include <cctype>
#include<utility>

namespace PL4 {
    template <class BiDirlt>
    BiDirlt prev_iter(BiDirlt it)
    {
    return --it;
    };
    
    template<class BiDirlt> void sort(BiDirlt begin, BiDirlt end){
        auto i=begin;
        i++;
        while(i!=end){
            auto j=i;
            while(j != begin && *(prev_iter(j)) > *j){
                auto temp = *j;
                *j = *(prev_iter(j));
                *(prev_iter(j))=temp;
                j--;
            }
            i++;
        }
    }
}

#endif
