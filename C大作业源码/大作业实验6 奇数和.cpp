#include<iostream>
using namespace std;

int main(){
//	<1>�� 9 �����1��������֮��������� ��for����
//		�Ӽ���������һ�������������1������֮�����������͡�Ҫ����forѭ�����ʵ�֡�
	int oddSum,i,n1;
	cout<<"������һ����n1�������1��n1֮�����е������ͣ�";
	cin>>n1;
	oddSum=0;
	for(i=1;i<=n1;i+=2){
		oddSum+=i;
	}
	cout<<oddSum;
	
	
	
	return 0;
}
