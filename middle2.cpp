#include <iostream>
using namespace std;
#include "middle.h"

int itc_revnbr(int num){
    int a = 0;
    int k = 0;
  a = num % 10;
  num = num / 10;
  k = k * 10 + a;
   }
int itc_rev_num(long long number){
int a = 0, b, i = 0;
    int k = 0;
    while(number > 0){
  a = number % 10;
  number = number / 10;
  k = k * 10 + a;
    }
  while(k > 0){
        i = i + 1;
      a = k % 10;
      k = k / 10;
  }
  return i;
}
int itc_null_count(long long number){
    int a, i;
    while(number > 0){
      a = number % 10;
      number = number / 10;
    if(a == 0){
        i = i + 1;
    }
    }return i;
    }
bool itc_mirror_num(long long number){
    int i;
        i = itc_revnbr(number);
   if(number == i){
     return "TRUE";
      }else{
      return "FALSE";
      }
}
int itc_mirror_count(long long number){
    int i, b = 1;
        i = itc_revnbr(number);
        while(b < number){
   if(number == i){
        b = b + 1;
   }else{
   b = b + 0;
   }
        }return  b;
}
