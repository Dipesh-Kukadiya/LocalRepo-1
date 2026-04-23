#include <stdio.h>
int sum(int x,int y){
    return x+y;
}
int main(){
    int a=10;
    int b=20;
    int c;
    c=sum(a,b);
    printf("Sum is =%d\n",c);
    return 0;
}