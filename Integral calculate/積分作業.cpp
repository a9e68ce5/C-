// 積分作業.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{double i;
double sum=0,a,b;
do
{cout<<"please key in A>>";
cin>>a;
cout<<"please key in B>>";
cin>>b;
if(a>=b)
	cout<<"error,a should be less than b!!"<<endl;

}while(a>=b);
for(i=1;i<=10000;i++);
{
	
	


   sum+=pow((a+(b-a)/10000*(i-1)),1.5)+pow((a+(b-a)/10000*i),1.5+2*pow((a+(b-a)/10000*(i-1)),0.5)+2*pow((a+(b-a)/10000*i),0.5)+pow((a+(b-a)/10000*(i-1)),1)+pow((a+(b-a)/10000*i),1));
	
}	
	cout<<sum;
	
	system("pause");
	return 0;
}

