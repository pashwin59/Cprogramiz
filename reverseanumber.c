#include <stdio.h>
int main(){
    int n;
    int reverse = 0;
    int remainder;
    printf("enter a number you want to reverse\n");
    scanf("%d", &n);
    while( n != 0){
        
        remainder = n % 10;
        reverse  = reverse  * 10  + remainder;
        n = n /10;
        
}
printf("the reverse number is %d\n", reverse);
return 0;
}
