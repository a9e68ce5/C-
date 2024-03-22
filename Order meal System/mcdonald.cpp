// HW.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{cout<<"所有套餐皆附有中薯及30元飲料"<<endl;
	cout<<"套餐:"<<endl;

cout<<"1.大麥克餐 $125"<<endl;
cout<<"2.雙層牛肉吉事堡餐 $115"<<endl;
cout<<"3.四盎司牛堡餐 $125"<<endl;
cout<<"4.雙層四盎司牛肉堡餐$145"<<endl;
cout<<"5.麥香魚餐$109"<<endl;
cout<<"6.麥香雞餐$105"<<endl;
cout<<"7.麥克雞塊餐$119"<<endl;
cout<<"8.勁辣雞腿堡餐$125"<<endl;
cout<<"9.麥脆雞$135"<<endl;
cout<<"10.板烤雞腿堡餐$129"<<endl;
cout<<"飲料:"<<endl;
cout<<"(A)可樂,(B)雪碧,(C)爽健美茶,(D)雀巢檸檬茶~中杯30大杯35"<<endl;
cout<<"(E)奶茶 $40"<<endl;

int price=0;
char meal;
char goonorder='y',ml,fries,drink,drink1,drinklevelup,member;


while(goonorder=='y'||goonorder=='Y')
	{cout<<"請問需要什麼餐點?(輸入代號&一律使用大寫~):";
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
	cout<<"中杯或大杯?(輸入M/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	 case'B':
	cout<<"中杯或大杯?(輸入M/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	 case'C':
	cout<<"中杯或大杯?(輸入M/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	 case'D':
	cout<<"中杯或大杯?(輸入M/L):";
	cin>>ml;
	if(ml=='m'||'M')
	price+=30;
	else
		price+=35;
	break;
	
	}
	if(meal=='1'||meal=='2'||meal=='3'||meal=='4'||meal=='5'||meal=='6'||meal=='7'||meal=='8'||meal=='9'||meal=='10')
	{{cout<<"飲料要什麼(輸入代號&一律使用大寫~)?:";
	cin>>drink;
	if(drink=='A'|| drink=='B'||drink=='C'||drink=='D')
	{cout<<"是否+5元升級成大杯(Y/N)?";
		cin>>drinklevelup;
    	if(drinklevelup=='y'||drinklevelup=='Y')
	price+=5;};
	if(drink=='E')
	{cout<<"奶茶的話須加價10元喔!"<<endl;
	price+=10;
	};
	
	};
	

	cout<<"是否+10元將中薯升級成大薯(Y/N)?";
	cin>>fries;
	if(fries=='y'||fries=='Y')
		price+=10;
		
	
	
		
	};
cout<<"是否加點(Y/N)?";


cin>>goonorder;
	
	};
	
	cout<<"有交大學生證嗎?";
	cin>>member;
	if (member=='y'||member=='Y')
		price=price*0.9;



	cout<<"總共"<<price<<"元"<<endl;
	
	

cout<<"謝謝惠顧!";
	system("pause");
	return 0;
}

