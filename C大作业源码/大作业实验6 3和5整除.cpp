#include<iostream>
using namespace std;

int main(){	

//<4> ��12 �󼴱�3�����ֱ�5����������
//�Ӽ��������������������������֮���һ������3�����ֱ�5����������

	int lLimit,uLimit,i;
	cout<<"��Ӽ����������������������������֮���һ������3�����ֱ�5��������: ";
	cin>>lLimit>>uLimit;
	for(i=lLimit;i<=uLimit;i++){
		if(i%3==0 && i%5==0){
			cout<<i;
			break;
		}
	}




return 0;
}
