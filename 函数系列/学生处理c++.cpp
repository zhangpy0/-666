#include<bits/stdc++.h>
using namespace std;

class stu
{
	public: 
		long long int ID;
		char name[20];
		float grade_1;
		float grade_2;
		float grade_3;
		float average;
};

void aver(stu *p,int n)
{
	for (int i = 0;i<n;i++)
	{
		(p+i)->average = ((p+i)->grade_1 + (p+i)->grade_2 + (p+i)->grade_3)/3.0;
	}
}

void highest(stu *p,int n)
{
	int j = 0;
	float t = 0;
	for (int i=0;i<n;i++)
	{
		if (((p+i)->average) > t)
		{
			t = ((p+i)->average);
			j = i;
		}
	}
	cout<<"��߷�ѧ��ID:"<<(p+j)->ID<<endl;
	cout<<"��߷�ѧ������:"<<(p+j)->name<<endl;
	cout<<"��߷�ѧ��ѧ��1�ɼ�:"<<(p+j)->grade_1<<endl;
	cout<<"��߷�ѧ��ѧ��2�ɼ�:"<<(p+j)->grade_2<<endl;
	cout<<"��߷�ѧ��ѧ��3�ɼ�:"<<(p+j)->grade_3<<endl;
	cout<<"��߷�ѧ��ƽ����:"<<(p+j)->average<<endl;
}

void input(stu *p,int n)
{
	for (int i = 0;i<n;i++)
	{
		cout<<"�����"<<i+1<<"��ѧ��ID:";
		cin>>(p+i)->ID;
		cout<<"�����"<<i+1<<"��ѧ������:";
		cin>>(p+i)->name;
		cout<<"�����"<<i+1<<"��ѧ��ѧ��1�ɼ�:"; 
		cin>>(p+i)->grade_1; 
		cout<<"�����"<<i+1<<"��ѧ��ѧ��2�ɼ�:"; 
		cin>>(p+i)->grade_2;
		cout<<"�����"<<i+1<<"��ѧ��ѧ��3�ɼ�:"; 
		cin>>(p+i)->grade_3;
	}
}

void output(stu *p, int n)
{
	for (int i=0;i<n;i++)
	{
		printf("ѧ��%s��ƽ����:%f\n",(p+i)->name,(p+i)->average);
	}
}
int main()
{
	int n;
	cout<<"����ѧ��������";
	cin>>n;
	stu *p;
	p = (stu *)malloc(n * sizeof(stu));
	input(p,n);
	aver(p,n);
	output(p,n);
	highest(p,n);
	free(p); 
}
