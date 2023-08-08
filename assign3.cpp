#include<bits/stdc++.h>
using namespace std;
int main(){

//Q1
int length;
cin>>length;
int breadth;
cin>>breadth;

if(length==breadth){
    cout<<"It is a square"<<endl;
}
else{
    cout<<"It is not a square"<<endl;
}



//Q2

int num;
cin>>num;
if(num<0){
    num = num * -1;
}
cout<<num<<endl;



//Q3

int sellP;
cin>>sellP;

int costP;
cin>>costP;

if(sellP > costP){
    cout<<"Profit = "<<sellP-costP<<endl;
}
else{
    cout<<"Loss = "<<costP-sellP<<endl;
}



//Q4

int number;
cin>>number;

if(number > 0){
    cout<<number<<endl;
}
else{
    cout<<"It is skipped since it is negative"<<endl;
}



//Q5

int num1,num2;
cin>>num1;
cin>>num2;

char oper;

cin>>oper;

switch(oper){
    case '+':
    cout<<num1+num2<<endl;
    break;

    case '-':
    cout<<num1-num2<<endl;
    break;

    case '*':
    cout<<num1*num2<<endl;
    break;

    case '/':
    cout<<num1/num2<<endl;
    break;

    default:
    cout<<"Enter a valid operator"<<endl;
}


//Q6

int marks;
cin>>marks;

if(marks>90 && marks<=100){
    cout<<"A+"<<endl;
}
else if (marks>80 && marks<=90){
    cout<<"A"<<endl;
}
else if(marks > 70 && marks <=80){
    cout<<"B+"<<endl;
}

else if(marks >60 && marks<=70){
    cout<<"B"<<endl;
}
else if(marks >50 && marks<=60){
    cout<<"C"<<endl;
}
else if(marks >40 && marks<=50){
    cout<<"D"<<endl;
}
else if(marks >30 && marks<=40){
    cout<<"E"<<endl;
}
else{
    cout<<"F"<<endl;
}






return 0;
}
