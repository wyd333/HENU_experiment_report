#include<iostream>
using namespace std;

int main(){	

//<5> ��13 ��ˮ�ɻ�����
//�������ˮ�ɻ�����ˮ�ɻ�����һ��3λ������λ���ֵ�����֮�͵������������磺153= 13+53+33��
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
