                           // ROCK,PAPER AND SCISSOR//

# include<stdio.h>
int main()
{
    int user,computer;
    int choice;
    printf("**********ROCK  PAPER  AND SCISSOR GAME***********");
    printf("\nrock\npaper\nscissor\n");

    printf("enter your choice:");
    scanf("%d",&user);

    printf("enter computer choice:");
    scanf("%d",&computer);

    if((user<1||user>3)||(computer<1||computer>3))
    {
        printf("wrong choice!!! please enter the correct choice");
    }
    else if(user==computer)
    {
    printf(" match draw!!!\n");
    }

    else if((user==1 && computer==3)||
            (user==2 && computer==1)||
            (user==3 && computer==2))
            {
                printf("*****************************YOU WIN************************************");
            }
            else
            {
                printf("&&&&&&&&&&&&&&&&&&&&&& COMPUTER WIN &&&&&&&&&&&&&&&&&&&&&&");
            }
            return 0;
}