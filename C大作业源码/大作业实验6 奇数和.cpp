#include<iostream>
using namespace std;

int main(){
//	<1>“ 9 计算从1到输入数之间的奇数和 （for）”
//		从键盘上输入一个正整数，输出1到该数之间所有奇数和。要求用for循环语句实现。
	int oddSum,i,n1;
	cout<<"请输入一个数n1，计算从1到n1之间所有的奇数和：";
	cin>>n1;
	oddSum=0;
	for(i=1;i<=n1;i+=2){
		oddSum+=i;
	}
	cout<<oddSum;
	
	
	
	return 0;
}
