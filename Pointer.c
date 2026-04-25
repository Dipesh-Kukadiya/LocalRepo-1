#include <stdio.h>
int main(){
int a=10;
char b='D';
float c=20.30;


int *ptr_a=&a;
char *ptr_b=&b;
float *ptr_c=&c;
printf("a =%d\n",sizeof(ptr_a));
printf("a =%d\n",sizeof(ptr_b));
printf("a =%d\n",sizeof(ptr_c));
printf("a =%d %p %p\n",a,&a,&ptr_a);
return 0;

}