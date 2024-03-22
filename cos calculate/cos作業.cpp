// cos作業.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{double x,k,twok=1,cos=0;
cout<<"key in x:";
cin>>x;
for( k=0;k<=10;k++)//累加SUM
{	for(double n=1;n<=2*k;n++)//計算2k階層
	{twok*=n;}
cos+=pow(-1,k)*pow(x,2*k)/twok;
twok=1;
}



cout<<"cos("<<x<<")="<<cos;




	system("pause");
	return 0;
}

