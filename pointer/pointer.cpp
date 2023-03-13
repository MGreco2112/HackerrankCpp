#include <stdio.h>
#include <cmath> /*include cmath header to utilize the abs val function*/

void update(int *a,int *b) { /*takes two params, elements stored at pointer values*/
    int sum = *a + *b; /*initlze int var sum and give it the sum of values stored at a and b*/
    int absDiff = abs(*a - *b); /*initlze int val absDiff and store the abs value of val at a minus val at b*/
    
    
    *a = sum; /*assign to value at pointer location value of sum var*/
    *b = absDiff; /*assign to value at pointer location value of absDiff var*/
}

int main() {
    int a, b; /*declare two int variables*/
    int *pa = &a, *pb = &b; /*define two int pointers using the * prefix
                                then assign the index locations of a and b using
                                the & prefix on the variable names*/
    
    scanf("%d %d", &a, &b); /*scan in two ints from console, assigning them to
                            the memory address locations of a and b using & prefix*/
    update(pa, pb); /*call above function on pointers*/
    printf("%d\n%d", a, b); /*print values after function call*/

    return 0;
}
