#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>

// Structure to store the Booking Details 
typedef struct booking
{
    char name[50];
    char movie[50];
    char seats[50];
    char amount[20];
}book;

// Structure to store the User Details 
typedef struct user
{
    char name[50];
    char number[50];
    char password[50];
}us;

void pay_ticket(int x);
//-----------------Display Current Movies Portal-----------------
void display_movies()
{
    FILE *fp;
    char movie[50];
    fp = fopen("movies.txt", "r");
    printf("\n-----------------Display Current Movies Portal	\n");
    printf("\nCurrent Movies -\n");
    while (fgets(movie, 50, fp) != NULL)
    {
        printf("%s", movie);
    }
    printf("\n");
    fclose(fp);

    printf("\nPress Enter to continue ...");
    getch();
    printf("\n");
}
//-----------------Registration Portal-----------------
void register_user()
{
    FILE *fp, *fp1;
    us u;
    char ch, name[50], password[50], number[10];
    int i = 0, found = 0;

    printf("\n-----------------Registration Portal	\n");
    printf("\nEnter your name (first name only): ");
    scanf("%s", name);

    while (1)
    {
        printf("\nEnter your 10-digit phone number: (IND) +91");
        scanf("%s", number);
        if (strlen(number) == 10)
            break;
        printf("\nEnter valid phone number!\n");
    }

    while (1)
    {
        printf("\nCreate a password (at least 8 characters): ");

        // Replacing password with * for maintaining privacy 
        while((ch = getch()) != '\r')
        {
            if (ch != '\b')
            {
                password[i++] = ch;
                printf("*");
            }
            else
                i--;
        }
        password[i] = '\0';

        if (strlen(password) >= 8)
            break;
        printf("\nPassword should be of at least 8 characters!\n");
    }

    // Verifying Registration Details 
    fp1 = fopen("users.txt", "r");
    while (fscanf(fp1, "%s %s %s\n", u.name, u.number, u.password) != EOF)
    {
        if (strcmp(name, u.name) == 0 && strcmp(number, u.number) == 0 && strcmp(password, u.password) == 0)
        {
            found = 1;
            printf("\nThis user already exists!\n\nPlease register using other user details.\n");
        }
    }
    fclose(fp1);

    if (found == 0)
    {
        // Appending Registration Details in a File 
        fp = fopen("users.txt", "a");
        fprintf(fp, "%s %s %s\n", name, number, password);
        printf("\nRegistration Complete.\n");
        fclose(fp);
    }

    printf("\nPress Enter to continue ...");
    getch();
    printf("\n");
}
//-----------------Ticket Booking Portal-----------------
void book_ticket()
{   
    FILE *fp, *fp1, *fp2;
    time_t rawtime;
    struct tm *info;
    char name[50], name1[50], movie[50], vmovie[50], seats[50], password[50], number[10], mdate[10], coupcode[10], choice;
    int i, j, found = 0, found2 = 0, nos, ch = 0, coup = 0, t, cflag = 0;
    float price = 0.0, ticket = 0.0, sgst = 0.09, cgst = 0.09, cdiscount = 0.0;
    char mtime[4][9] = {"09.00 AM", "01.30 PM", "06.00 PM", "10.00 PM"};

    printf("\n-----------------Ticket Booking Portal	\n");
    printf("\nEnter your name: ");
    scanf("%s", name);
    // Verifying whether the user name is registered or not 
    fp1 = fopen("users.txt", "r");
    while (fscanf(fp1, "%s %s %s\n", name1, number, password) != EOF)
    {
        if (strcmp(name, name1) == 0)
            found = 1;
    }
    fclose(fp1);
    if (found == 1)
    {
        printf("\nEnter date [dd/mm/yy]: ");
        scanf("%s", mdate);

        while (found2 != 1)
        {
            printf("\nEnter movie name: ");
            scanf("%s", movie);

            // Verifying Movie Name
            fp2 = fopen("movies.txt", "r");
            while (fscanf(fp2, "%s\n", vmovie) != EOF)

            {
                if (strcmp(movie, vmovie) == 0)
                {
                    found2 = 1;
                    fclose(fp2);
                    break;
                }
            }
            if (found2 == 0)
            {
                printf("\nWrong Movie Name!\n");
                display_movies();
            }
        }
        printf("\nSelect Show Timing: \n");
        for (i = 0; i < 4; i++)
            printf("%d. %s\n", i, mtime[i]);
        printf("\nEnter your choice : ");
        scanf("%d", &t);
        printf("\nEnter the no. of people : (Maximum 6)\n");
        scanf("%d", &nos);

        printf("\n\nSelect Seat :\n\n\t\t\t\t\t Premium (Rs. 350)\n\n");
        for (i = 77; i >= 65; i--)
        {
            printf(" ");
            for (j = 1; j <= 20; j++)
            {
                printf(" %c%d ", i, j);
                if (j % 10 == 0)
                    printf("\t");
            }
            printf("\n");
            if (i == 74)
                printf("\n\t\t\t\t\t	Gold (Rs. 250)\n\n");
            else if (i == 68)
                printf("\n\t\t\t\t\t	Silver(Rs. 150)\n\n");
        }
        while (1)
        {
            printf("\nEnter: \n1 for Premium\n2 for Gold\n3 for Silver\nEnter your choice : ");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                price = 350.0;
                break;
            case 2:
                price = 250.0;
                break;
            case 3:
                price = 150.0;
                break;
            default:
                printf("Invalid choice!\n");
            }
            if (ch == 1 || ch == 2 || ch == 3)
                break;
        }
        while (1)
        {
            cflag = 0;
            printf("\nEnter seat numbers: (Separated by commas)\n");
            scanf("%s", seats);

            // Verifying Seat Numbers
            for (i = 0; i < strlen(seats); i++)
                if (seats[i] == ',')
                    cflag++;
            if (cflag == (nos - 1))
                break;
            printf("\nNo. of people and seat numbers do not match!");
        }

        // Adding Coupon Discount
        printf("\nEnter: \n1 to avail upto 15%% discount by entering coupon code\n0 , if you do not have any coupon code\nEnter your choice : ");
        scanf("%d", &coup);
        if (coup == 1)
        {
            printf("\nEnter coupon code : ");
            scanf("%s", coupcode);
            if (strlen(coupcode) == 7)
            {
                cdiscount = 0.15 * nos * price * (-1);
                printf("\nCoupon Discount Applied.");
            }
            else
                printf("\nInvalid Coupon Code!");
        }

        // Finding Ticket Price 
        price=nos*price;
        sgst = price * sgst;
        cgst = price * cgst;
        ticket = price + sgst + cgst + cdiscount;

        // Appending Booking Details in a File 
        fp = fopen("bookings.txt", "a");
        fprintf(fp, "%s %s %s %.2f\n", name, movie, seats, ticket);
        fclose(fp);
        printf("\nBooking successful!\n");

        // Finding Local Time 
        time( &rawtime );
        info = localtime(&rawtime);

        // Printing Ticket
        printf("\n-----------------------Your Ticket	\n");
        printf("\nName \t\t\t\t:\t %s", name);

        printf("\nMovie \t\t\t\t:\t %s", movie);
        printf("\nShow Date \t\t\t:\t %s", mdate);
        printf("\nShow Timing \t\t\t:\t %s", mtime[t + 1]);
        printf("\nSeat No. \t\t\t:\t %s", seats);
        printf("\nPrice \t\t\t\t:\t %.2f", ticket);
        printf("\nTicket Booking Date and Time \t:\t %s\n", asctime(info));

        printf("\n\nProceeding to the Payments Portal to pay for the ticket");
        printf("\nPress Enter to continue ...");
        getch();
        // Printing Bill
        printf("\n\n-----------------Payment Portal	\n");
        printf("\nAmount to be paid : %.2f\n", ticket);
        printf("\nTicket Price \t : %.2f", price);
        printf("\nNo. of seats \t : %d", nos);
        printf("\nS GST (9%%) \t : %.2f", sgst);
        printf("\nC GST (9%%) \t : %.2f", cgst);
        if (coup == 1)
            printf("\nCoupon Discount : %.2f ", cdiscount);
        printf("\n	");
        printf("\nTotal \t\t : %.2f\n", ticket);
        printf("	\n");
        pay_ticket(1);
    }
    else
    {
        printf("\nYou have not registered yet.\nPlease register first in order to book ticket.\n");
        printf("\nProceeding to the Registration portal	\n");
        register_user();
    }
}
//-----------------Ticket Cancellation Portal-----------------
void cancel_ticket()
{
    FILE *fp1, *fp2;
    book b;

    char name[50], movie[50], seats[50];
    int found = 0;
    float price;

    printf("\n-----------------Ticket Cancellation Portal	\n");
    printf("\nEnter your name: ");
    scanf("%s", name);
    printf("Enter movie name: ");
    scanf("%s", movie);
    printf("Enter seat numbers: ");
    scanf("%s", seats);

    fp1 = fopen("bookings.txt", "r");
    fp2 = fopen("temp.txt", "w");

    while (fscanf(fp1, "%s %s %s %s\n", b.name, b.movie, b.seats, b.amount) != EOF)
    {
        if (strcmp(name, b.name) == 0 && strcmp(movie, b.movie) == 0 && strcmp(seats, b.seats) == 0)
        {
            found = 1;
            printf("\nYour booking has been cancelled!\n\nYour amount of Rs.%s will be refunded into your bank account in a short time\n", b.amount);
        }
        else
            fprintf(fp2, "%s %s %s %s\n", b.name, b.movie, b.seats, b.amount);
    }
    fclose(fp1);
    fclose(fp2);

    remove("bookings.txt");
    rename("temp.txt", "bookings.txt");

    if (found == 0)
    {
        printf("Booking not found!\n");
    }
    printf("\nPress Enter to continue ...");

    getch();
    printf("\n");
}
//-----------------Payment Portal-----------------
void pay_ticket(int x)
{
    int ch = 0, otp, pin, cflag = 0, i;
    char a[50], b[50], c[50], chc;
    if (x == 0)
        printf("\n-----------------Payment Portal	\n");

    while (1)
    {
        printf("\nEnter: \n1 To pay through Netbanking\n2 To pay through Card (Debit/Credit)\n3 To pay through UPI\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter Bank Name : ");
            scanf("%s", a);
            printf("\nEnter User Name : ");
            scanf("%s", b);
            printf("\nEnter Password : ");
            scanf("%s", c);
            printf("\nEnter the 6-digit OTP : ");
            scanf("%d", &otp);
            break;
        case 2:
            printf("\nEnter Card Number : ");
            scanf("%s", a);
            printf("\nEnter Card Holder Name : ");
            scanf("%s", b);
            printf("\nEnter CVV : ");

            scanf("%s", c);
            printf("\nEnter PIN (In case of Debit Card) : ");
            scanf("%d", &pin);
            printf("\nEnter the 6-digit OTP : ");
            scanf("%d", &otp);
            break;
        case 3:
            while (1)
            {
                cflag = 0;
                printf("\nEnter UPI ID : ");
                scanf("%s", a);

                // Verifying UPI ID
                for (i = 0; i < strlen(a); i++)
                    if (a[i] == '@')
                        cflag++;
                if (cflag == 1)
                    break;
                printf("\nEnter valid upi id!\n");
            }
            printf("\nEnter UPI PIN : ");
            scanf("%s", b);
            printf("\nEnter the 6-digit OTP : ");
            scanf("%d", &otp);
            break;
        default:
            printf("\nInvalid choice!\n");
        }
        if (ch == 1 || ch == 2 || ch == 3)
            break;
    }

    if (otp >= 100000 && otp <= 999999)
        printf("\nPayment Successful");
    else

        printf("\nWrong OTP!!!\nPayment Unsuccessful\n\nGo to the Payment Portal to pay again...\n");

    printf("\nPress Enter to continue ...");
    getch();
    printf("\n");
}
//-----------------View Booking Portal-----------------
void view_bookings()
{
    FILE *fp;
    book b;

    fp = fopen("bookings.txt", "r");
    printf("\n-----------------View Booking Portal	\n");
    printf("\nAll Booking Records:\n");

    while (fscanf(fp, "%s %s %s %s\n", b.name, b.movie, b.seats, b.amount) != EOF)
    {
        printf("Name: %s, Movie: %s, Seats: %s, Amount: %s\n", b.name, b.movie, b.seats, b.amount);
    }
    fclose(fp);

    printf("\nPress Enter to continue	");
    getch();
    printf("\n");
}
//-----------------Main Function-----------------
int main()
{
    int choice;
    while (1)
    {
        // Main Menu
        printf("\n-----------------Movie Ticket Booking System	\n\n");

        printf("1. Display Current Movies\n");
        printf("2. Register\n");
        printf("3. Book Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Payment Options\n");
        printf("6. View All Booking Records\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display_movies();
            break;
        case 2:
            register_user();
            break;
        case 3:
            book_ticket();
            break;
        case 4:
            cancel_ticket();
            break;
        case 5:
            pay_ticket(0);
            break;
        case 6:
            view_bookings();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
