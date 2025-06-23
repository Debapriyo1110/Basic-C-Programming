#include<stdio.h>

int main() {
   int i, key, flag;
   flag = 0;
   int a[] ={10,20,23,25,6,2,5,6,5,45,4};
   printf("Enter a value to be searched: ");
   scanf("%d", &key);
   for (i = 0; i <10 ;i++) {
    if (a[i] == key){
    printf("Key FOUND at %d\n", i+1);
    flag = 1;
    //break;//To find first key}
    }
   }
   if (flag == 0) 
        printf("Key NOT FOUND");

    return 0;
}