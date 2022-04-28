#include <stdio.h>
#include <stdbool.h>
#define formatBool(b) ((b) ? "true" : "false")
bool is_divisible(int value){
    int reminder = 0;
    int sum = 0;
    int tmp = value;

    while (value > 0){
        reminder = value % 10;
        sum += reminder;
        value = value/10;
    }

    if(tmp%sum == 0){
        return true;

    } else{
        return false;

    }
}

int main() {

  printf("%s\n", formatBool(is_divisible(75)));
  printf("%s\n", formatBool(is_divisible(171)));
  printf("%s\n", formatBool(is_divisible(481)));
    return 0;
}
