///*struct student{
//char name[32];
//int age;
//int class;
//bool sex;
//};
//д���������ú������صķ�ʽ��д����ͳ�Ƴ�һ���������ṹΪ��׼�Ľṹ�������У�
//1������ΪX�ĳ����˶��ٴ�
//2������ΪX�ĳ����˶��ٴ�
//3���༶ΪX�ĳ����˶��ٴ�
//4���Ա��X�ĳ����˶��ٴ�
//
//���磺����ΪX�Ŀ�����������������
//int countName(student * src, int n, char * name);
//tip:���Կ�����ȱʡ�����ķ�ʽ�����߻ص������ķ�ʽʵ�֡�*/
//#include <iostream>
//#include <Cstdio>
//#include <string.h>
//using namespace std;
//struct student {
//	char name[32];
//	int age;
//	int classes;
//	bool sex;
//}; 
// 
//int countName(student  src,   student value)
//{
//	if (!strcmp(src.name,value.name))
//	{
//		return 1;
//	}
//	return 0;
//}
//int countage(student  src, student value)
//{
//	if ( src.age==value.age)
//	{
//		return 1;
//	}
//	return 0;
//}
//int countsex(student  src, student value)
//{
//	if (src.sex == value.sex)
//	{
//		return 1;
//	}
//	return 0;
//}
//int countclass(student  src, student value)
//{
//	if (src.classes == value.classes)
//	{
//		return 1;
//	}
//	return 0;
//}
//int comple(student * src, int n, student value,int(*dealcom)(student , student)=countName)
//{
//	int count = 0, i = 0;
//	for (i=0;i<n;++i)
//	{
//		if (dealcom(src[i],value))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	student st[4] = {
//		{"chenglong",18,1,true},{"qiaobiluo",18,1,false},{"yachaoyue",20,2,false},{"caixukun",19,3,true}
//	};
//	student value = { "chenglong",18,1,true };
// 	/*p = countName;
//	p(st, 4, value);*/
//	cout << comple(st, 4, value, countclass);
//	system("pause"); 
//	return 0;
//}