///*struct student{
//char name[32];
//int age;
//int class;
//bool sex;
//};
//写出函数，用函数重载的方式编写程序，统计出一个以上述结构为基准的结构体数组中：
//1、名字为X的出现了多少次
//2、年龄为X的出现了多少次
//3、班级为X的出现了多少次
//4、性别的X的出现了多少次
//
//例如：名字为X的可以是这样的声明：
//int countName(student * src, int n, char * name);
//tip:可以考虑用缺省参数的方式，或者回调函数的方式实现。*/
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