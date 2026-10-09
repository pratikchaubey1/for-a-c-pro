//  wap the declare initialize and display a pointer address using the * and & operator and demorstrate prointer arithmetic 
#include<stdio.h>
#include<conio.h>

int main(){
    int a = 10;
    int *ptr = &a;

    printf("value of a %d\n",a);
    printf("addres of a %p\n" , ptr);
    
    return 0 ;
}