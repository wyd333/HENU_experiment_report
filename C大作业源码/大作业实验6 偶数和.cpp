#include<iostream>
using namespace std;

int main(){
//	<2> “10 计算从1到输入数之间的偶数和 （while）”
//		从键盘上输入一个正整数，输出1到该数之间所有偶数和。要求用while语句实现。
	int evenSum,j,n2;
	cout<<"请输入一个数n2，计算从1到n2之间所有的偶数和：";
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
