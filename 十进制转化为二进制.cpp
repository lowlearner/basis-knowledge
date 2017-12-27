/*十进制转化为二进制*/
#include<stdio.h>
int main ()
{
	int i,j,n,m;
	int a[16]={0};/*定义数组，元素初始为0*/
    printf("please input the decimalism number (0~32767):\n");
	scanf("%d",&n);
	for(m=0;m<15;m++)
	{
		i=n%2;
		j=n/2;
		n=j;
		a[m]=i;/*余数存入数组*/ 
	} 
	for(m=15;m>=0;m--)
	{ 
		printf("%d",a[m]);
		if (m%4==0)
		printf(" ");
	}
	return 0;
} 
