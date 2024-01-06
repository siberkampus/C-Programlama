#include <stdio.h>
#include <stdbool.h>
bool compare (const void* a,const void* b){
        return (*(int*)a ==*(int*)b);  // void gelen pointeri int turune donusturuyoruz
        //Eger gelen iki deger esitse true dondurur
}
int search(void* arr,int n,void* value,bool compare(const void*,const void*)){
        int *ptr = (int*)arr; // arrayin baslangic adresini pointerda sakliyoruz
        int i;
        for(i=0;i<n;i++){
                if(compare(ptr+i,value)){ //pointer adresini int buyuklugunde arttirarak arrayi geziyoruz
                        return i;//Eger iki deger de esitse buldugu index degerini dondurur
                }
        }
        return 0;
}

int main(){
        int arr[]={1,2,6,3,7,8,9};//Array olusturuyoruz
        int n = sizeof(arr)/sizeof(arr[0]); // Array boyutunu buluyoruz
        int value = 7; // Bulmak istedigimiz sayi
        int result=search(arr,n,&value,compare); //Arrayi, eleman sayisini,bulunacak degeri,ve compare fonk gonderiyoruz
        printf("%d is in %d index",value,result);
        return 0;
}
