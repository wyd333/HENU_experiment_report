#include<iostream>
using namespace std;

int main(){
//	<2> ��10 �����1��������֮���ż���� ��while����
//		�Ӽ���������һ�������������1������֮������ż���͡�Ҫ����while���ʵ�֡�
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
	
	
	
	return 0;
}
