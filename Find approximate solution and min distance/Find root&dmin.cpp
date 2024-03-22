// 2011 Programming Exam Simulation Test P3.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<cmath>
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{char mode;
double x,y,dmin1,dmin2,dmin;
 float  loopStep;
 for(int i=1 ;i<=3;i++)
 {cout<<"Select 'A' or 'B' ==> A:step=0.1, B:step=0.05>>";
  cin>>mode;
   if(mode=='A')
	  {loopStep=0.1;
   cout<<"loopStep=0.1"<<endl;
       break;}
  else if(mode=='B')
	  {loopStep=0.05;
   cout<<"loopStep=0.05"<<endl;
       break;}
  
 }
 if(mode=='A'||mode=='B')
 {for( x=0.0;x<=1.0;x+=loopStep)
 {y=pow(x,2)-0.2*x-0.4;
  if(y>0)
 dmin1=(pow(x,2)-0.2*x-0.4);
 dmin2=(pow(x-loopStep,2)-0.2*(x-loopStep)-0.4);

 break;
 }
 dmin1=-(pow(x,2)-0.2*x-0.4);
 dmin2=-(pow(x-loopStep,2)-0.2*(x-loopStep)-0.4);
 if(dmin1<dmin2)
 cout<<"dmin="<<dmin1;
 else
 cout<<"dmin="<<dmin2;
 }
 else
	{ cout<<"Invalid input !!!"; 
	}
	system("pause");
	return 0;
}

