#include<iostream>
#include<stdio.h>
#define PI 3.14
using namespace std;

int main(){
	
	int num5,ge,shi,bai;
	cout<<"����һ����λ���ڣ�����λ������������";
	cin>>num5;
	ge=num5%10;
	shi=num5/10%10;
	bai=num5/100%10;
	cout<<"�������λ���ǣ�";
	if(bai!=0){
		cout<<"3"<<endl;
	}else if(bai==0 && shi!=0){
		cout<<"2"<<endl;
	}else{
		cout<<"1"<<endl;
	}
	printf("��λ��%d\t",ge);
	printf("ʮλ��%d\t",shi);
	printf("��λ��%d\n",bai);


}
