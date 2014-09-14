#include<iostream>
using namespace std;
void convert(char *str,size_t beg,size_t end)
{
	size_t j = end-1;
	for (size_t i = beg;i<j;i++)
	{
		swap(str[i],str[j--]);
	}
}
void convertstr(char *str,int n,int m)
{
	if (NULL == str)
	{
		return ;
	}
	if (m >= n)
	{
		convert(str,0,n);
	}
	convert(str,0,m);
	convert(str,m,n);
	convert(str,0,n);
}
//int main()
//{
//	char str[]="abcdef";
//	convertstr(str,6,2);
//	return 0;
//}
