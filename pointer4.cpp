#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;

    printf("value of a %d\n",a);
    printf("addres of a %p\n" , ptr);
    
    return 0 ;
}