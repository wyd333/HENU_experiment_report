#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


//int asum[3][3];
//cout<<"18����Խ��ߺ�--������һ��3*3����������";
//for(i=0;i<3;i++){
//	for(j=0;j<3;j++){
//		cin>>asum[i][j];
//	}
//}
//for(i=0;i<3;i++){
//	for(j=0;j<3;j++){
//		if(i==j){
//			sum+=asum[i][j];
//		}
//	}
//}
//cout<<"���Խ��ߵ�Ԫ�غ�sum= "<<sum;
//break;

void asum(int a[][3],int len){
	int sum = 0;
	for(int i=0;i<len;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	cout<<"���Խ��ߵ�Ԫ�غ�sum= "<<sum;
	cout<<endl;
}

int main(){
	int a[3][3];
	cout<<"18����Խ��ߺ�--������һ��3*3����������";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	asum(a,3);
	return 0;
}
