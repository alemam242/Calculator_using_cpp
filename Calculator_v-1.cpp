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
void op();
void tf();
void tc();
int exit()
{
    cout <<endl<<GREEN "Thanks for using my program" RESET<<endl<<endl<<endl;
    return 0;
}

const double pi=3.14159265;

int main()
{
    system("CLS");
    cout<<CYAN"\n\n\n\n\n\n\n\n\n\t\t\t\t  ";
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
    cout <<MAGENTA"1.Basic Operetors"       RESET<<endl;
    cout <<YELLOW "2.Special Operators"    RESET<<endl;
    cout <<BLUE   "3.Temperature Calculator" RESET<<endl;
    cout <<RED "4.EXIT" RESET<<endl;
    cout <<MAGENTA">> "        RESET;
    cin>>ch;
    switch(ch)
    {
        case 1:
        system("CLS");
        op();
        getch();
        menu();
        break;
        case 2:
        system("CLS");
        tf();
        getch();
        menu();
        break;
        case 3:
        system("CLS");
        tc();
        getch();
        menu();
        break;
        case 4:
        exit();
        break;
        default:
        cout <<RED "WRONG CHOICE!!" RESET<<endl;
        getch();
        menu();
    }
}
void op()
{
    system("CLS");
    cout <<GREEN "\t\tSIMPLE CALCULATOR\n\n" RESET<<endl;
    int ch;
    cout <<MAGENTA"1.Addition"       RESET<<endl;
    cout <<YELLOW "2.Subtraction"    RESET<<endl;
    cout <<BLUE   "3.Multiplication" RESET<<endl;
    cout <<MAGENTA"4.Modulos"        RESET<<endl;
    cout <<GREEN  "5.BACK" RESET<<endl;
    cout <<CYAN   ">> "              RESET;
    cin >> ch;
    switch(ch)
    {
        case 1:
        system("CLS");
        add();
        getch();
        op();
        break;
        case 2:
        system("CLS");
        sub();
        getch();
        op();
        break;
        case 3:
        system("CLS");
        mul();
        getch();
        op();
        break;
        case 4:
        system("CLS");
        mod();
        getch();
        op();
        break;
        case 5:
        menu();
        break;
        default:
        cout <<RED "WRONG CHOICE!!" RESET<<endl;
        getch();
        op();
    }
}
void tf()
{
    system("CLS");
    cout <<GREEN "\t\tSIMPLE CALCULATOR\n\n" RESET<<endl;
    int ch;
    
    cout <<CYAN   "1.Power"          RESET<<endl;
    cout <<YELLOW "2.Root"           RESET<<endl;
    cout <<BLUE   "3.Persentage"     RESET<<endl;
    cout <<GREEN  "4.BACK" RESET<<endl;
    cout <<CYAN   ">> "              RESET;
    cin >> ch;
    switch(ch)
    {
        
        case 1:
        system("CLS");
        power();
        getch();
        tf();
        break;
        case 2:
        system("CLS");
        root();
        getch();
        tf();
        break;
        case 3:
        system("CLS");
        percent();
        getch();
        tf();
        break;
        case 4:
        menu();
        break;
        default:
        cout <<RED "Wrong choice!!" RESET<<endl;
        getch();
        tf();
    }
}
void tc()
{
    system("CLS");
    cout <<GREEN "\t\t TEMPERATURE CALCULATOR\n\n" RESET<<endl;
    int ch;
    double n,d2r,c2f,c2k,f2k,f2c,k2f,k2c;
    cout <<CYAN   "1.Celcius to Fahrenheit"    RESET<<endl;
    cout <<YELLOW "2.Celcius to Kelvin"        RESET<<endl;
    cout <<BLUE   "3.Fahrenheit to Celcious"   RESET<<endl;
    cout <<GREEN  "4.Fahrenheit to Kelvin" RESET<<endl;
    cout <<RED  "5.Kelvin to Celcious" RESET<<endl;
    cout <<CYAN  "6.Kelvin to Fahrenheit" RESET<<endl;
    cout <<YELLOW  "7.Degree to Radian" RESET<<endl;
    cout <<GREEN  "8.BACK" RESET<<endl;
    cout <<CYAN   ">> "              RESET;
    cin >> ch;
    switch(ch)
    {
        case 1:
        cout << "Enter Celcius: ";
        cin>>n;
        c2f=(n*9/5)+32;
        cout << "Fahrenheit: "<<c2f<<endl;
        getch();
        tc();
        break;
        case 2:
        cout << "Enter Celcius: ";
        cin>>n;
        c2k=n+273.15;
        cout << "Kelvin: "<<c2k<<endl;
        getch();
        tc();
        break;
        case 3:
        cout << "Enter Fahrenheit: ";
        cin>>n;
        f2c=(n-32)*5/9;
        cout << "Celcius: "<<f2c<<endl;
        getch();
        tc();
        break;
        case 4:
        cout << "Enter Fahrenheit: ";
        cin>>n;
        f2k=(n-32)*5/9+273.15;
        cout << "Kelvin: "<<f2k<<endl;
        getch();
        tc();
        break;
        case 5:
        cout << "Enter Kalvin: ";
        cin>>n;
        k2c=n-273.15;
        cout << "Celcius: "<<k2c<<endl;      
        getch();
        tc();
        break;
        case 6:
        cout << "Enter Kalvin: ";
        cin>>n;
        k2f=(n-273.15)*9/5+32;
        cout << "Fahrenheit: "<<k2f<<endl;
        getch();
        tc();
        break;
        case 7:
        cout << "Enter Degree: ";
        cin>>n;
        d2r=n*(pi/180);
        cout << "Radian: "<<d2r<<endl;
        getch();
        tc();
        break;
        case 8:
        menu();
        break;
        default:
        cout <<RED "WRONG CHOICE!!" RESET<<endl;
        getch();
        tc();
    }
}
void add()
{
    double n1,n2;
    double sum;
    cout << "\t\tCalculate Addition\n"<<endl<<endl;
    cout << "How many number you want to add: ";
    cin>>n1;
    cout << "Enter "<<n1<<" numbers for Addition"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>n2;
        sum=sum+n2;
    }
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
