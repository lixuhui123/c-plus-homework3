#include <iostream>
using namespace std;
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const  Date& d)/* �������캯���Ǻ������ص�һ����ʽ��ֻ��һ�������ұ��������� */
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main26()
{
	Date d1;
	Date d2(d1);
	system("pause"); 
	return 0;
}