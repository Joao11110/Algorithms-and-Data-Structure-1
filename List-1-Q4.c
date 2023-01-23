#include<stdio.h>

int sum (int a, int b);

int main(){
    int num1, num2, s, n1, n2;
    printf("First number: ");
    scanf("%d", &num1);
    n1 = num1;
    printf("\nSecond number: ");
    scanf("%d",&num2);
    n2 = num2;
    s = sum(num1, num2);
    printf("\nSum between %d and %d is: %d\n", n1, n2, s);
    return 0;
}

int sum (int a, int b){
    int i, s = 0;
    for(i = a; i <= b; i++){
        s = s + i;
    }
    return(s);
}