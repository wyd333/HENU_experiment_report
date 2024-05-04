#include<iostream>
using namespace std;

int main(){	
//	<3> “11 输出从1到输入数之间所有3的倍数 （do-while）”
//		从键盘上输入一个正整数，输出1到该数之间所有3的倍数。要求用do-while实现。
//	
	int n3,k;
	k=1;
	cout<<"请输入一个正整数n3，输出1到n3间所有3的倍数：";
	cin>>n3;
	do{
		if(k%3==0){
			cout<<k<<"  ";
		}
		k++;
	}while(k<=n3);
	
	return 0;
}
