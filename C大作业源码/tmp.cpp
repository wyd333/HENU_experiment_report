#include<iostream>
#include<string.h>
using namespace std;
//�� ����ѭ����䣬��ʵ��5��СС����������������ʵ�֣�5��
//����ֻ��ѡ���˳�����������Ž���������ִ��һ����������ʾ�û�������һ�����������룻
int main(){	
	char judge;
	int flag=0;
	do{
					cout<<"��ѡ������Ҫ��ģʽ��";
		int m;
		cin>>m;
		switch (m) {
		case 1:
			int oddSum,i,n1;
			cout<<"������һ����n1�������1��n1֮�����е������ͣ�";
			cin>>n1;
			oddSum=0;
			for(i=1;i<=n1;i+=2){
				oddSum+=i;
			}
			cout<<oddSum<<endl;
			break;
		case 2:
			int evenSum,j,n2;
			cout<<"������һ����n2�������1��n2֮�����е�ż���ͣ�";
			cin>>n2;
			evenSum=0;
			j=2;
			while(j<=n2){
				evenSum+=j;
				j+=2;
			}
			cout<<evenSum;
			break;
			default:
				//TODO
				break;
		}
		cout<<"�Ƿ��˳���(Y)";
		cin>>judge;
		if(judge=='Y'){
			flag=1;
			break;
		}else{
			cout<<"��ѡ������Ҫ��ģʽ��";
		}		
	}while(flag==0);
	
	return 0;
}
