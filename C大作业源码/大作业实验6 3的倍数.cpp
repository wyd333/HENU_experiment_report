#include<iostream>
using namespace std;

int main(){	
//	<3> ��11 �����1��������֮������3�ı��� ��do-while����
//		�Ӽ���������һ�������������1������֮������3�ı�����Ҫ����do-whileʵ�֡�
//	
	int n3,k;
	k=1;
	cout<<"������һ��������n3�����1��n3������3�ı�����";
	cin>>n3;
	do{
		if(k%3==0){
			cout<<k<<"  ";
		}
		k++;
	}while(k<=n3);
	
	return 0;
}
