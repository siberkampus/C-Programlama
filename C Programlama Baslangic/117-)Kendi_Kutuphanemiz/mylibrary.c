#include "mylibrary.h"
int factorial(int num){
        int result=1;
        if(num<0){
                return -1;
        }else if(num==0){
                return 1;
        }else{
                while(num)
                        result*=num--;
        }
        return result;
}
int maxofTwo(int num1,int num2){
        if(num1>num2)
                return num1;
        return num2;
}
