#include <iostream>
using namespace std;
// ȫ�ֵ�operator==
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	/* �������ʡ�Ե�����£����������Ӧ��������ڲ� */
	bool operator==(const Date& d2)/*���������this��ָ��ĵ��ú����Ķ��� */
	{
		return _year == d2._year&&_month == d2._month&&_day == d2._day;
	}
	//private:
	int _year;
	int _month;
	int _day;
};
// ����ᷢ����������س�ȫ�ֵľ���Ҫ��Ա�����ǹ��еģ���ô�������ˣ���װ����α�֤��
// ������ʵ���������Ǻ���ѧϰ����Ԫ��������߸ɴ����سɳ�Ա������
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//	&& d1._month == d2._month
//		&& d1._day == d2._day;
//}

void Test()
{
	Date d1(2018, 9, 27);
	Date d2(2018, 9, 27);
	cout << (d1 == d2) << endl;
}
int maindsr()
{
	Test();
	system("pause"); 
	return 0;
}