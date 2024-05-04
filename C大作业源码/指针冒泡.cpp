#include<iostream>
using namespace std;

void bubbleSort(int *p,int len){
	int xch;
	for(int i=0;i<len-1;i++){
		xch = 0;
		for(int j=0;j<len-1-i;j++){
			if( *(p+j) < *(p+j+1) ){
				int tmp;
				tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;
				xch = 1;
			}
		}
		if(!xch){
			break;
		}
	}
	for(int i=0;i<len;i++){
		cout<<p[i]<<'\t';
	}
}


int main(){
	int arr[5];
	int *p;
	p = arr;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	bubbleSort(p,5);
	return 0;
}
