#include<stdio.h>
#include<stdlib.h>

void main()
{
 int i,n,r,count=0;
 for(i=1;i<=100;i++)
 {
    r=rand();
 }
 for(i=0;i<10;i++)
 {
    printf("guess the number: ");
    scanf("%d",&n);
    if(n==r)
    { 
        printf("guessed correct");
    }
    else
    {
        if(n<r)
        {
            printf("Too Low\n");
        }
        else
        {
            printf("Too High\n");
        }
    }
    count++;

}
if(count==10)
 {
    printf("Game over\n");
    exit(0);
 }
 printf("the no of tries is %d",count);
 
}

