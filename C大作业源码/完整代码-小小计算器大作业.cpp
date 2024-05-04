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
		printf("��λ��%d\t",ge);
		printf("ʮλ��%d\t",shi);
		printf("��λ��%d\n",bai);
		cout<<"�������λ���ǣ�";
		return 3;
		
	}else if(bai==0 && shi!=0){
		printf("��λ��%d\t",ge);
		printf("ʮλ��%d\n",shi);
		cout<<"�������λ���ǣ�";
		return 2;
	}else{
		printf("��λ��%d\n",ge);
		cout<<"�������λ���ǣ�";
		return 1;
	}
}
double area(double x){
	return PI*x*x;
}
void year(int x){
	if((x%4 == 0 && x%100 != 0) || x%400 == 0){
		printf("%d�����꣡",x);
	}else{
		printf("%d�������꣡",x);
	}
}
void score(int x){
	while(x<0 || x>100){
		cout<<"�ɼ��������!"<<endl;
		cout<<"��������һ���ɼ���";
	}
	switch (x/10) {
	case 10:
	case 9:
		cout<<"����"<<endl;
		break;
	case 8:
		cout<<"��"<<endl;
		break;
	case 7:
		cout<<"��"<<endl;
		break;
	case 6:
		cout<<"����"<<endl;
		break;
		default:
			cout<<"������"<<endl;
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
	printf("�ϴ�ֵΪ��%4.2f\n",x);
	printf("��СֵΪ��%4.2f\n",y);
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
	cout<<"���Խ��ߵ�Ԫ�غ�sum= "<<sum;
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
	cout<<"���� "<<num<<" �����ʡ�"<<endl;
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
	cout << "ѧ�ţ�" << x.sno << endl;
	cout << "������" << x.name << endl;
	cout << "������" << x.grade << endl;
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
	cout<<"  *             ��СС��������             *"<<endl;
	cout<<"  *    1 �ӷ�                              *"<<endl;
	cout<<"  *    2 ����                              *"<<endl;
	cout<<"  *    3 �˷�                              *"<<endl;
	cout<<"  *    4 ����                              *"<<endl;
	cout<<"  *    5 �ж����ֵ�λ��                    *"<<endl;
	cout<<"  *    6 ����Բ���                        *"<<endl;
	cout<<"  *    7 �ж�����                          *"<<endl;
	cout<<"  *    8 �ɼ�ת��                          *"<<endl;
	cout<<"  *    9 �����1����������������           *"<<endl;
	cout<<"  *    10 �����1����������ż����          *"<<endl;
	cout<<"  *    11 �����1��������֮������3�ı���   *"<<endl;
	cout<<"  *    12 ��ȱ�3�����ֱ�5��������         *"<<endl;
	cout<<"  *    13 ��ˮ�ɻ���                       *"<<endl;
	cout<<"  *    14 �����ֵ                         *"<<endl;
	cout<<"  *    15 �����ֵ����Сֵ                 *"<<endl;
	cout<<"  *    16 ָ��ð������                     *"<<endl;
	cout<<"  *    17 ����ת��                         *"<<endl;
	cout<<"  *    18 ��Խ��ߺ�                       *"<<endl;
	cout<<"  *    19 ͳ�Ƶ��ʸ���                     *"<<endl;
	cout<<"  *    20 ��̬��������                     *"<<endl;
	cout<<"  *    21 ��̬��������                     *"<<endl;
	cout<<"  *    22 ѧ���ɼ�����                     *"<<endl;
	cout<<"  ******************************************"<<endl;
		cout<<endl<<endl;
		
		
	int a,b;
	float c,d;
	int flag=0;//�ж��Ƿ��˳�����
	int N;
	
	cout<<"��СС����������ѡ��ģʽ ����ģʽǰ���>: ";


	do{
		scanf("%d",&N);
		cout<<endl;
		switch (N) {
		case 1://�ӷ�����
			int addResult;
			cout<<"1���ӷ�--��������������a��b��"<<endl;
			cin>>a>>b;
			addResult=add(a,b);
			cout<<"a+b= ";	
			printf("%d (dec)",addResult);
			printf("  %o (otc)",addResult);
			printf("  %x (hex)\n\n",addResult);
			break;
		case 2://��������
			int subResult;
			cout<<"2������--��������������a��b��"<<endl;
			cin>>a>>b;
			subResult=sub(a,b);
			cout<<"a-b= ";	
			printf("%d (dec)",subResult);
			printf("  %o (otc)",subResult);
			printf("  %x (hex)\n\n",subResult);
			break;
		case 3://�˷�����
			float mulResult;
			cout<<"3���˷�--����������ʵ��c��d��"<<endl;
			cin>>c>>d;
			mulResult=mul(c,d);
			cout<<"c*d= ";	
			printf("%f (С��)\t",mulResult);
			printf("%e (ָ��)\n\n",mulResult);
			break;
		case 4://����
			float divResult;
			cout<<"4������--����������ʵ��c��d��"<<endl;
			cin>>c>>d;
			while(d==0){
				cout<<"����Ϊ0���޷����г������㣡��"<<endl;
				cout<<"�������룺d= ";
				cin>>b;
			}
			divResult=div(c,d);
			cout<<"c��d= ";	
			printf("%f (С��)\t",divResult);
			printf("%e (ָ��)\n\n",divResult);
			break;
		case 5://����λ��
			int n;
			cout<<"5���ж����ֵ�λ��--����һ��������n(0~999)��";
			cin>>n;
			cout<<weishu(n)<<endl;
			break;
		case 6://����Բ���
			double r;
			cout<<"6������Բ���--������Բ�İ뾶r��  ";
			cin>>r;
			printf("���Ϊ��%f\n",area(r));
			printf("������λС����%6.2f\n\n\n",area(r));
			break;
		case 7://�ж�����
			int nian;
			cout<<"7���ж�����--������һ����ݣ�";
			cin>>nian;
			year(nian);
			break;
		case 8://�ɼ�ת��
			int grade;
			cout<<"8���ɼ�ת��--������һ���ٷ��Ƴɼ���0~100����";
			cin>>grade;
			score(grade);
			break;
		case 9://�����1���������������� 
			int oN;
			cout<<"9�������1��n֮�����е�������--������һ����n��";
			cin>>oN;
			cout<<"1��"<<oN<<"֮���������Ϊ "<<oddSum(oN)<<endl;
			break;
		case 10://����ż����
			int eN;
			cout<<"10�������1��n֮�����е�ż����--������һ����n��";
			cin>>eN;
			cout<<"1��"<<eN<<"֮���ż����Ϊ "<<evenSum(eN)<<endl;
			break;
		case 11://�����1��������֮������3�ı���
			int n_3;
			cout<<"11�����1��n������3�ı���--������һ��������n��";
			cin>>n_3;
			threeMul(n_3);
			cout<<endl;
			break;
		case 12://��ȱ�3�����ֱ�5��������
			int a,b;
			cout<<"12�����n1��n2�������һ���ȱ�3�����ֱ�5��������\n��������������";
			cin>>a>>b;
			cout<<"�����Ϊ: ";
			Number(a,b);
			break;
		case 13://��ˮ�ɻ���
			cout<<"13������100-1000�����е�ˮ�ɻ���: "<<endl;
			flowerN();
			cout<<endl;
			break;
		case 14://���ֵ
			double p,q;
			cout<<"14���������ֵ--����������ʵ��: ";
			cin>>p>>q;
			cout<<"��������: "<<max(p,q)<<endl;
			break;
		case 15://�����ֵ��Сֵ
			double n1,n2;
			cout<<"15���������ֵ����Сֵ--����������ʵ����";
			cin>>n1>>n2;
			maxmin(n1,n2);	
			break;
		case 16://ð������
			int c[5];
			int *w;
			w = c;
			for(int i=0;i<5;i++){
				cin>>c[i];
			}
			bubbleSort(w,5);
			break;
		case 17://����ת��
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
			
		case 18://��Խ��ߺ�
			int x[3][3];
			cout<<"18����Խ��ߺ�--������һ��3*3����������";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cin>>x[i][j];
				}
			}
			asum(x,3);
			break;
			
		case 19://ͳ�Ƶ��ʸ���
			char str[101];
			cout<<"19��ͳ�Ƶ��ʸ���--������һ�е��ʣ����ʼ��ÿո�ָ�����"<<endl;
			fflush(stdin);
			gets(str);
			countWord(str);
			cout<<endl;
			break;
			
		case 20://��̬����
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
			
		case 21://������̬����
			cout << "21�������̬����--�Ӽ�����������������������һ�������������е����������" << endl;
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
				
		case 22://�ṹ������
			cout << "22������10λͬѧ�ķ�����������";
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
			cout << "10λѧ�����ܳɼ�Ϊ " << s_sum << endl;
			cout << "10λѧ����ƽ���ɼ�Ϊ " << s_avg << endl;
			break;
			
		default:
			cout<<"����ѡ����ȷ��ģʽ��ţ�����";
			break;
		}
		char judge;
		cout<<"..............................."<<endl;
		cout<<"���Ƿ��˳����򣿡�\n����(Y)�˳����򣬰��������������..."<<endl;
		cin>>judge;
		if(judge=='Y'){
			flag=1;
			break;
		}else{
			cout<<"��������ѡ��ģʽ��";
		}	
	}while(flag==0);
	return 0;
}

////��̬����
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
//�������
void Shu(struct ZH *head2){
	struct ZH *p;
	p=head2;
	while(p!=NULL){
		printf("%3d",p->z );
		p=p->next ;
	}
	putchar('\n');
}
//�ͷ�����
void Fang(struct ZH **head2){
	struct ZH *p;
	while(*head2!=NULL){
		p=*head2;
		*head2=(*head2)->next ;
		free(p);
	}
	*head2=NULL;
}
