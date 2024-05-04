#include<iostream>
#include<string.h>
using namespace std;
//② 利用循环语句，将实验5“小小计算器”基本功能实现（5）
//改造只有选择退出操作，程序才结束，否则执行一个操作后，提示用户进行下一个操作的输入；
int main(){	
	char judge;
	int flag=0;
	do{
					cout<<"请选择您需要的模式：";
		int m;
		cin>>m;
		switch (m) {
		case 1:
			int oddSum,i,n1;
			cout<<"请输入一个数n1，计算从1到n1之间所有的奇数和：";
			cin>>n1;
			oddSum=0;
			for(i=1;i<=n1;i+=2){
				oddSum+=i;
			}
			cout<<oddSum<<endl;
			break;
		case 2:
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
			break;
			default:
				//TODO
				break;
		}
		cout<<"是否退出？(Y)";
		cin>>judge;
		if(judge=='Y'){
			flag=1;
			break;
		}else{
			cout<<"请选择您需要的模式：";
		}		
	}while(flag==0);
	
	return 0;
}
