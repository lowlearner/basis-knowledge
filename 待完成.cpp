/*n进制转化为十进制*/
/*  strupr（）：将指定字符串的小谢字母转换为大写字母，其余不变
    strlen（）：求指定字符串的长度，即有效字符的个数
	包含于头文件<string.h>
*/
#include<stdio.h>
#include<string.h>
int main ()
{
	long t1;
	int i,n,t,t3;
	char a[100];
	printf("please input a number string:\n");
	gets(a);/*n进制数存入数组a中*/
	strupr(a);
	t3=strlen(a);
	t1=0;
	printf("please input n(2ot 8or 16) 
} 
     
