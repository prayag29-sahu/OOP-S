// Only View Purpose Not working Properly

#include <stdio.h>
#include <conio.h>
struct bank
{
  char firstName[10], lastName[10], dateOfBirth[10], address[20], mobailNo[10],
      accno[15], ta[10], aw[10], depaop[7], depam[10];
};
struct bank b[20];
int main()
{

  void init();
  init();
}
void init()
{
  int n;
  printf("\n\nPlease select any one option that you do :\n 1.Open the account in our bank ENTER 1.\n 2.Deposit ammount ENTER  2.\n 3.Withdraw ammount ENTER 3.\n");
  scanf("%d", &n);
  if (n == 1)
  {
    void accop();
    accop();
  }
  else
  {
    if (n == 2)
    {
      void dep();
      dep();
    }
    else
    {
      if (n == 3)
      {
        void wd();
        wd();
      }
      else
        printf("Invalid Input.");
    }
  }

}
void accop()
{
  int i = 0;

  {

    FILE *fp;

    fp = fopen("account1.cpp", "w");
    //	  char name[100];
    printf("\nEnter your first name :");
    scanf("%s", &b[i].firstName);
    printf("Enter your last name :");
    scanf("%s", &b[i].lastName);
    printf("Enter your DOB :");
    scanf("%s", &b[i].dateOfBirth);
    printf("Enter your address :");
    scanf("%s %s", &b[i].address);
    printf("Enter your contact number :");
    scanf("%s", &b[i].mobailNo);
    printf("Enter amount that you deposit to open your account :");
    scanf("%s", &b[i].depaop);

    fprintf(fp, "\nFirst Name : %s", b[i].firstName);
    fprintf(fp, "\nLastName : %s", b[i].lastName);
    fprintf(fp, "\nDOB : %s", b[i].dateOfBirth);
    fprintf(fp, "\nAddress : %s %s", b[i].address);
    fprintf(fp, "\nContact number : %s", b[i].mobailNo);
    fprintf(fp, "\nBank name : P S Bank");
    fprintf(fp, "\nAmount that you deposit to open your account : %s", b[i].depaop);
    fprintf(fp, "\nAccount number : 1234%d", i);
    fprintf(fp, "\nbank balance : %s", b[i].depaop);

    fclose(fp);

    fp = fopen("account1.cpp", "r");
    char ch;
    ch = fgetc(fp);
    printf("\n");
    while (ch != EOF)
    {
      printf("%c", ch);
      ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
    printf("\nAccount number : 1234%d", i);
    getch();
  }
  void init();
  init();

}

void dep()

{
  int i, n;
  int accno, depam;
  int totam = 0;
  printf("\nEnter your account number :");
  scanf("%d", &accno);
  if (accno == 12340)
  {
  

    FILE *fp;
    fp = fopen("account1.cpp", "r");
    char ch;
    ch = fgetc(fp);
    printf("\n");
    while (ch != EOF)
    {
      printf("%c", ch);
      ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);

    printf("\n\nEnter the ammount that you want to deposit :");
    scanf("%d", &depam);
    printf("You are sucesfully deposit your amount in P S Bank");
    totam = 1500 + depam;
    printf("\nTotal ammount in your account is : %d", totam);
   
  }
  else
    printf("Wrong account number.");

  void init();
  init();

  getch();
}

void wd()
{
  int i, n;
  int accno, wdam;
  int totam = 0;
  printf("Enter your account number :");
  scanf("%d", &accno);
  if (accno == 12340)
  {
    
    printf("\nCurrent balance : 1500");
    printf("\n\nEnter the ammount that you want to withdraw :");
    scanf("%d", &wdam);
    totam = 1500 - wdam;
    printf("You are sucesfully withdraw your amount in P S Bank");
    printf("\nTotal ammount in your account is : %d", totam);
  }
  else
    printf("Wrong account number.");
  void init();
  init();

  getch();
}
