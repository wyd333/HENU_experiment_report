#include<iostream>
#include<string.h>
using namespace std;


struct student {
	int sno;
	char name[20];
	float grade;
}Stu[10]{
	{101,"AAA",80},
	{102,"BBB",99},
	{103,"CSS",50},
	{104,"FTP",76.5},
	{105,"DNS",90.5},
	{106,"RMB",34},
	{107,"FBI",89},
	{108,"NBA",78},
	{109,"UFO",77},
	{110,"ERF",61}
};
	typedef struct student STUX;
	void bubbleSort2(STUX *p,int len);
	void print(STUX x);

//
//<1> ��22 ѧ���ɼ�����
//����ѧ���ṹ�����飬����Ϊ10������������ʮ��ѧ����ѧ�š��������ɼ�������ð�����򣬶���10��ѧ������
//��С���������10��ѧ������Ϣ��Ȼ�����10��ѧ�����ܳɼ���ƽ���ɼ�

int main(){

	STUX *p;
	p = Stu;
	bubbleSort2(p,10);
	float s_sum;
	s_sum = 0;
	for(int i=0;i<10;i++){
		s_sum += Stu[i].grade; 
	}
	float s_avg = s_sum / 10;
	cout << "10λѧ�����ܳɼ�Ϊ " << s_sum << endl;
	cout << "10λѧ����ƽ���ɼ�Ϊ " << s_avg << endl;
	
	return 0;
}
void bubbleSort2(STUX *p,int len){
	int xch;
	for(int i=0;i<len-1;i++){
		xch = 0;
		for(int j=0;j<len-1-i;j++){
			if( (p+j)->grade > (p+1+j)->grade ){
				struct student tmp;
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
		print(Stu[i]);
		cout<<endl;
	}
}
void print(STUX x){
	cout << "ѧ�ţ�" << x.sno << endl;
	cout << "������" << x.name << endl;
	cout << "������" << x.grade << endl;
}
