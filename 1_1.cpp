#include <iostream>
#include <string.h>
using namespace std;
class Cat{
private:
	char name[20];
	int sex;     //female 1, male 2
	int age;
	char color[20];
	float weight;
public:
	void getDate(char a[20],int b,int c,char d[20],float e)
	{
		strcpy (name,a);
		sex=b;
		age=c;
		strcpy (color,d);
		weight=e;
	}
	void print(){
		int i=0,j=0;
		cout<<"���֣�";
		while (name[i]!=0){
			cout<<name[i];
			i++;}
		cout<<endl<<"�Ա�";
		if (sex=1)
			cout<<"��";
		else if (sex=0) 
			cout<<"��";
		cout<<endl<<"���䣺"<<age<<endl;
		cout<<"ëɫ��";
		while (color[j]!=0){
			cout<<color[j];
			j++;
		}cout<<endl;
		cout<<"���أ�"<<weight;
		cout<<endl;
	}
};
int main()
{
	Cat cat1,cat2;
	char a[20]="Sam",b[20]="black";
	cout<<"cat1:"<<endl;
	cat1.getDate(a,1,12,b,12.3);
	cat1.print();
	cout<<endl;
	strcpy(a,"Tom");
	strcpy(b,"white");
	cout<<"cat2:"<<endl;
	cat2.getDate(a,0,8,b,8.34);
	cat2.print();
}











