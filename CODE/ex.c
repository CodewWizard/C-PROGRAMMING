#include <math.h>
#include <stdio.h>
void arm(int);
void main()
{
    int n;
    printf("enter a no\n");
    scanf("%d", &n);
    arm(n);
}
void arm(int user)
{
    int  rem, res = 0, digitCnt = 0, temp, temp1, power;
    temp1 = temp = user;

    while (temp > 0)
    {
        temp = temp / 10;
        digitCnt++; //3
    }
    while (user > 0)
    {
        rem = user % 10;  //1
        printf("%d ", rem);
        printf("%d ", digitCnt);
        power = pow(rem, digitCnt);
        printf("%d ", power);
        res = res + power;   //152
        printf("%d ",res);
        user = user / 10;  //1
    }
    printf("%d ", res);
        if (temp1 == res)
        {
            printf("arm");
        }
        else
        {
            printf("not arm");
        }
    }

