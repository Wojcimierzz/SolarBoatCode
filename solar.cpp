#include <iostream>
#include <list>
#include <limits.h>
using std::cout;
using std::cin;
using std::list;

/*
    1) Create a list of type int with some elements
    2) int can't be bigger than INT_MAX, so also the sum won't be bigger as well.
        Assign smallestSum to INT_MAX
    3) classical O^2 complexity algorithm, take element from the list and then check
        the sum with the each element of the list (excluding itself) 
    4) the i and j elements are  nodes' memory addresses so we dereference them 
        before comparing and adding
*/  

int main(){
    list<int> numbers = {1,5,18, 9, 2,5};
    
    int smallestSum = INT_MAX;

    for(auto i = numbers.begin(); i != numbers.end(); ++i){
        for(auto j = numbers.begin(); j != numbers.end(); ++j){
            if(*i != *j){
                int sum = *i + *j;
                if(sum < smallestSum)
                    smallestSum = sum;
            }
        }
    }
    cout << "Smallest sum in the list: " << smallestSum;
    return 0;
}