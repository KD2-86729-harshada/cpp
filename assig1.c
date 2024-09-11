#include<stdio.h>
#include<string.h>

struct date
{
    int day,month,year;  
};
void initdate(struct date *ptrdate)
{
    ptrdate-> day =1;
    ptrdate-> month=1;
    ptrdate->year = 2000;
}
void acceptDateOnConsole(struct date *ptrdate)
{
    printf("enter date : ");
    scanf("%d%d%d",&ptrdate->day,&ptrdate->month,&ptrdate->year);
}
void printDateOnConsole(struct date *ptrdate)
{
    printf("date : %d -%d -%d",ptrdate->day,ptrdate->month,ptrdate->year);
}

int main()
{
    int choice;
    struct date d1;
    initdate(&d1);
    do
    {
        printf("\n 0.exit \n ");
        printf("1.initdate \n");
        printf("2.printdate \n");
        printf("3.acceptdate \n");
        printf("Enter your choice :");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            acceptDateOnConsole(&d1); 
            break;

        case 2:
            printDateOnConsole(&d1);
            break;
            
        default:
            printf("Inavlid choice....");
            break;
        }

    } while (choice != 0);
    


}