#include <stdio.h>
#include <string.h>
//structure to store ticket details
struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};
int main()
{
    struct Ticket t[100];
    int n=0;
    int choice, i, found;
    int searchTicket;
    int totalSeats=50;
    while(1)         //infinite loop until return not found
    {
        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Show Available Seats\n");
        printf("6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:        //booking tickets
                if(totalSeats==0)
                {
                    printf("\nSorry! No Seats Available\n");
                    break;
                }
                printf("\nEnter Ticket Number : ");
                scanf("%d",&t[n].ticketNo);
                printf("Enter Passenger Name : ");
                scanf(" %[^\n]",t[n].name);
                printf("Enter Number of Seats : ");
                scanf("%d",&t[n].seats);
                if(t[n].seats<=totalSeats)
                {
                    totalSeats-=t[n].seats;
                    n++;
                    printf("\nTicket Booked Successfully!\n");
                }
                else
                {
                    printf("\nOnly %d Seats Available!\n",totalSeats);
                }
                break;
            case 2:           //display all tickets
                if(n==0)
                {
                    printf("\nNo Tickets Booked!\n");
                }
                else
                {
                    printf("\n===== BOOKED TICKETS =====\n");
                    for(i=0;i<n;i++)
                    {
                        printf("\nTicket No : %d",t[i].ticketNo);
                        printf("\nPassenger : %s",t[i].name);
                        printf("\nSeats     : %d\n",t[i].seats);
                    }
                }
                break;
            case 3:              //search ticket
                printf("\nEnter Ticket Number : ");
                scanf("%d",&searchTicket);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(t[i].ticketNo==searchTicket)
                    {
                        printf("\nTicket Found!\n");
                        printf("Passenger : %s\n",t[i].name);
                        printf("Seats     : %d\n",t[i].seats);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nTicket Not Found!\n");
                break;
            case 4:             //cancel ticket
                printf("\nEnter Ticket Number: ");
                scanf("%d",&searchTicket);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(t[i].ticketNo==searchTicket)
                    {
                        totalSeats+=t[i].seats;
                        int j;
                        for(j=i;j<n-1;j++)
                        {
                            t[j]=t[j+1];
                        }
                        n--;
                        found=1;
                        printf("\nTicket Cancelled Successfully!\n");
                        break;
                    }
                }
                if(found==0)
                    printf("\nTicket Not Found!\n");
                break;
            case 5:        //show available seats
                printf("\nAvailable Seats = %d\n",totalSeats);
                break;
            case 6:        //exit 
                printf("\nThank You!\n");
                return 0;
            default:
                printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}