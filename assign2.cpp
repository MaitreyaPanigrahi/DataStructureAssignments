#include<bits/stdc++.h>
using namespace std;
int main(){

// Q1


int num1;
cout<<"Enter the number 1: ";
cin>>num1;

int num2;
cout<<"Enter the number 2: ";
cin>>num2;

cout<<"Is num1 equal to num2 "<<(num1 == num2)<<endl;



// Q2



int a;
cin>>a;
int b;
cin>>b;
cout<<(a<50 && a<b)<<endl;


// Q3

int boys = 17;
int total = (80*45)/100;
int girls = total - boys;
cout<<"Number of girls received grade A "<<girls<<endl;


//Q4


int num;
cin>>num;
int first,second,third,fourth,fifth;

first = num/10000;
num = num % 10000;

second = num/1000;
num = num%1000;

third = num/100;
num = num%100;

fourth = num/10;
num = num%10;

fifth = num;

int sum = first + fourth;
cout<<"The sum of first and 2nd last digit of the number is "<<sum<<endl;



// Q5



int number;
cout<<"Enter the number : ";
cin>>number;


int first = number/100;
number = number%100;

int second = number/10;
number = number%10;

int third = number;

int sum = first + second + third;

cout<<sum;



// Q6



float num1;
cin>>num1;
float num2;
cin>>num2;

cout<<"Sum is "<<num1+num2<<endl;
cout<<"Difference is "<<num1-num2<<endl;
cout<<"Product is "<<num1*num2<<endl;
cout<<"Division is "<<num1/num2<<endl;



return 0;
}
