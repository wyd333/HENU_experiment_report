#include<iostream>
#include<stdio.h>
#define PI 3.14
using namespace std;
int main(){

//�Ӽ���������һ���ٷ��Ƶĳɼ��������Ӧ�ĵȼ��ɼ���
//100 �� 90   ����> ����
//80  �� 89   ����> ��
//70  �� 79   ����> ��
//60  �� 69   ����> ����
//0   �� 59   ����> ������
//	int score;
//	cout<<"������һ���ٷ��Ƴɼ���";
//	cin>>score;
//	switch (score/10) {
//	case 10:
//	case 9:
//		cout<<"����"<<endl;
//		break;
//	case 8:
//		cout<<"��"<<endl;
//		break;
//	case 7:
//		cout<<"��"<<endl;
//		break;
//	case 6:
//		cout<<"����"<<endl;
//		break;
//		default:
//			cout<<"������"<<endl;
//		break;
//	}
	
	int year;
	cout<<"7 �ж����� ������һ����ݣ�";
	cin>>year;
	if((year%4==0 && year%100!=0) || year%400==0){
		cout<<year<<"�����꣡"<<endl;
	}else{
		cout<<year<<"�������꣡"<<endl<<endl;
	}


return 0;
}
