#include<iostream>
using namespace std;

int main(){	

//<5> “13 求水仙花数”
//输出所有水仙花数。水仙花数是一个3位数，各位数字的立方之和等于他本身，例如：153= 13+53+33。
	int flowerN,ge,shi,bai;


	for(flowerN=100;flowerN<1000;flowerN++){
		ge=flowerN%10;
		shi=flowerN/10%10;
		bai=flowerN/100%10;
		if(flowerN==ge*ge*ge+shi*shi*shi+bai*bai*bai){
			cout<<flowerN<<"  ";
		}
	}





return 0;
}
