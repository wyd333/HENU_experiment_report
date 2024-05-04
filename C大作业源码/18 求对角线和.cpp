#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


//int asum[3][3];
//cout<<"18、求对角线和--请输入一个3*3的整数矩阵：";
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
//cout<<"主对角线的元素和sum= "<<sum;
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
	cout<<"主对角线的元素和sum= "<<sum;
	cout<<endl;
}

int main(){
	int a[3][3];
	cout<<"18、求对角线和--请输入一个3*3的整数矩阵：";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	asum(a,3);
	return 0;
}
