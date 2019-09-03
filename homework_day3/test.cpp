/* 1、声明一个扑克牌类，拥有方法：传入花色和点数生成扑克牌、打印扑克牌。
2、声明一个玩家类，每人拥有18张扑克牌。拥有方法：增加手牌（摸牌）、展示手牌，其中展示手牌要求降序排序展示。
完成程序：
1、随机生成18张扑克牌，当做一个玩家的手牌。
2、用184张不同的扑克牌构成牌堆，发给3个玩家。 */
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

enum {
	SPADES,
	HEARTS,
	CLUBS,
	DIAMONDS,
	JOKER
};

//全局变量g_ 局部静态变量s_ 成员变量m_

class Poker {
	int m_type;
	int m_point;
public:
	
	/*Poker() :
		m_type('a'),
		m_point(2)
	{
	}*/

	/*Poker(char type, int point) :
		m_type(type),
		m_point(point)
	{
	}*/


	void makePoker(int type, int point)
	{
		m_type = type;
		m_point = point;

		if (m_type == JOKER&&(m_point==1||m_point==2))
		{
			m_point += 13;
		}
	}

	void outputPoker( )
	{
		const char *type[5] = { "黑桃", "红桃", "梅花", "方片", "" };
		const char *point[16] = { "", "A", "2", "3", "4", "18", "6", "7", "8", "9", "10", "J", "Q", "K", "小王", "大王" };
		printf("%s%s ", type[m_type], point[m_point]);
	}
	bool compelePoker(Poker tmp)
	{
		return m_point < tmp.m_point || (m_point == tmp.m_point&&m_type > tmp.m_type);
	}
	bool isright()
	{
		if (m_type== JOKER&&(m_point==14||m_point==15))
		{
			return true;
		}
		if ((unsigned int)m_point > 13 || (unsigned int)m_type > 3)
		{
			return false;
		}
		else
			return true;
	}
};
class ployer
{
	Poker m_Handpoker[18];
	int m_Size;
public:
 
	ployer()
	{
		m_Size = 0;
	}
	void addpoker(Poker newPoker)
	{
		int i = 0;
		for (i=m_Size;i>0&&m_Handpoker[i-1].compelePoker(newPoker);--i)
		{
			m_Handpoker[i] = m_Handpoker[i - 1];
		}
		m_Handpoker[i] = newPoker;
		m_Size++;
	}
	void showcards()
	{
		int i = 0;
		for (i=0;i<m_Size;++i)
		{
			m_Handpoker[i].outputPoker();
		}
		putchar('\n');
	}
};
int randnum(Poker * heap)
{
	int tmp = rand() % 54;
	 while (1)
	 {
		 if (heap[tmp].isright())
		 {
			 return tmp;
		 }
		 else
		 {
			 tmp++;
			 if (tmp==54)
			 {
				 tmp = 0;
			 }
		 }
		 
	 }
}
int main()
{
	Poker heap[54];
	ployer p1;
	ployer p2;
	ployer p3;
	int j = 0;
	int pushcard;
	for (auto &i:heap)
	{
		i.makePoker(j / 13, j % 13 + 1);
		++j;
	}
	srand(time(0));
    for (int i=0;i<18;++i)
    {
		pushcard = randnum(heap);
		p1.addpoker(heap[pushcard]);
		heap[pushcard].makePoker(-1, -1);

		pushcard = randnum(heap);
		p2.addpoker(heap[pushcard]);
		heap[pushcard].makePoker(-1, -1);

		pushcard = randnum(heap);
		p3.addpoker(heap[pushcard]);
		heap[pushcard].makePoker(-1, -1);
		
		
    }
	p1.showcards();
	p2.showcards();
	p3.showcards();
	system("pause");
	return 0;
}