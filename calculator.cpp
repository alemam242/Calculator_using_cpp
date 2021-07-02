#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
void menu();
void add();
void sub();
void mul();
void mod();
void power();
void root();
void percent();
int exit()
{
    cout <<BLUE "Thanks for using our program" RESET<<endl;
    return 0;
}
int main()
{
    system("CLS");
    cout<<YELLOW"\n\n\n\n\n\n\n\n\n\t\t\t\t  ";
    char a[]="_____Created By Aryan Suvo_____";
    int l=strlen(a);
    char b[]="<> Welcome To Windows Calculator <>";
    int ll=strlen(b);
    for(int j=0;j<ll;j++)
    {
        cout << b[j];
        usleep(80000);
    }
    cout<<YELLOW"\n\n\t\t\t\t    ";
    for(int i=0;i<l;i++)
    {
        cout << a[i];
        usleep(80000);
    }
    cout<<"\n\n\t\t\t\t";
    for(int i=0; i<40; i++)
    {
        printf(GREEN"%c"RESET, 178);
        usleep(45000);
    }
    menu();
}
void menu()
{
    system("CLS");
    cout <<GREEN "\t\tSIMPLE CALCULATOR\n\n" RESET<<endl;
    int ch;
    cout <<MAGENTA"1.Addition"       RESET<<endl;
    cout <<YELLOW "2.Subtraction"    RESET<<endl;
    cout <<BLUE   "3.Multiplication" RESET<<endl;
    cout <<MAGENTA"4.Modulos"        RESET<<endl;
    cout <<CYAN   "5.Power"          RESET<<endl;
    cout <<YELLOW "6.Root"           RESET<<endl;
    cout <<BLUE   "7.Persentage"     RESET<<endl;
    cout <<RED    "8.exit"           RESET<<endl;
    cout <<CYAN   ">> "              RESET;
    cin >> ch;
    switch(ch)
    {
        case 1:
        system("CLS");
        add();
        getch();
        menu();
        break;
        case 2:
        system("CLS");
        sub();
        getch();
        menu();
        break;
        case 3:
        system("CLS");
        mul();
        getch();
        menu();
        break;
        case 4:
        system("CLS");
        mod();
        getch();
        menu();
        break;
        case 5:
        system("CLS");
        power();
        getch();
        menu();
        break;
        case 6:
        system("CLS");
        root();
        getch();
        menu();
        break;
        case 7:
        system("CLS");
        percent();
        getch();
        menu();
        break;
        case 8:
        exit();
        break;
        default:
        cout <<RED "Wrong choice!!" RESET<<endl;
        getch();
        menu();
    }
}
void add()
{
    double n1,n2;
    double sum;
    cout << "\t\tCalculate Addition\n"<<endl<<endl;
    cout << "Enter 2 numbers for Addition"<<endl;
    cout << "1st Number: ";
    cin>>n1;
    cout << "2nd Number: ";
    cin>>n2;
    sum=n1+n2;
    cout << "SUM = "<<sum<<endl;
}
void sub()
{
    double n1,n2;
    double sub;
    cout << "\t\tCalculate Subtraction\n"<<endl<<endl;
    cout << "Enter 2 numbers for Subtraction"<<endl;
    cout << "1st Number: ";
    cin>>n1;
    cout << "2nd Number: ";
    cin>>n2;
    sub=n1-n2;
    cout << "Subtraction = "<<sub<<endl;
}
void mul()
{
    double n1,n2;
    double mul;
    cout << "\t\tCalculate Multiplication\n"<<endl<<endl;
    cout << "Enter 2 numbers for Multiplication"<<endl;
    cout << "1st Number: ";
    cin>>n1;
    cout << "2nd Number: ";
    cin>>n2;
    mul=n1*n2;
    cout << "Multiplication = "<<mul<<endl;
}
void mod()
{
    int n1,n2;
    int mod;
    cout << "\t\tCalculate Modulos\n"<<endl<<endl;
    cout << "Enter 2 numbers for Modulos"<<endl;
    cout << "1st Number: ";
    cin>>n1;
    cout << "2nd Number: ";
    cin>>n2;
    mod=n1 % n2;
    cout << "Modulos = "<<mod<<endl;
}
void power()
{
    double n1;
    int n2;
    double p;
    cout << "\t\tCalculate Power\n"<<endl<<endl;
    cout << "Enter 2 numbers for Power"<<endl;
    cout << "Number: ";
    cin>>n1;
    cout << "power: ";
    cin>>n2;

    p=pow(n1,n2);
    cout << "Power = "<<p<<endl;
}
void root()
{
    double n1,root;
    cout << "\t\tCalculate Root\n"<<endl<<endl;
    cout << "Enter number: ";
    cin>>n1;
    root=sqrt(n1);
    cout << "Root of this Number: "<<root<<endl;
}
void percent()
{
    double n1,n2,per;
    cout << "\t\tCalculate Percentage\n"<<endl<<endl;
    cout << "Number: ";
    cin>>n1;
    cout << "Percent: ";
    cin>>n2;
    per=n1-(n1/100)*n2;
    cout << "Result: "<<per<<endl;
}
