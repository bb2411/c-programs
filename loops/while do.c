#include<stdio.h> 

int main() 
{ 
    int n, i; 
    int sum = 0; 
    printf("Enter number of elements to add: "); 
    scanf("%d", &n); 
    i = 1; 
    while (i <= n) { 
        sum=sum+i; 
        i++; 
    } 
    printf("Sum of %d numbers is %d\n", n, sum); 
    return 0; 
}
