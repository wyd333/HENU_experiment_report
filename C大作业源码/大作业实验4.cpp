#include<iostream>
#include<stdio.h>
#define PI 3.14
using namespace std;

int main(){
	
	int num5,ge,shi,bai;
	cout<<"输入一个三位以内（含三位）的正整数：";
	cin>>num5;
	ge=num5%10;
	shi=num5/10%10;
	bai=num5/100%10;
	cout<<"这个数的位数是：";
	if(bai!=0){
		cout<<"3"<<endl;
	}else if(bai==0 && shi!=0){
		cout<<"2"<<endl;
	}else{
		cout<<"1"<<endl;
	}
	printf("个位：%d\t",ge);
	printf("十位：%d\t",shi);
	printf("百位：%d\n",bai);


}
