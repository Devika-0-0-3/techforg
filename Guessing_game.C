#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int i,n,r,count=0,highscore=10,l=1,u=100;

 
 srand(time(NULL));
 
 r=(rand() % (u-l+1)) + l;
 printf("%d",r);
for(i=0;i<10;i++)
{
    printf("\nguess the number: ");
    scanf("%d",&n);
    if(n==r)
    { 
        printf("guessed correct");
        break;
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
    highscore--;

}
if(count==10)
 {
    printf("Game over\n");
    
 }
 printf("\nthe no of tries is %d",count);
 

FILE *guess=fopen("guessgame.txt","w");
if(guess==NULL)
{
  printf("Error OPening FILE");
  return 1;
}

fprintf(guess,"%d",highscore);

fclose(guess);
return 0;
}

