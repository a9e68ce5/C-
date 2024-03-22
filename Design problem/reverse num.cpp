// 2011Programming Exam Simulation Test2-2.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

//*1+*10+*100.....
//log
//特例:結尾0(用if)
int _tmain(int argc, _TCHAR* argv[])

{float n=89742;
int sum=0,x,digit;
while(n>0)
{
cin>>n;
digit=log10(n);
double j=digit;
for(double i =0;i<=digit;i++)
{x=n/pow(10,i);
sum+=pow(10,j)*((x)%10);
j--;}
cout<<sum<<endl;
sum=0;}
	
	
	
	system("pause");
    return 0;

}

//if(n%10000!=0)
//cout<<n;
//else 
//{for(double i=0;i<=log(m/1000);i++)
	//	{cout<<m/1000/pow(10,i);}}
	