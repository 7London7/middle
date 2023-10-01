#include <iostream>
using namespace std;
#include "middle.h"

int itc_second_max_num(long long number){
    int a, maxi = -1;
    if(number == 0){
        return number;
    }
    if(number < 0){
        maxi = 9;
        number = -1 * number;
        while(number > 0){
      a = number % 10;
      number = number / 10;
       if(a < maxi){
        maxi = a;
      }
    }
    return  - 1 * maxi;
    }
    if(number > 0){
    while(number > 0){
      a = number % 10;
      number = number / 10;
       if(a > maxi){
        maxi = a;
      }
    }
    return maxi;
    }
}
