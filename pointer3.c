// wap a program to demonstrate a pointer to pointer (**) by acessing and modifying an integer variable though a double pointer 

#include<stdio.h>
#include<conio.h>

int main(){

    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;

    printf("value of a %d\n",a);
    printf("addres of a %p\n" , ptr);
    printf("value of a using double pointer %d\n",**dptr);
    printf("addres of a using double pointer %p\n" , dptr);

    **dptr = 20;

    printf("value of a after modification %d\n",a);
  return 0;
}