#include <iostream>
using namespace std;
#include "middle.h"

void itc_num_print(int number){
    cout << number;
}
int itc_len_num(long long number){
    int a;
    while(number > 0){
      number = number / 10;
      a++;
    }
    return a;
}
int itc_sum_num(long long number){
    int a;
    while(number > 0){
      a = a + number % 10;
      number = number / 10;
    }
    return a;
}
long long itc_multi_num(long long number){
    int a;
    while(number > 0){
      a =  a * number % 10;
      number = number / 10;
    }
    return a;
}
int itc_max_num(long long number){
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
int itc_min_num(long long number){
    int a, min = 9;
    if(number == 0){
        return number;
    }
    if(number < 0){
        min = -1;
        number = number * -1;
        while(number > 0){
      a = number % 10;
      number = number / 10;
       if(a > min){
        min = a;
      }
    }
    return -1 * min;
    }
    if(number > 0){
    while(number > 0){
      a = number % 10;
      number = number / 10;
       if(a < min){
        min = a;
      }
    }
    return min;
    }
}
