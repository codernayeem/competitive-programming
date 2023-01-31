#include<stdio.h>
#include<math.h>

// for <=19 digits

int main(){
    unsigned long long n, backup, reversed = 0;

    scanf("%llu", &n);
    backup = n;

    while(n != 0){
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    if(reversed == backup)
        printf("YES");
    else
        printf("NO");
}