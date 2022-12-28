//#include <stdio.h>
//int main()
//{
//	int* p;//局部变量指针未初始化，默认随机值
//	*p = 10;//也就是一个随机值被改成了10，，这可不兴乱搞啊
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i;
//	for (i = 0;i <= 11;i++)
//	{
//		//当指针指向的范围超过数组arr的范围时，p就是野指针
//		*(p++) = 0;
//	}
//	
//	return 0;
//}
//void print(int n)//进入函数内部，想一想n的生命域是什么
//{
//	int* p = &n;
//	*p = 20;
//}
//int main()
//{
//	int n = 15;
//	print(n);
//	//n的生命域就是函数内部，出了函数，变量n的就不在存在，内存空间就被销毁了
//	//所以在函数内部进行解引用赋值成20，但出了函数外部，那指针指向的那部分空间不存在了就变成野指针了
//	printf("%d\n", n);
//	
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int* p = NULL;
//	for (p = arr;*p < arr[9];)
//	{
//		*(p++) = 0;//把10个数都置成0；
//	}
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	char* ch = arr;
//	while (*ch != '\0')
//	{
//		*(ch++);
//	}
//	return  ch - arr;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int arr[5];
//	int* p = NULL;//数组最后一个元素后面个内存位置的指针
//	for (p = &arr[5];p > &arr[0];)
//	{
//		*(--p) = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5];
//	int* p = NULL;//数组最后一个元素后面个内存位置的指针
//	for (p = &arr[4];p >= &arr[0];p--)
//	{
//		*p = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}