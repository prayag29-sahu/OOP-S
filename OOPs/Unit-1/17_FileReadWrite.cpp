#include <iostream>
#include <fstream>
#include <string.h>
#include<iomanip>
using namespace std;

const char *filename = "BINARY";
int main()
{
    float h[4] = {175.5, 153.0, 167.25, 160.70};
    ofstream outfile;
    outfile.open(filename);
    outfile.write((char *)&h, sizeof(h));
    outfile.close();
    for (int i = 0; i < 4;i++)
    {
        h[i] = 0;
    }
    ifstream infile;
    infile.open(filename);
    infile.read((char *)&h, sizeof(h));
    for (int i = 0; i < 4;i++)
    {
        cout.setf(ios::showpoint);
        cout << setw(10) << setprecision(5) << h[i];
    }
    infile.close();
    return 0;
}
/*
output
    175.50    153.00    167.25    160.70
*/

/*
    FILE *fp;

    fp = fopen("account1.cpp","w");
    //	  char name[100];
    printf("\nEnter your first name :");
    scanf("%s",&b[i].fname);
    printf("Enter your last name :");
    scanf("%s",&b[i].lname);
    printf("Enter your DOB :");
    scanf("%s",&b[i].dob);
    printf("Enter your address :");
    scanf("%s %s",&b[i].add);
    printf("Enter your contact number :");
    scanf("%s",&b[i].mono);
    printf("Enter amount that you deposit to open your account :");
    scanf("%s",&b[i].depaop);

    fprintf(fp,"\nFirst Name : %s",b[i].fname);
    fprintf(fp,"\nLastName : %s",b[i].lname);
    fprintf(fp,"\nDOB : %s",b[i].dob);
    fprintf(fp,"\nAddress : %s %s",b[i].add);
    fprintf(fp,"\nContact number : %s",b[i].mono);
    fprintf(fp,"\nBank name : P S Bank");
    fprintf(fp,"\nAmount that you deposit to open your account : %s",b[i].depaop);
    fprintf(fp,"\nAccount number : 1234%d",i);
    fprintf(fp,"\nbank balance : %s",b[i].depaop);

    fclose(fp);
    FILE *fp;
    fp = fopen("account1.cpp","r");
    char ch;
    ch=fgetc(fp);
    printf("\n");
    while(ch != EOF)
    {
    printf("%c",ch);
    ch=fgetc(fp);
    }
    printf("\n");
    fclose(fp);
*/