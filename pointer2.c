// wap to swap tow numbers using pointer and a user- defiend function passing the passing a user-defined function passing the passing the address of the evarible as arguments

#include<stdio.h>
#include<conio.h>

void swap(int *a , int *b ){
    int temp = *a ;
    *a = *b;
    *b = temp;
    
}

int main(){
    
    int x y ;
    
    printf("enter the value =  ");
    scanf("%d%d", &x,&y);
    
    swap(&x,&y);
    
    printf("after swaping x = %d , y = %d" ,x,y  )
    
    return 0;
    //heheh
}