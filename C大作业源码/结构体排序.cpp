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
//<1> “22 学生成绩排序”
//定义学生结构体数组，长度为10，依次输入这十个学生的学号、姓名、成绩，利用冒泡排序，对这10个学生排序，
//从小到大输出这10个学生的信息，然后输出10个学生的总成绩和平均成绩

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
	cout << "10位学生的总成绩为 " << s_sum << endl;
	cout << "10位学生的平均成绩为 " << s_avg << endl;
	
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
	cout << "学号：" << x.sno << endl;
	cout << "姓名：" << x.name << endl;
	cout << "分数：" << x.grade << endl;
}
