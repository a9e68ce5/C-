// cos�@�~.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{double x,k,twok=1,cos=0;
cout<<"key in x:";
cin>>x;
for( k=0;k<=10;k++)//�֥[SUM
{	for(double n=1;n<=2*k;n++)//�p��2k���h
	{twok*=n;}
cos+=pow(-1,k)*pow(x,2*k)/twok;
twok=1;
}



cout<<"cos("<<x<<")="<<cos;




	system("pause");
	return 0;
}

