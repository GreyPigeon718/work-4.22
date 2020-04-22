#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Sum_Solution(int n) {
	int res = n;
	boolean flag = (n > 0) && ((res += Sum_Solution(n - 1)) > 0);
	return res;

}
int a = 0;
int add(int n)
{
	int x = n;
	return x ?add(x-1)+a ,a++:1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = add(n);
	printf("%d", sum);
	return 0;
}