#include<stdio.h>

int main(){
    int user, temp, rem, pali = 0;
    printf("Enter no ");
    scanf("%d",&user);
    temp = user;
    while (temp > 0)
    {
        rem = temp % 10;
        pali = (pali * 10) + rem;
        temp = temp / 10;
    }
    // printf("%d ",pali);
    if(pali == user){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}