// 2011Programming Exam Simulation Test p1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{int number=1;
	float me=-1,fe=-1,hw=-1,ct=-1,hwsum=0;
	float max=-1,min=101,score,allsum=0;
 
	for(number=1; number<=5; number++)
	{while(me<0||me>100)
	{cout<<"輸入第"<<number<<"位學生的 Midterm Exam分數:";
	cin>>me;}
	while(fe<0||fe>100)
	 {cout<<"輸入第"<<number<<"位學生的 Final Exam分數:";
	 cin>>fe;}
	while(ct<0||ct>100)
	 {cout<<"輸入第"<<number<<"位學生的 Computer Test分數:";
	 cin>>ct;}

		for(int j=1;j<=6;j++)
		{while(hw<0||hw>100)
			{cout<<"輸入第"<<number<<"位學生的第"<<j<<"個作業分數:";
		    cin>>hw;}
			hwsum+=hw;
			hw=-1;
		}
		score=me*0.25+fe*0.25+hwsum*0.30/6+ct*0.20;
		cout<<"第"<<number<<"位學生的加權平均:"<<score<<endl;
		hwsum=0;
		allsum+=score;
		if(score>max)
			max=score;
		else max=max;
		if(score<min)
			min=score;
		else min=min;
		me=-1;
		fe=-1;
		hw=-1;
		ct=-1;

}
	cout<<"五位學生中最高分為"<<max<<endl;
	cout<<"五位學生中最低分為"<<min<<endl;
	cout<<"五位學生之平均為"<<allsum/5<<endl;

	system("pause");
	return 0;
}

