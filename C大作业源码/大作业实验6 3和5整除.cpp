#include<iostream>
using namespace std;

int main(){	

//<4> “12 求即被3整除又被5整除的数”
//从键盘上输入两个数，输出两个数之间第一个即被3整除又被5整除的数。

	int lLimit,uLimit,i;
	cout<<"请从键盘上输入两个数，将输出两个数之间第一个即被3整除又被5整除的数: ";
	cin>>lLimit>>uLimit;
	for(i=lLimit;i<=uLimit;i++){
		if(i%3==0 && i%5==0){
			cout<<i;
			break;
		}
	}




return 0;
}
