#include <iostream>
//qsort �� �ַ�����������
int cmp_string(const void*p1,const void*p2)
{
	return strcmp((char*)p2,(char*)p1);
}
//qsort �� int�������� 
int cmp_int(const void *p1,const void *p2)
{
	return *(int *)p1 - *(int *)p2;         
}
//stdio���� 
void swap(int *p1,int *p2)
{
     int t;
     t = *p1;
     *p1=*p2;
     *p2=t;
}
//ð������ 
void sort(int a[],int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++) 
        {
            if(a[i]<a[j])
            {
                swap(&a[i],&a[j]);                  
            }
        }
    }
}
//�������� 
void putin(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        std::cin >> *(a+i);
    }
}
//������� 
void putout(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        std::cout << *(a+i)<<" ";
    }
}

/*int main()
{
	int n;
	std::cin>>n; 
    int a[n];
    putin(a,n);
    sort(a,n);
	putout(a,n);
    return 0;
 }*/
