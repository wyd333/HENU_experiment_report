#include<iostream>
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct ZH)
#define PI 3.14
using namespace std;

int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}
float mul(float x,float y){
	return x*y;
}
float div(float x,float y){
	return x/y;
}
int weishu(int x){
	int ge,shi,bai;
	ge=x%10;
	shi=x/10%10;
	bai=x/100%10;
	if(bai!=0){
		printf("个位：%d\t",ge);
		printf("十位：%d\t",shi);
		printf("百位：%d\n",bai);
		cout<<"这个数的位数是：";
		return 3;
		
	}else if(bai==0 && shi!=0){
		printf("个位：%d\t",ge);
		printf("十位：%d\n",shi);
		cout<<"这个数的位数是：";
		return 2;
	}else{
		printf("个位：%d\n",ge);
		cout<<"这个数的位数是：";
		return 1;
	}
}
double area(double x){
	return PI*x*x;
}
void year(int x){
	if((x%4 == 0 && x%100 != 0) || x%400 == 0){
		printf("%d是闰年！",x);
	}else{
		printf("%d不是闰年！",x);
	}
}
void score(int x){
	while(x<0 || x>100){
		cout<<"成绩输入错误!"<<endl;
		cout<<"请再输入一个成绩：";
	}
	switch (x/10) {
	case 10:
	case 9:
		cout<<"优秀"<<endl;
		break;
	case 8:
		cout<<"良"<<endl;
		break;
	case 7:
		cout<<"中"<<endl;
		break;
	case 6:
		cout<<"及格"<<endl;
		break;
		default:
			cout<<"不及格"<<endl;
			break;
	}	
}
int oddSum(int x){
	int sum=0;
	int i;
	for(i=1;i<=x;i+=2){
		sum+=i;
	}
	return sum;
}
int evenSum(int x){
	int sum=0;
	int j=2;
	while(j<=x){
		sum+=j;
		j+=2;
	}
	return sum;
}
void threeMul(int x){
	int i=1;
	do{
		if(i%3==0){
			cout<<i<<"  ";
		}
		i++;
	}while(i<=x);
}
void Number(int x,int y){
	int i;
	for(i=x;i<=y;i++){
		if(i%3==0 && i%5==0){
			cout<<i<<endl;
			break;
		}
	}
}
void flowerN(){
	int ge,shi,bai;
	int i;
	for(i=100;i<1000;i++){
		ge=i%10;
		shi=i/10%10;
		bai=i/100%10;
		if(i==ge*ge*ge+shi*shi*shi+bai*bai*bai){
			cout<<i<<"  ";
		}
	}	
}
void maxmin(double x,double y){
	double p,q;
	p=max(x,y);
	q=min(x,y);
	x=p;
	y=q;
	printf("较大值为：%4.2f\n",x);
	printf("较小值为：%4.2f\n",y);
}
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
void asum(int a[][3],int len){
	int sum = 0;
	for(int i=0;i<len;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	cout<<"主对角线的元素和sum= "<<sum;
	cout<<endl;
}
void countWord(char str[]){    //19
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

typedef struct Student{
	int sno;
	struct Student *next;
}STU;
struct stu {
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
typedef struct stu STUX;

void print(STUX x){
	cout << "学号：" << x.sno << endl;
	cout << "姓名：" << x.name << endl;
	cout << "分数：" << x.grade << endl;
}
void bubbleSort2(STUX *p,int len){
	void print(STUX x);
	int xch;
	for(int i=0;i<len-1;i++){
		xch = 0;
		for(int j=0;j<len-1-i;j++){
			if( (p+j)->grade > (p+1+j)->grade ){
				struct stu tmp;
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

struct ZH *Create();
void Shu(struct ZH *head2);
void Fang(struct ZH **head2);
struct ZH{
	int z;
	struct ZH *next;
};

int main(){
	cout<<"  ******************************************"<<endl;
	cout<<"  *             【小小计算器】             *"<<endl;
	cout<<"  *    1 加法                              *"<<endl;
	cout<<"  *    2 减法                              *"<<endl;
	cout<<"  *    3 乘法                              *"<<endl;
	cout<<"  *    4 除法                              *"<<endl;
	cout<<"  *    5 判断数字的位数                    *"<<endl;
	cout<<"  *    6 计算圆面积                        *"<<endl;
	cout<<"  *    7 判断闰年                          *"<<endl;
	cout<<"  *    8 成绩转换                          *"<<endl;
	cout<<"  *    9 计算从1到输入数间奇数和           *"<<endl;
	cout<<"  *    10 计算从1到输入数间偶数和          *"<<endl;
	cout<<"  *    11 输出从1到输入数之间所有3的倍数   *"<<endl;
	cout<<"  *    12 求既被3整除又被5整除的数         *"<<endl;
	cout<<"  *    13 求水仙花数                       *"<<endl;
	cout<<"  *    14 求最大值                         *"<<endl;
	cout<<"  *    15 求最大值与最小值                 *"<<endl;
	cout<<"  *    16 指针冒泡排序                     *"<<endl;
	cout<<"  *    17 矩阵转置                         *"<<endl;
	cout<<"  *    18 求对角线和                       *"<<endl;
	cout<<"  *    19 统计单词个数                     *"<<endl;
	cout<<"  *    20 静态创建链表                     *"<<endl;
	cout<<"  *    21 动态创建链表                     *"<<endl;
	cout<<"  *    22 学生成绩排序                     *"<<endl;
	cout<<"  ******************************************"<<endl;
		cout<<endl<<endl;
		
		
	int a,b;
	float c,d;
	int flag=0;//判断是否退出程序
	int N;
	
	cout<<"【小小计算器】请选择模式 输入模式前序号>: ";


	do{
		scanf("%d",&N);
		cout<<endl;
		switch (N) {
		case 1://加法运算
			int addResult;
			cout<<"1、加法--请输入两个整数a、b："<<endl;
			cin>>a>>b;
			addResult=add(a,b);
			cout<<"a+b= ";	
			printf("%d (dec)",addResult);
			printf("  %o (otc)",addResult);
			printf("  %x (hex)\n\n",addResult);
			break;
		case 2://减法运算
			int subResult;
			cout<<"2、减法--请输入两个整数a、b："<<endl;
			cin>>a>>b;
			subResult=sub(a,b);
			cout<<"a-b= ";	
			printf("%d (dec)",subResult);
			printf("  %o (otc)",subResult);
			printf("  %x (hex)\n\n",subResult);
			break;
		case 3://乘法运算
			float mulResult;
			cout<<"3、乘法--请输入两个实数c、d："<<endl;
			cin>>c>>d;
			mulResult=mul(c,d);
			cout<<"c*d= ";	
			printf("%f (小数)\t",mulResult);
			printf("%e (指数)\n\n",mulResult);
			break;
		case 4://除法
			float divResult;
			cout<<"4、除法--请输入两个实数c、d："<<endl;
			cin>>c>>d;
			while(d==0){
				cout<<"除数为0，无法进行除法运算！！"<<endl;
				cout<<"请再输入：d= ";
				cin>>b;
			}
			divResult=div(c,d);
			cout<<"c÷d= ";	
			printf("%f (小数)\t",divResult);
			printf("%e (指数)\n\n",divResult);
			break;
		case 5://计算位数
			int n;
			cout<<"5、判断数字的位数--输入一个正整数n(0~999)：";
			cin>>n;
			cout<<weishu(n)<<endl;
			break;
		case 6://计算圆面积
			double r;
			cout<<"6、计算圆面积--请输入圆的半径r：  ";
			cin>>r;
			printf("面积为：%f\n",area(r));
			printf("保留两位小数：%6.2f\n\n\n",area(r));
			break;
		case 7://判断闰年
			int nian;
			cout<<"7、判断闰年--请输入一个年份：";
			cin>>nian;
			year(nian);
			break;
		case 8://成绩转换
			int grade;
			cout<<"8、成绩转换--请输入一个百分制成绩（0~100）：";
			cin>>grade;
			score(grade);
			break;
		case 9://计算从1到输入数间奇数和 
			int oN;
			cout<<"9、计算从1到n之间所有的奇数和--请输入一个数n：";
			cin>>oN;
			cout<<"1到"<<oN<<"之间的奇数和为 "<<oddSum(oN)<<endl;
			break;
		case 10://计算偶数和
			int eN;
			cout<<"10、计算从1到n之间所有的偶数和--请输入一个数n：";
			cin>>eN;
			cout<<"1到"<<eN<<"之间的偶数和为 "<<evenSum(eN)<<endl;
			break;
		case 11://输出从1到输入数之间所有3的倍数
			int n_3;
			cout<<"11、输出1到n间所有3的倍数--请输入一个正整数n：";
			cin>>n_3;
			threeMul(n_3);
			cout<<endl;
			break;
		case 12://求既被3整除又被5整除的数
			int a,b;
			cout<<"12、输出n1、n2两数间第一个既被3整除又被5整除的数\n请输入两个数：";
			cin>>a>>b;
			cout<<"这个数为: ";
			Number(a,b);
			break;
		case 13://求水仙花数
			cout<<"13、计算100-1000间所有的水仙花数: "<<endl;
			flowerN();
			cout<<endl;
			break;
		case 14://最大值
			double p,q;
			cout<<"14、计算最大值--请输入两个实数: ";
			cin>>p>>q;
			cout<<"最大的数是: "<<max(p,q)<<endl;
			break;
		case 15://求最大值最小值
			double n1,n2;
			cout<<"15、计算最大值与最小值--请输入两个实数：";
			cin>>n1>>n2;
			maxmin(n1,n2);	
			break;
		case 16://冒泡排序
			int c[5];
			int *w;
			w = c;
			for(int i=0;i<5;i++){
				cin>>c[i];
			}
			bubbleSort(w,5);
			break;
		case 17://矩阵转置
			int a1[3][4];
			int b1[4][3];
			for(int i=0;i<3;i++){
				for(int j=0;j<4;j++){
					cin>>a1[i][j];
				}
			}
			for(int i=0;i<3;i++){
				for(int j=0;j<4;j++){
					b1[j][i]=a1[i][j];
				}
			}
			for(int i=0;i<4;i++){
				for(int j=0;j<3;j++){
					cout<<b1[i][j]<<'\t';
				}
				cout<<endl;
			}
			break;
			
		case 18://求对角线和
			int x[3][3];
			cout<<"18、求对角线和--请输入一个3*3的整数矩阵：";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cin>>x[i][j];
				}
			}
			asum(x,3);
			break;
			
		case 19://统计单词个数
			char str[101];
			cout<<"19、统计单词个数--请输入一行单词，单词间用空格分隔开："<<endl;
			fflush(stdin);
			gets(str);
			countWord(str);
			cout<<endl;
			break;
			
		case 20://静态链表
			STU stu1,stu2,stu3,stu4;
			STU *head,*t;
			stu1.sno = 101; stu2.sno = 102;
			stu3.sno = 103; stu4.sno = 104;
			head = &stu1;
			stu1.next = &stu2; stu2.next = &stu3;
			stu3.next = &stu4; stu4.next = NULL;
			t = head;
			int i;
			i = 0;
			do{
				i++;
				printf("stu%d.sno = %d \n",i,t->sno);
				t = t->next;
			}while(t != NULL);
			break;
			
		case 21://创建动态链表
			cout << "21、输出动态链表--从键盘上输入正整数，当输入一个负数后将链表中的数据输出。" << endl;
			struct ZH *head2,*pointer;
			head2=Create();
			Shu(head2);
			pointer = head2;
			while(pointer != NULL){
				pointer = pointer->next;
			}
			putchar('\n');
			Fang(&head2);
			break;
				
		case 22://结构体排序
			cout << "22、按照10位同学的分数进行排序";
			STUX *s;
			s = Stu;
			bubbleSort2(s,10);
			float s_sum;
			s_sum = 0;
			for(int i=0;i<10;i++){
				s_sum += Stu[i].grade; 
			}
			float s_avg;
			s_avg = s_sum / 10;
			cout << "10位学生的总成绩为 " << s_sum << endl;
			cout << "10位学生的平均成绩为 " << s_avg << endl;
			break;
			
		default:
			cout<<"▲请选择正确的模式序号！！！";
			break;
		}
		char judge;
		cout<<"..............................."<<endl;
		cout<<"【是否退出程序？】\n▲按(Y)退出程序，按其它任意键继续..."<<endl;
		cin>>judge;
		if(judge=='Y'){
			flag=1;
			break;
		}else{
			cout<<"▲请重新选择模式：";
		}	
	}while(flag==0);
	return 0;
}

////动态链表
struct ZH *Create(){
	struct ZH *head2=NULL,*p,*p1;
	p=(struct ZH*)malloc(LEN);
	scanf("%d",&p->z );
	p->next =NULL;
	while(p->z >= 0){
		if(head2==NULL){
			head2=p;
			p1=p;
		}else{
			p1->next =p;
			p1=p;
		}
		p=(struct ZH*)malloc(LEN);
		scanf("%d",&p->z);
		p->next =NULL;
	}
	p1->next =NULL;
	return head2;
}
//输出链表
void Shu(struct ZH *head2){
	struct ZH *p;
	p=head2;
	while(p!=NULL){
		printf("%3d",p->z );
		p=p->next ;
	}
	putchar('\n');
}
//释放链表
void Fang(struct ZH **head2){
	struct ZH *p;
	while(*head2!=NULL){
		p=*head2;
		*head2=(*head2)->next ;
		free(p);
	}
	*head2=NULL;
}
