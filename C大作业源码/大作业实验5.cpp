#include<iostream>
#include<stdio.h>
#define PI 3.14
using namespace std;
int main(){

//从键盘上输入一个百分制的成绩，输出对应的等级成绩。
//100 — 90   ——> 优秀
//80  — 89   ——> 良
//70  — 79   ——> 中
//60  — 69   ——> 及格
//0   — 59   ——> 不及格
//	int score;
//	cout<<"请输入一个百分制成绩：";
//	cin>>score;
//	switch (score/10) {
//	case 10:
//	case 9:
//		cout<<"优秀"<<endl;
//		break;
//	case 8:
//		cout<<"良"<<endl;
//		break;
//	case 7:
//		cout<<"中"<<endl;
//		break;
//	case 6:
//		cout<<"及格"<<endl;
//		break;
//		default:
//			cout<<"不及格"<<endl;
//		break;
//	}
	
	int year;
	cout<<"7 判断闰年 请输入一个年份：";
	cin>>year;
	if((year%4==0 && year%100!=0) || year%400==0){
		cout<<year<<"是闰年！"<<endl;
	}else{
		cout<<year<<"不是闰年！"<<endl<<endl;
	}


return 0;
}
