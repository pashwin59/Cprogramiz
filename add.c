#include<stdio.h> 
int main(){
   int a,b; /// yo step ko variable declaration ho
   printf("ram duita number vana ta"); //ram sanga duita number mageko
   scanf("%d %d",&a, &b);  // %d vaneko k ko lagi .. interger ko lagi
   // duita %d kina vanda euta a ko lagi arko b ko lagi
   //&a = k ko lagi vanda memory address ko lagi

    int answer = a + b; //jun a + b jodera auni value chai answer vain ma store hunxa

    printf("the answer is %d\n", answer);
    return 0;
    
}