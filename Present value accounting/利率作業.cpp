// 利率作業.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{double n, pv,pmt;
	cout<<"key in n:";
		cin>>n ;
    cout<<"key in PV:";
		cin>>pv ;
	
	
	
	for (double r=0.0100;r<=0.0300;r+=0.0010)
	{pmt=pv*(r/12)/(1-pow(1+r/12,-n*20));
	cout<<"when r = "<<r*100.00<<"% ,and monthly payment is $"<<pmt<<endl;	}
	system("pause");
	return 0;
}

