#include<stdio.h>

int test(char c[]){
         if(c == "x")
            return 1;
         else
            return 0;
         }

int main(int argv, char* argc[])
{
    char c[10];
    scanf("%s",c);
    printf("%d", test(c));
    return 0;

}
