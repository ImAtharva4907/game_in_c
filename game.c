#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guss,ngusses=1;
    srand(time(0));
    number=rand()%100+1;     //Generates number between 1 to 100
    printf("Enter The Number Between 1 to 100:-\n");

    do                //Keep running the loop until number is gussed
    {
        
        scanf("%d",&guss);
        if (guss>number)
        {
            printf("enter lesser number \n");
        }
        else if (guss<number)
        {
            printf("Enter greater number\n");
        }
        else
        {
            printf("You Gussed in %d attempts",ngusses);
        }
        ngusses++;
        
        
    } while (guss!=number);
    
    
return 0;
}