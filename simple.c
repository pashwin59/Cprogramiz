#include<stdio.h>
int main(){
    int p, t, r;
    printf("Enter principal, time and rate:\n");
    scanf("%d %d %d", &p,&t,&r);

    int i = (p*t*r)/100;
    printf("Simple Interest is: %d\n", i);
}