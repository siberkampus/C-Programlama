#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
        return (*(int*)a-*(int*)b); //Void pointer tipteki a b degiskeni int pointer a donusturulur  
}
int main(){
        int arr[]={1,7,3,8,9,2}; //Integer Array
        int n = sizeof(arr)/sizeof(arr[0]); // Array eleman sayisi
        qsort(arr,n,sizeof(int),compare); // Quick sort algoritması. Compare fonksiyonu gereklidir
        int i;
        for(i=0;i<n;i++){
                printf("%d  ",arr[i]); //Siralanmis elemanlar yazdirilir
        }
        return 0;
}