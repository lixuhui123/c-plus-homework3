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
	Date& operator=(const Date& d)/* 运算符重载参数也是引用 */
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

	// 这里d1调用的编译器生成operator=完成拷贝，d2和d1的值也是一样的。
	d1 = d2;
	system("pause"); 
	return 0;
}