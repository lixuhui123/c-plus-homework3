#include <iostream>
#include <string.h>
using namespace std;
/*���캯��
1.���Ǹ�һ����ĳ�Ա�������������ڷ���ֵ�����ֺ�������ͬ����ʵ��������ʱ�Զ�����*/
class pk                                  
{
	char m_type;
	char m_point;
	pk()
	{

	}
	/*pk() :m_point(0), m_type(0)
	{

	}*/
	pk(char ty, char po)
	{
		m_type = ty;

	}
};
class Date
{
public:
	Date()
	{
		_year = 1900;
		_month = 1;
		_day = 1;
	}

	/*Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}*/
private:
	int _year;
	int _month;
	int _day;
};
class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};
class Person
{
private:
	String _name;
	int _age;
};
int mainas()
{
	Date d1;
	Person p;

	//system("pause"); 
	return 0;
}