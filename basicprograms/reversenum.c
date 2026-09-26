//To reverse the number entered by the user (eg. input 1234 then output 4321)

#include <stdio.h>

int main(){

    int digit,num,rev=0;

    puts("Enter the number to reverse");
    scanf("%d",&num);


    while (num!=0){
            digit=num%10;
            num=num/10;
            rev=rev*10+digit;
    }

    printf("%d\n",rev);
    return 0;
}