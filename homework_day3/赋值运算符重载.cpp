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
	Date& operator=(const Date& d)/* ��������ز���Ҳ������ */
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	Date d2(2018, 10,1);

	// ����d1���õı���������operator=��ɿ�����d2��d1��ֵҲ��һ���ġ�
	d1 = d2;
	system("pause"); 
	return 0;
}