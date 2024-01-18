#include<stdio.h>
int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to Modern Perodic Table\n\n");

    printf("> Enter 1 to know about an element\n\n");
    printf("> Enter 2 to close the Periodic Table\n\n");

    printf("ENTER\n");
    scanf("%d",&n);

    if(n==1)
    {
        printf(">Press 3 to search the element by Atomic Number\n\n");

            printf("ENTER\n");
        scanf("%d",&m);

        if(m==3)
        {
            printf("Enter the atomic number of the eleemnt to be serached : ");
            scanf("%d",&a);

            if(a==1)
            {
                printf("Name : Hydrogen\n");
                printf("Symbol : H\n");
                printf("Atomic Number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discovered by : Henry Cavendish\n");
                printf("Charge : +1\n");

            }
        }
    }
    else if(n == 2)
    {
        printf("Do you want to exit...? (Yes/No)");
        printf(">Press 6 for Yes\n");
        printf(">Press 7 for No\n");

        printf("ENTER\n");
        scanf("%d",&Exit);

        if (Exit==6)
        {
            printf("Are you sure to close the Periodic Table...? (Yes/No)");
            printf(">Press 4 for Yes\n");
            printf(">Press 5 for No\n");

            printf("Enter\n");
            scanf("%d",&Exit);

            if(Exi==4)
            {
                printf("The Periodic Table has closed");

            }
            else if(Exi==5)
            {
                printf("Periodic Table has not closed and you cant continue to learn more about the elements\n\n");

                printf("Enter the Atomic Number of the element to be serched : \n\n");
                scanf("%d",&a);

                if(a==1)
                {
                    printf("Name : Hydrogen\n");
                    printf("Symbol : H\n");
                    printf("Atomic Number : 1\n");
                    printf("Electronic Configuration : 1s^1\n");
                    printf("Discovered by : Henry Cavendish\n");
                    printf("Charge : +1\n");
                }
            }
        }
        else if(Exit==7)
        {
            printf("Periodic Table has not closed and you can continue to learn more elements\n\n");

            printf("Enter the Atomic Number of the elements to be searched : ");
            scanf("%d",&a);

            if(a==1)
            {
                 printf("Name : Hydrogen\n");
                    printf("Symbol : H\n");
                    printf("Atomic Number : 1\n");
                    printf("Electronic Configuration : 1s^1\n");
                    printf("Discovered by : Henry Cavendish\n");
                    printf("Charge : +1\n");
            }
        }

    }
}