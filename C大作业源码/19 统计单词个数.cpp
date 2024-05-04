#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


void countWord(char str[]){
	int num = 0;
	int word = 0;
	for(int i=0;str[i]!='\0';i++){
		if(!((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))){
			word=0;
		}else if(word==0){
			word=1;
			num++;
		}
	}
	cout<<endl;
	cout<<"共有 "<<num<<" 个单词。"<<endl;
}


int main(){	
	char str[101];
	cout<<"19、统计单词个数--请输入一行单词，单词间用空格分隔开："<<endl;
	gets(str);
	countWord(str);
	cout<<endl;
	
return 0;
}
