//#include <stdio.h>
//int main()
//{
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ�����ֵ
//	*p = 10;//Ҳ����һ�����ֵ���ĳ���10������ɲ����Ҹ㰡
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i;
//	for (i = 0;i <= 11;i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = 0;
//	}
//	
//	return 0;
//}
//void print(int n)//���뺯���ڲ�����һ��n����������ʲô
//{
//	int* p = &n;
//	*p = 20;
//}
//int main()
//{
//	int n = 15;
//	print(n);
//	//n����������Ǻ����ڲ������˺���������n�ľͲ��ڴ��ڣ��ڴ�ռ�ͱ�������
//	//�����ں����ڲ����н����ø�ֵ��20�������˺����ⲿ����ָ��ָ����ǲ��ֿռ䲻�����˾ͱ��Ұָ����
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
//		*(p++) = 0;//��10�������ó�0��
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
//	int* p = NULL;//�������һ��Ԫ�غ�����ڴ�λ�õ�ָ��
//	for (p = &arr[5];p > &arr[0];)
//	{
//		*(--p) = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5];
//	int* p = NULL;//�������һ��Ԫ�غ�����ڴ�λ�õ�ָ��
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