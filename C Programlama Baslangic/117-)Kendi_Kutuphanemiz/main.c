#include <stdio.h>
#include "mylibrary.h"
int main(){
        printf("Factorial = %d\n",factorial(5));
        int num1=5,num2=7;
        printf("Max of %d and %d = %d",num1,num2,maxofTwo(num1,num2));
        return 0;
}
