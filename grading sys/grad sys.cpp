// 2011Programming Exam Simulation Test p1.cpp : �w�q�D���x���ε{�����i�J�I�C
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
	{cout<<"��J��"<<number<<"��ǥͪ� Midterm Exam����:";
	cin>>me;}
	while(fe<0||fe>100)
	 {cout<<"��J��"<<number<<"��ǥͪ� Final Exam����:";
	 cin>>fe;}
	while(ct<0||ct>100)
	 {cout<<"��J��"<<number<<"��ǥͪ� Computer Test����:";
	 cin>>ct;}

		for(int j=1;j<=6;j++)
		{while(hw<0||hw>100)
			{cout<<"��J��"<<number<<"��ǥͪ���"<<j<<"�ӧ@�~����:";
		    cin>>hw;}
			hwsum+=hw;
			hw=-1;
		}
		score=me*0.25+fe*0.25+hwsum*0.30/6+ct*0.20;
		cout<<"��"<<number<<"��ǥͪ��[�v����:"<<score<<endl;
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
	cout<<"����ǥͤ��̰�����"<<max<<endl;
	cout<<"����ǥͤ��̧C����"<<min<<endl;
	cout<<"����ǥͤ�������"<<allsum/5<<endl;

	system("pause");
	return 0;
}

