#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	printf("%d\n",sizeof(short));
//	return 0;
//}

//int a = 100;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	int a = 10;//�ֲ�����-�����ڴ���飨{}���ڲ��ı���
//	printf("%d\n",a);
//	return 0;
//}

int main()
{
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	//��������-ʹ�����뺯��scanf_s
	scanf("%d%d",&num1,&num2);//ȡ��ַ����&
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum = %d\n",sum);
	return 0;
}

