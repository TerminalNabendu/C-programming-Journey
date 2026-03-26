#include <stdio.h>
int main(){

int i = 5;

printf("The value of i is %d\n", i);

i = i + 5; //10

printf("The value of i is %d\n", i);

printf("The value of i is %d\n", i++); //10
printf("The value of i is %d\n", i); //11

// i++ prints i first and then increments i (post increment operator)
// ++i increments i first and then prints i (post increment operator)

    return 0;
}

// "NOTE"
// --> i++ → i is increased by 1
// --> i -- → i is decreased by 1
// --> +++ operator does not exist.
// --> i+=2 is compound assignment which translates to i = i + 2
// --> Similar to += operator we have other operators like -=, *=, /=, %=.
