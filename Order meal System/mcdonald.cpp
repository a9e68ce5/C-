// HW.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{cout<<"�Ҧ��M�\�Ҫ���������30������"<<endl;
	cout<<"�M�\:"<<endl;

cout<<"1.�j���J�\ $125"<<endl;
cout<<"2.���h���צN�Ƴ��\ $115"<<endl;
cout<<"3.�|�s�q�����\ $125"<<endl;
cout<<"4.���h�|�s�q���׳��\$145"<<endl;
cout<<"5.�������\$109"<<endl;
cout<<"6.�������\$105"<<endl;
cout<<"7.���J�����\$119"<<endl;
cout<<"8.�l�����L���\$125"<<endl;
cout<<"9.������$135"<<endl;
cout<<"10.�O�N���L���\$129"<<endl;
cout<<"����:"<<endl;
cout<<"(A)�i��,(B)����,(C)�n������,(D)���_�f�c��~���M30�j�M35"<<endl;
cout<<"(E)���� $40"<<endl;

int price=0;
char meal;
char goonorder='y',ml,fries,drink,drink1,drinklevelup,member;


while(goonorder=='y'||goonorder=='Y')
	{cout<<"�аݻݭn�����\�I?(��J�N��&�@�ߨϥΤj�g~):";
		cin>>meal;
	switch(meal)
	{  case '1':
       price+=125;
	   break;
	   case'8':
	   price+=125;
       break;
	   case '2':
	   price+=115;
       break;
	   case'3':
	   price+=125;
	   break;
	   case'4':
       price+=145;
	   break;
	   case'5':
	   price+=109;
	   break;
	   case'6':
	   price+=105;
	   break;
	   case'7':
	   price+=119;
	   break;
	   case'9':
	   price+=135;
	   break;
	   case'10':
	   price+=129;
	   break;
	   case 'E':
       price+=40;
	   break;
	   
	 case'A':
	cout<<"���M�Τj�M?(��JM/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	 case'B':
	cout<<"���M�Τj�M?(��JM/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	 case'C':
	cout<<"���M�Τj�M?(��JM/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	 case'D':
	cout<<"���M�Τj�M?(��JM/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	
	}
	if(meal=='1'||meal=='2'||meal=='3'||meal=='4'||meal=='5'||meal=='6'||meal=='7'||meal=='8'||meal=='9'||meal=='10')
	{{cout<<"���ƭn����(��J�N��&�@�ߨϥΤj�g~)?:";
	cin>>drink;
	if(drink=='A'|| drink=='B'||drink=='C'||drink=='D')
	{cout<<"�O�_+5���ɯŦ��j�M(Y/N)?";
		cin>>drinklevelup;
    	if(drinklevelup=='y'||drinklevelup=='Y')
	price+=5;};
	if(drink=='E')
	{cout<<"�������ܶ��[��10����!"<<endl;
	price+=10;
	};
	
	};
	

	cout<<"�O�_+10���N�����ɯŦ��j��(Y/N)?";
	cin>>fries;
	if(fries=='y'||fries=='Y')
		price+=10;
		
	
	
		
	};
cout<<"�O�_�[�I(Y/N)?";


cin>>goonorder;
	
	};
	
	cout<<"����j�ǥ��Ҷ�?";
	cin>>member;
	if (member=='y'||member=='Y')
		price=price*0.9;



	cout<<"�`�@"<<price<<"��"<<endl;
	
	

cout<<"���´f�U!";
	system("pause");
	return 0;
}

