#include <iostream>
using namespace std;
#include "middle.h"

long long itc_revnbr(long long num){
    long long zefra, ch = 0;
    while(num > 0){
  zefra = num % 10;
    ch = ch * 10 + zefra;
  num = num / 10;
    }
  return ch;
   }
int itc_rev_num(long long number){
long long a = 0,i = 0;
    int k = 0;
if(number == 0){
return 1;
}
if(number < 0){
number = -1 * number;
}
    number = itc_revnbr(number);
    cout << number;
  while(number > 0){
        i = i + 1;
      a =  number % 10;
      number = number / 10;
  }
  return i;
}
int itc_null_count(long long number){
    int a = 0, i;
if(number == 0){
return 1;
}
if(number < 0){
number = -1 * number;
}
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
if(number == 0){
return "TRUE";
}
if(number < 0){
number = -1 * number;
}
        i = itc_revnbr(number);
   if(number == i){
     return "TRUE";
      }else{
      return "FALSE";
      }
}
int itc_mirror_count(long long number){
    int i, b = 1;
if(number == 0){
return 1;
}
if(number < 0){
number = -1 * number;
}
        i = itc_revnbr(number);
        while(b < number){
   if(number == i){
        b = b + 1;
   }else{
   b = b + 0;
   }
        }return  b;
}
